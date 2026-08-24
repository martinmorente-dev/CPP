/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 10:48:57 by mmorente          #+#    #+#             */
/*   Updated: 2026/08/24 15:37:45 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	_First_name = "";
	_Last_name = "";
	_Nickname = "";
	_Phone_number = "";
	_Darkest_secret = "";
	_Created_at = time(&_Created_at);
}

Contact::Contact(std::string first_name, std::string last_name, std::string nickname, 
				std::string phone_number, std::string darkest_secret, time_t created_at)
{
	_First_name = first_name;
	_Last_name = last_name;
	_Nickname = nickname;
	_Phone_number = phone_number;
	_Darkest_secret = darkest_secret;
	_Created_at = created_at;

}
Contact::~Contact(){}

std::string	Contact::getFirstName() const
{
	return (_First_name);
}

std::string	Contact::getLastName() const
{
	return (_Last_name);
}

std::string	Contact::getNickname() const
{
	return (_Nickname);
}

std::string	Contact::getPhoneNumber() const
{
	return (_Phone_number);
}

std::string Contact::getDarkestSecret() const
{
	return (_Darkest_secret);
}

time_t	Contact::getTimeCreation() const
{
	return (_Created_at);
}

// Helper function

bool	Contact::ValidateData(std::string first_name, std::string last_name, std::string nickname,
							  std::string phone_number, std::string darkest_secret) const
{
	if (!_IsNotSpaceOnly(first_name) || !_IsNotSpaceOnly(last_name) || !_IsNotSpaceOnly(nickname)
		|| !_IsNotSpaceOnly(phone_number) || !_IsNotSpaceOnly(darkest_secret))
	{
		std::cout << "You need to introduce all the data\n" << std::endl;
		return (false);
	}
	if (!_IsNotSpecial(first_name) || !_IsNotSpecial(last_name) || !_IsNotSpecial(nickname)
		|| !_IsNotSpecial(phone_number) || !_IsNotSpecial(darkest_secret))
	{
		std::cout << "The data is invalid\n" << std::endl;
		return (false);
	}
	return (true);
}

bool Contact::_IsNotSpaceOnly(const std::string &field) const
{
	 return field.find_first_not_of(" \t\n\r") != std::string::npos;
}

bool Contact::_IsNotSpecial(const std::string &field) const
{
	for(size_t i = 0; i < field.length(); i++)
	{
		if (!std::isprint(field[i]))
			return (false);
	}
	return (true);
}