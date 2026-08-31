/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validations.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 10:59:26 by mmorente          #+#    #+#             */
/*   Updated: 2026/08/31 12:28:07 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

static bool check_empty_parameter(char *argv[], int argc);
static bool check_file_exist(char *argv);
static bool check_extension(char *argv);
static bool is_only_spaces(std::string arg);

bool  validations(char *argv[], int argc)
{
  if (check_empty_parameter(argv, argc))
    return (false);
  if (!check_file_exist(argv[1]))
    return (false);
  if (!check_extension(argv[1]))
    return (false);
  return (true);
}

static bool check_empty_parameter(char *argv[], int argc)
{
  for(int i = 0; i < argc ; i++)
  {
    std::string arg(argv[i]);
    if (arg.empty() || argc != 4 || is_only_spaces(arg))
    {
      std::cout << RED << "The number of parameters introduced was incorrect or one parameter was empty" << RESET << std::endl;
      return (true);
    }
  }
  return (false);
}

static bool is_only_spaces(std::string arg)
{
  for(size_t i = 0; i < arg.length(); i++)
  {
    if (!std::isspace(arg[i]))
      return (false);
  }
  return (true);
}

static bool check_file_exist(char *argv)
{
  std::ifstream file(argv);

  if (file.is_open())
  {
    file.close();
    return (true);
  }
  else
  {
    std::cout << RED << "The file not exist" << RESET << std::endl;
    return (false);
  }
}

static bool check_extension(char *argv)
{
  std::string file_name(argv);
  size_t size = file_name.rfind(".txt");

  if (size != std::string::npos && size == file_name.size() - 4)
    return (true);
  else
  {
    std::cout << RED << "The file extension need to be a .txt" << RESET << std::endl;
    return (false);
  }
}
