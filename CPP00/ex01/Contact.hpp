/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 10:48:49 by mmorente          #+#    #+#             */
/*   Updated: 2026/08/25 10:39:28 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <ctime>
#include <cctype>
#include "common.hpp"

class Contact {

private:
  std::string 	_First_name;
  std::string 	_Last_name;
  std::string 	_Nickname;
  std::string 	_Phone_number;
  std::string 	_Darkest_secret;
  time_t	_Created_at;

  // Helper functions
  bool	_IsNotSpaceOnly(const std::string &field) const;
  bool	_IsNotSpecial(const std::string &field) const;

public:
  Contact();
  Contact(std::string first_name, std::string last_name, std::string nickname,
          std::string phone_number, std::string darkest_secret, time_t ceated_at);
  ~Contact();
  bool	ValidateData(std::string first_name, std::string last_name, std::string nickname,
					  std::string phone_number, std::string darkest_secret) const;


  std::string 	getFirstName()		const;
  std::string 	getLastName()		const;
  std::string 	getNickname()		const;
  std::string 	getPhoneNumber()	const;
  std::string 	getDarkestSecret()	const;
  time_t	getTimeCreation()		const;

};

#endif
