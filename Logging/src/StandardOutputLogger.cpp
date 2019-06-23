#include "StandardOutputLogger.h"
#include <iostream>

void StandardOutputLogger::writeInfoEntry(std::string entry)
{
	std::cout << "[INFO] " << entry << std::endl;
}

void StandardOutputLogger::writeWarnEntry(std::string entry)
{
	std::cout << "[WARN] " << entry << std::endl;
}

void StandardOutputLogger::writeErrorEntry(std::string entry)
{
	std::cout << "[ERROR] " << entry << std::endl;
}
