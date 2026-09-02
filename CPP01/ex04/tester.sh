#!/bin/bash

RED='\033[0;31m'
GREEN='\033[0;32m'
RESET='\033[0m'

replacementFile="${1}.replace"
numOcurrences=0
ocurrencesForReplacement=0
actualOcurrences=0

if [ "$#" -lt 3 ]; then
  echo -e "${RED}Error: The script need at least 3 arguments${RESET}"
  exit 1
fi

make

./sed $1 $2 $3
if [ $? -ne 0 ]; then
  exit 1
fi

numOcurrences=$(grep -c "$2" "$1")
actualOcurrences=$(grep -c "$2" "$replacementFile")
ocurrencesForReplacement=$(grep -c "$3" "$replacementFile")

if [ $numOcurrences -eq $actualOcurrences ] || [ $actualOcurrences -ne 0 ]; then
  echo -e "${RED}Error: The ocurrences was not changed"
  exit 1
elif [ $ocurrencesForReplacement -ne $numOcurrences ]; then
  echo -e "${RED}Error: All the ocurrences were not changed"
  exit 1
fi

echo -e "${GREEN}The program execute succesfully ${RESET}"
diff --color "$1" "$replacementFile"
