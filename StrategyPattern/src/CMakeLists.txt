cmake_minimum_required(VERSION 3.6)

INCLUDE_DIRECTORIES( ./nlohmann/ )

set_source_files_properties(
    main.cpp
    Address.h
    CustomerId.h
	PlainTextFormatter.h
	Formatter.h
	Formatter.cpp
	JsonFormatter.h
	JsonFormatter.cpp
	Customer.h
	Customer.cpp
	XmlFormatter.h
	nlohmann/json.hpp
	nlohmann/adl_serializer.hpp
)

add_executable(format main.cpp Address.h CustomerId.h PlainTextFormatter.h XmlFormatter.h Formatter.h Formatter.cpp JsonFormatter.h JsonFormatter.cpp Customer.h Customer.cpp 
nlohmann/json.hpp nlohmann/adl_serializer.hpp )
