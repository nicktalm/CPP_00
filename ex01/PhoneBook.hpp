/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:36:43 by ntalmon           #+#    #+#             */
/*   Updated: 2024/07/17 12:54:33 by ntalmon          ###   ########.fr       */
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
		// Konstruktor
		Contact();
		// Destruktor
		~Contact();
		// Getter-Funktionen
		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickname() const;
		std::string getPhoneNumber() const;
		std::string getDarkestSecret() const;
		// Setter-Funktionen
		void setFirstName(const std::string& value);
		void setLastName(const std::string& value);
		void setNickname(const std::string& value);
		void setPhoneNumber(const std::string& value);
		void setDarkestSecret(const std::string& value);
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

#define WelcomeMessage \
"\n📖📞 \033[1;34m**PhoneBook Menu**\033[0m 📞📖\n" \
"--------------------------------\n" \
"Please select one of the following options:\n\n" \
"\033[1;32m1️⃣  ➕ ADD:\033[0m Add a new contact\n" \
"\033[1;33m2️⃣  🔍 SEARCH:\033[0m Search for a contact\n" \
"\033[1;31m3️⃣  ❌ EXIT:\033[0m Exit the PhoneBook\n\n" \
"\033[1;36mInput:\033[0m "

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