/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 11:30:55 by mmorente          #+#    #+#             */
/*   Updated: 2026/08/24 15:37:14 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>
#include <sstream>

PhoneBook::PhoneBook()
{
	_Count = 0;
}

PhoneBook::~PhoneBook(){}

void	PhoneBook::addContact(std::string first_name, std::string last_name, std::string nickname,
							  std::string phone_number, std::string darkest_secret, time_t created_at)
{
	Contact new_contact;

	if (!new_contact.ValidateData(first_name, last_name, nickname, phone_number, darkest_secret))
		return ;

	new_contact = Contact(first_name, last_name, nickname, phone_number, darkest_secret, created_at);
	if (_Count < MAX_CONTACTS)
	{
		_Contacts[_Count] = new_contact;
		_Count++;
	}
	else
		_Contacts[_SearchOldestContact(_Contacts)] = new_contact;
}

void	PhoneBook::searchContact()
{
	if (_Count > 0)
	{
		_ShowAllContacts();
		_SearchSpecificContact();
	}
	else
		std::cout << "You need to introduce at least 1 contact before you search\n" << std::endl;
}

// Helper functions
int	PhoneBook::_SearchOldestContact(Contact contacts[MAX_CONTACTS])
{
	int	oldest;
	
	oldest = 0;
	for(int i = 0; i < MAX_CONTACTS; i++)
	{
		if (contacts[i].getTimeCreation() < contacts[oldest].getTimeCreation())
			oldest = i;
	}
	return (oldest);
}

void	PhoneBook::_ShowAllContacts() const
{

	_PrintTable();

	for(int i = 0; i < _Count; i++)
		_PrintContact(i);
	std::cout << std::endl;
}

void	PhoneBook::_SearchSpecificContact() const
{
	std::string input;
	int			index;


	while (input != "exit")
	{
		
		std::cout << "Introduce the index of the contact 0 - 7 or introduce exit to finalice the search option\n" << std::endl;
	
		std::getline(std::cin, input);

		std::istringstream iss(input);

		if (iss >> index && (iss >> std::ws).eof() && index >= 0 && index < _Count)
		{
			_PrintTable();
			_PrintContact(index);
			std::cout << "\n";
		}
		else if (input != "exit")
		{
			std::cout << "Invalid input (0 - 7) or there is no contact in that position\n" << std::endl;
		}
	}
}

std::string	PhoneBook::_TruncateField(const std::string &field, size_t width) const
{
	if (field.length() > width)
		return field.substr(0, width - 1) + ".";
	return (field);
}

void	PhoneBook::_PrintTable() const
{
	std::cout << std::right << "|" << std::setw(10) << "Index" << "|"
								   << std::setw(10) << "First Name" << "|"
								   << std::setw(10) << "Last Name" << "|"
								   << std::setw(10) << "Nickname" << "|" << std::endl;
}

void	PhoneBook::_PrintContact(int to_print) const
{
	std::cout << std::right << "|"
				  << std::setw(10) << to_print << "|"
				  << std::setw(10) << _TruncateField(_Contacts[to_print].getFirstName(), 10) << "|"
				  << std::setw(10) << _TruncateField(_Contacts[to_print].getLastName(), 10) << "|"
				  << std::setw(10) << _TruncateField(_Contacts[to_print].getNickname(), 10) << "|" << std::endl;
}

