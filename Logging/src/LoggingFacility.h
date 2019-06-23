#ifndef LOGGINGFACILITY_H_
#define LOGGINGFACILITY_H_

#include <memory>
#include <string>

class LoggingFacility
{
public:
	virtual ~LoggingFacility() = default;

	virtual void writeInfoEntry(std::string entry) = 0;
	virtual void writeWarnEntry(std::string entry) = 0;
	virtual void writeErrorEntry(std::string entry) = 0;
};

using Logger = std::shared_ptr<LoggingFacility>;

#endif /* LOGGINGFACILITY_H_ */
