#ifndef FORMATTER_H_
#define FORMATTER_H_

#include <memory>
#include <string>
#include <string>
#include <sstream>

class Formatter
{
public:
	virtual ~Formatter() = default;

	Formatter& withCustomerId(std::string customerId);
	Formatter& withForename(std::string forename);
	Formatter& withSurname(std::string surname);
	Formatter& withStreet(std::string street);
	Formatter& withZipCode(std::string zipCode);
	Formatter& withCity(std::string city);

	virtual std::string format() const = 0;

protected:
	std::string customerId {"000000"};
	std::string forename {"n/a"};
	std::string surname {"n/a"};
	std::string street {"n/a"};
	std::string zipCode {"n/a"};
	std::string city {"n/a"};
};

using FormatterPtr = std::unique_ptr<Formatter>;

#endif /* FORMATTER_H_ */
