//Class ClientData stores customer's credit information

#include <string>
#include "ClientData.h"

using namespace std;

ClientData::ClientData(int accountNumberValue,const string & lastNameValue,
                       const string & firstNameValue, double balanceValue)
	:accountNumber(accountNumberValue),balance(balanceValue)
{
	setLastName(lastNameValue);
	setFirstName(firstNameValue);
}

int ClientData::getAccountNumber() const
{
	return accountNumber;
}

void ClientData::setAccountNumber(int accountNumberValue)
{
	accountNumber = accountNumberValue;
}

void ClientData::setLastName(const string & lastNameString)
{
	//copy at most 15 characters from string to lastName
	int length = lastNameString.size();
	length = (length < 15 ? length: 14);
	lastNameString.copy(lastName,length);
	lastName[length]='\0';
}

string ClientData::getLastName() const
{
	return lastName;
}

void ClientData::setFirstName(const string & firstNameString)
{
	int length = firstNameString.size();
	length=(length < 10 ? length: 9);
	firstNameString.copy(firstName,length);
	firstName[length]='\0';
}

string ClientData::getFirstName() const
{
	return firstName;
}

double ClientData::getBalance() const
{
	return balance;
}

void ClientData::setBalance(double balanceValue)
{
	balance = balanceValue;
}

