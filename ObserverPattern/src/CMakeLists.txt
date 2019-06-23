cmake_minimum_required(VERSION 3.6)

set_source_files_properties(
    main.cpp
    observer.h
    subject.h
	spreadsheetmodel.h
	spreadsheetviews.h
    #PROPERTIES COMPILE_FLAGS -std=c++11
)

add_executable(observer main.cpp observer.h subject.h spreadsheetmodel.h spreadsheetviews.h )
