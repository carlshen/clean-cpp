#include "formatter.h"

Formatter& Formatter::withCustomerId(std::string customerId)
{
	this->customerId = customerId;
	return *this;
}

Formatter& Formatter::withForename(std::string forename)
{
	this->forename = forename;
	return *this;
}

Formatter& Formatter::withSurname(std::string surname)
{
	this->surname = surname;
	return *this;
}

Formatter& Formatter::withStreet(std::string street)
{
	this->street = street;
	return *this;
}

Formatter& Formatter::withZipCode(std::string zipCode)
{
	this->zipCode = zipCode;
	return *this;
}

Formatter& Formatter::withCity(std::string city)
{
	this->city = city;
	return *this;
}

Formatter& Formatter::withState(std::string state)
{
	this->state = state;
	return *this;
}
