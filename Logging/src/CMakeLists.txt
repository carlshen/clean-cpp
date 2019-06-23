cmake_minimum_required(VERSION 3.6)

set_source_files_properties(
    main.cpp
    Customer.h
	LoggingFacility.h
	LoggerFactory.h
    CustomerRepository.h
    CustomerRepository.cpp
	FilesystemLogger.h
	FilesystemLogger.cpp
	BoostTrivialLogAdapter.h
	BoostTrivialLogAdapter.cpp
	StandardOutputLogger.h
	StandardOutputLogger.cpp
    #PROPERTIES COMPILE_FLAGS -std=c++11
)

add_executable(logger main.cpp Customer.h LoggingFacility.h LoggerFactory.h CustomerRepository.h CustomerRepository.cpp 
FilesystemLogger.h FilesystemLogger.cpp BoostTrivialLogAdapter.h BoostTrivialLogAdapter.cpp StandardOutputLogger.h StandardOutputLogger.cpp )
