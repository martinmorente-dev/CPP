/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 10:34:21 by mmorente          #+#    #+#             */
/*   Updated: 2026/09/01 11:54:33 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HPP
# define FILE_HPP

#include "sed.hpp"

class File
{
  private:
    std::string _file_name;
    std::string _to_find;
    std::string _replace_to;

    // Helper functions
    std::string _readFile(void) const;
    std::string _replaceAll(std::string content);
  public:
    File(std::string file_name, std::string to_find, std::string replace_to);
    ~File();

    void  newSed(void);
    
};

#endif
