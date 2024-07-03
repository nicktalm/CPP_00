/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:36:43 by ntalmon           #+#    #+#             */
/*   Updated: 2024/07/03 17:03:23 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>

class Contact
{
	public:
		std::string	FirstName;
		std::string	LastName;
		std::string	Nickname;
		std::string	PhoneNumber;
		std::string	DarkestSecret;
};

class PhoneBook
{
	public:
		Contact	contacts[8];
};


int		main(void);
Contact	addContact(void);
void	searchContact(void);

# define WelcomeMessage \
"\n###########################################\n" \
"Please enter one of the following commands:\n" \
"ADD: Add a new contact ➕\n" \
"SEARCH: Search for a contact 🔍\n" \
"EXIT: Exit the PhoneBook ❌\n\n" \
"Input: "

# define MessageAddContact1 \
"Enter the first name of the contact: "

# define MessageAddContact2 \
"Enter the last name of the contact: "

# define MessageAddContact3 \
"Enter the nickname of the contact: "

# define MessageAddContact4 \
"Enter the phone number of the contact: "

# define MessageAddContact5 \
"Enter the darkest secret of the contact: "

#endif