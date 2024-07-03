/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:36:30 by ntalmon           #+#    #+#             */
/*   Updated: 2024/07/03 17:07:45 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	std::string	command;
	Contact		contact;
	PhoneBook	phoneBook;
	
	while(1)
	{
		std::cout << WelcomeMessage;
		std::getline(std::cin, command);
		if (command == "ADD")
		{
			contact = addContact();
		}
		else if (command == "SEARCH")
			searchContact();
		else if (command == "EXIT")
			break ;
		else
			std::cout << "Invalid command. Please try again." << std::endl;
	}
	return (0);
}

Contact	addContact(void)
{
	Contact		contact;
	std::string	input;

	std::string messages[5] = {
		MessageAddContact1,
		MessageAddContact2,
		MessageAddContact3,
		MessageAddContact4,
		MessageAddContact5
	};

}

void	searchContact(void)
{
	std::cout << "Searching for a contact..." << std::endl;
}