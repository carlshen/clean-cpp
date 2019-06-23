cmake_minimum_required(VERSION 3.6)

set_source_files_properties(
    main.cpp
    Address.h
    CustomerId.h
	PlainTextFormatter.h
	Formatter.h
	Formatter.cpp
	Customer.h
	Customer.cpp
	XmlFormatter.h
)

add_executable(format main.cpp Address.h CustomerId.h PlainTextFormatter.h XmlFormatter.h Formatter.h Formatter.cpp Customer.h Customer.cpp)
