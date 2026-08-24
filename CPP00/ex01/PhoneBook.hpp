/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 11:31:05 by mmorente          #+#    #+#             */
/*   Updated: 2026/08/24 15:14:39 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <ctime>
#include "Contact.hpp"

#define MAX_CONTACTS 8

class PhoneBook {
	
	public:
		PhoneBook();
		~PhoneBook();

		void	addContact(std::string first_name, std::string last_name, std::string nickname,
						   std::string phone_number, std::string darkest_secret, time_t ceated_at);
		void	searchContact();

	private:
		Contact _Contacts[MAX_CONTACTS];
		int		_Count;

		// Helper functions
		int			_SearchOldestContact(Contact contacts[MAX_CONTACTS]);
		void		_ShowAllContacts() const;
		std::string	_TruncateField(const std::string &field, size_t width) const;
		void		_SearchSpecificContact() const;
		void		_PrintContact(int to_print) const;
		void		_PrintTable() const;
};

#endif
