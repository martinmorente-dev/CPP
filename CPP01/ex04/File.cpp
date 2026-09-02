/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 10:43:25 by mmorente          #+#    #+#             */
/*   Updated: 2026/09/02 11:50:36 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"
#include <fstream>

File::File(std::string file_name, std::string to_find, std::string replace_to)
{
  this->_file_name = file_name;
  this->_to_find = to_find;
  this->_replace_to = replace_to;
}

File::~File(){}

bool File::newSed()
{
  std::string content = _readFile();
  std::string new_content;
  std::string new_file_name = this->_file_name + ".replace";

  if (content.empty())
  {
    std::cout << RED << "The file is empty" << RESET << std::endl;
    return (false);
  }
  new_content = _replaceAll(content);
  if (content == new_content)
  {
    std::cout << RED << "There was no coincidence in the file" << RESET << std::endl;
    return (false);
  }
  std::ofstream new_file(new_file_name.c_str());
  if (!new_file.is_open())
  {
    std::cout << RED << "Unexpected error: The file " << this->_file_name + ".replace" << "was not created" << RESET << std::endl;
    return (false);
  }
  new_file << new_content;
  return (true);
}


// Helper functions
std::string File::_readFile(void) const
{
  std::ifstream file(_file_name.c_str());
  std::string content((std::istreambuf_iterator<char>(file)),
                        std::istreambuf_iterator<char>());
  file.close();
  return (content);
}

std::string File::_replaceAll(std::string content)
{
  size_t  pos = 0;

  while ((pos = content.find(this->_to_find, pos)) != std::string::npos)
  {
    content.erase(pos, this->_to_find.length());
    content.insert(pos, this->_replace_to);
    pos += this->_replace_to.length();
  }
  return (content);
}
