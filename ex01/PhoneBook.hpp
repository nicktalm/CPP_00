/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:36:43 by ntalmon           #+#    #+#             */
/*   Updated: 2024/07/04 15:25:23 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Contact
{
	private:
		std::string FirstName;
		std::string LastName;
		std::string Nickname;
		std::string PhoneNumber;
		std::string DarkestSecret;

	public:
		// Getter-Funktionen
		std::string getFirstName() const { return FirstName; }
		std::string getLastName() const { return LastName; }
		std::string getNickname() const { return Nickname; }
		std::string getPhoneNumber() const { return PhoneNumber; }
		std::string getDarkestSecret() const { return DarkestSecret; }

		// Setter-Funktionen
		void setFirstName(const std::string& value) { FirstName = value; }
		void setLastName(const std::string& value) { LastName = value; }
		void setNickname(const std::string& value) { Nickname = value; }
		void setPhoneNumber(const std::string& value) { PhoneNumber = value; }
		void setDarkestSecret(const std::string& value) { DarkestSecret = value; }
};

class PhoneBook
{
	public:
		Contact	contacts[8];
};


int		main(void);
Contact	addContact(void);
void	searchContact(PhoneBook PhoneBook, int i);
void	searchPerson(std::string i, PhoneBook phoneBook);

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