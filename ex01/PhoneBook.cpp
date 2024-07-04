/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:36:30 by ntalmon           #+#    #+#             */
/*   Updated: 2024/07/04 16:10:29 by ntalmon          ###   ########.fr       */
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
	std::string firstName;
	std::getline(std::cin, firstName);
	contact.setFirstName(firstName);
	std::cout << MessageAddContact2;
	std::string lastName;
	std::getline(std::cin, lastName);
	contact.setLastName(lastName);
	std::cout << MessageAddContact3;
	std::string nickname;
	std::getline(std::cin, nickname);
	contact.setNickname(nickname);
	std::cout << MessageAddContact4;
	std::string phoneNumber;
	std::getline(std::cin, phoneNumber);
	contact.setPhoneNumber(phoneNumber);
	std::cout << MessageAddContact5;
	std::string darkestSecret;
	std::getline(std::cin, darkestSecret);
	contact.setDarkestSecret(darkestSecret);
	return (contact);
}


void searchContact(PhoneBook phoneBook, int i)
{
	std::string index;
	
	std::cout << std::endl;
	std::cout << "Contacts in PhoneBook:" << std::endl << std::endl;
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nickname" << std::endl;
	for (int a = 0; a < i; a++)
	{
		Contact contact = phoneBook.contacts[a];
		std::cout << std::setw(10) << a << "|";
		if (contact.getFirstName().length() > 10)
			std::cout << std::setw(10) << contact.getFirstName().substr(0,9) + "." << "|";
		else
			std::cout << std::setw(10) << contact.getFirstName() << "|";
		if (contact.getLastName().length() > 10)
			std::cout << std::setw(10) << contact.getLastName().substr(0,9) + "." << "|";
		else
			std::cout << std::setw(10) << contact.getLastName() << "|";
		if (contact.getNickname().length() > 10)
			std::cout << std::setw(10) << contact.getNickname().substr(0,9) + "." << std::endl;
		else
			std::cout << std::setw(10) << contact.getNickname() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Enter the index of the contact you would like to see more information on: ";
	std::getline(std::cin, index);
	searchPerson(index, phoneBook);
}

void	searchPerson(std::string i, PhoneBook phoneBook)
{
	int index = std::stoi(i);
	Contact contact = phoneBook.contacts[index];
	
	std::cout << std::endl;
	std::cout << "First Name: " << contact.getFirstName() << std::endl;
	std::cout << "Last Name: " << contact.getLastName() << std::endl;
	std::cout << "Nickname: " << contact.getNickname() << std::endl;
	std::cout << "Phone Number: " << contact.getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << contact.getDarkestSecret() << std::endl;
	std::cout << std::endl;
}
