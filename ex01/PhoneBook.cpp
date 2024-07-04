/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:36:30 by ntalmon           #+#    #+#             */
/*   Updated: 2024/07/04 11:30:08 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	std::string	command;
	Contact		contact;
	PhoneBook	phoneBook;
	int			i = 0;
	
	while(1)
	{
		std::cout << WelcomeMessage;
		std::getline(std::cin, command);
		if (command == "ADD")
		{
			contact = addContact();
			phoneBook.contacts[i] = contact;
			i++;
		}
		else if (command == "SEARCH")
			searchContact(phoneBook, i);
		else if (command == "EXIT")
			break ;
		else
			std::cout << "Invalid command. Please try again." << std::endl;
	}
	return (0);
}

Contact	addContact(void)
{
	Contact	contact;
	
	std::cout << MessageAddContact1;
	std::getline(std::cin, contact.FirstName);
	std::cout << MessageAddContact2;
	std::getline(std::cin, contact.LastName);
	std::cout << MessageAddContact3;
	std::getline(std::cin, contact.Nickname);
	std::cout << MessageAddContact4;
	std::getline(std::cin, contact.PhoneNumber);
	std::cout << MessageAddContact5;
	std::getline(std::cin, contact.DarkestSecret);
	return (contact);
}


void searchContact(PhoneBook phoneBook, int i)
{
	int index;
	
	std::cout << std::endl;
	std::cout << "Contacts in phone book:" << std::endl << std::endl;
	for (int a = 0; a < i; a++)
	{
		Contact contact = phoneBook.contacts[a];
		std::cout << "Index: " << a << std::endl;
		std::cout << "First Name: " << contact.FirstName << std::endl;
		std::cout << "Last Name: " << contact.LastName << std::endl;
		std::cout << "Nickname: " << contact.Nickname << std::endl;
		std::cout << "Phone Number: " << contact.PhoneNumber << std::endl;
		std::cout << "Darkest Secret: " << contact.DarkestSecret << std::endl;
		std::cout << std::endl;
	}
	std::cout << "Enter the index of the contact you would like to see more information on: ";
	std::cin >> index;
}
	