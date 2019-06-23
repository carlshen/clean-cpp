#ifndef FILESYSTEMLOGGER_H_
#define FILESYSTEMLOGGER_H_

#include "LoggingFacility.h"
#include <fstream>

class FilesystemLogger : public LoggingFacility
{
public:
	explicit FilesystemLogger(const std::string path);

	virtual void writeInfoEntry(std::string entry) override;
	virtual void writeWarnEntry(std::string entry) override;
	virtual void writeErrorEntry(std::string entry) override;

private:
	std::ofstream out;
};

#endif /* FILESYSTEMLOGGER_H_ */
