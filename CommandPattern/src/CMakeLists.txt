cmake_minimum_required(VERSION 3.6)

set_source_files_properties(
    main.cpp
    server.h
    client.h
	Command.h
	WaitCommand.h
	HelloWorldOutputCommand.h
)

add_executable(command main.cpp server.h client.h Command.h WaitCommand.h HelloWorldOutputCommand.h)
