/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:36:30 by ntalmon           #+#    #+#             */
/*   Updated: 2024/07/04 17:04:57 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	std::string command;
	Contact contact;
	PhoneBook phoneBook;
	int i = 0;
	int j = 0;

	while (1)
	{
		std::cout << WelcomeMessage;
		std::getline(std::cin, command);
		if (command == "ADD")
		{
			if (i >= 8)
				i = 0;
			contact = addContact();
			phoneBook.contacts[i] = contact;
			i++;
			if (j < 8)
				j++;
		}
		else if (command == "SEARCH")
			searchContact(phoneBook, j);
		else if (command == "EXIT")
			break;
		else
			std::cout << "Invalid command. Please try again." << std::endl;
	}
	return 0;
}

Contact addContact(void) {
	Contact contact;
	std::string input;

	std::cout << "Enter first name: ";
	std::getline(std::cin, input);
	while (input.empty()) {
		std::cout << "First name cannot be empty. Please enter first name: ";
		std::getline(std::cin, input);
	}
	contact.setFirstName(input);

	std::cout << "Enter last name: ";
	std::getline(std::cin, input);
	while (input.empty()) {
		std::cout << "Last name cannot be empty. Please enter last name: ";
		std::getline(std::cin, input);
	}
	contact.setLastName(input);

	std::cout << "Enter nickname: ";
	std::getline(std::cin, input);
	while (input.empty()) {
		std::cout << "Nickname cannot be empty. Please enter nickname: ";
		std::getline(std::cin, input);
	}
	contact.setNickname(input);

	std::cout << "Enter phone number: ";
	std::getline(std::cin, input);
	while (input.empty()) {
		std::cout << "Phone number cannot be empty. Please enter phone number: ";
		std::getline(std::cin, input);
	}
	contact.setPhoneNumber(input);

	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, input);
	while (input.empty()) {
		std::cout << "Darkest secret cannot be empty. Please enter darkest secret: ";
		std::getline(std::cin, input);
	}
	contact.setDarkestSecret(input);

	return contact;
}


void searchContact(PhoneBook phoneBook, int j)
{
	std::string index;
	
	std::cout << std::endl;
	std::cout << "Contacts in PhoneBook:" << std::endl << std::endl;
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nickname" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (int a = 0; a < j; a++)
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
	while (1)
	{
		std::cout << "Enter the index of the contact you would like to see more information on: ";
		std::getline(std::cin, index);
		if (index.length() == 1 && index[0] >= '0' && index[0] <= '7' && index[0] - '0' < j)
		{
			searchPerson(index, phoneBook);
			break;
		}
		else
			std::cout << "Invalid index. Please try again." << std::endl;
	}
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
