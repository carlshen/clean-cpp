#ifndef STANDARDOUTPUTLOGGER_H_
#define STANDARDOUTPUTLOGGER_H_

#include "LoggingFacility.h"

class StandardOutputLogger : public LoggingFacility
{
public:
	virtual void writeInfoEntry(std::string entry) override;
	virtual void writeWarnEntry(std::string entry) override;
	virtual void writeErrorEntry(std::string entry) override;
};

#endif /* STANDARDOUTPUTLOGGER_H_ */
