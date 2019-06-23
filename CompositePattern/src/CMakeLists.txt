cmake_minimum_required(VERSION 3.6)

set_source_files_properties(
    main.cpp
    Point.h
    UndoCommand.h
	command.h
	CommandProcessor.h
	CompositeCommand.h
	DrawCircleCommand.h
	DrawRectangleCommand.h
	DrawingProcessor.h
)

add_executable(command main.cpp Point.h UndoCommand.h command.h CommandProcessor.h DrawCircleCommand.h DrawRectangleCommand.h DrawingProcessor.h)
