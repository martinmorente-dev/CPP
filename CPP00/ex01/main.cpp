/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 14:08:52 by mmorente          #+#    #+#             */
/*   Updated: 2026/08/24 15:37:33 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	addContacts(PhoneBook &phonebook)
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
	time_t		created_at;

	std::cout << "Introduce the first name" << std::endl;
	std::getline(std::cin, first_name);

	std::cout << "Introduce the last name" << std::endl;
	std::getline(std::cin, last_name);

	std::cout << "Introduce the  nickname" << std::endl;
	std::getline(std::cin, nickname);

	std::cout << "Introduce the  phone number" << std::endl;
	std::getline(std::cin, phone_number);

	std::cout << "Introduce the  darkest secret" << std::endl;
	std::getline(std::cin, darkest_secret);

	created_at = time(NULL);
	
	phonebook.addContact(first_name, last_name, nickname, phone_number, darkest_secret, created_at);
}

int	main()
{
	PhoneBook phonebook;
	std::string option;

	bool finish_program = false;

	while (!finish_program)
	{
		std::cout << "Welcome to my phonebook please introduce the next options (ADD, SEARCH, EXIT)\n" << std::endl;
		std::getline(std::cin, option);

		if (option == "ADD")
			addContacts(phonebook);
		else if (option == "SEARCH")
			phonebook.searchContact();
		else if (option == "EXIT")
		{
			finish_program = true;
			std::cout << "Thanks for using my program\n";
		}
		else
			std::cout << "Invalid option\n" << std::endl;
	}
}