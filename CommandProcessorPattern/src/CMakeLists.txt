cmake_minimum_required(VERSION 3.6)

set_source_files_properties(
    main.cpp
    Point.h
    UndoCommand.h
	Command.h
	CommandProcessor.h
	DrawCircleCommand.h
)

add_executable(command main.cpp Point.h UndoCommand.h Command.h CommandProcessor.h DrawCircleCommand.h)
