# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/frkn/lely_ws/cpp_training_Sept22/config_thing

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/frkn/lely_ws/cpp_training_Sept22/config_thing/build

# Include any dependencies generated for this target.
include CMakeFiles/config_thing_production.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/config_thing_production.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/config_thing_production.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/config_thing_production.dir/flags.make

CMakeFiles/config_thing_production.dir/prod_main.cpp.o: CMakeFiles/config_thing_production.dir/flags.make
CMakeFiles/config_thing_production.dir/prod_main.cpp.o: ../prod_main.cpp
CMakeFiles/config_thing_production.dir/prod_main.cpp.o: CMakeFiles/config_thing_production.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frkn/lely_ws/cpp_training_Sept22/config_thing/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/config_thing_production.dir/prod_main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/config_thing_production.dir/prod_main.cpp.o -MF CMakeFiles/config_thing_production.dir/prod_main.cpp.o.d -o CMakeFiles/config_thing_production.dir/prod_main.cpp.o -c /home/frkn/lely_ws/cpp_training_Sept22/config_thing/prod_main.cpp

CMakeFiles/config_thing_production.dir/prod_main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/config_thing_production.dir/prod_main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frkn/lely_ws/cpp_training_Sept22/config_thing/prod_main.cpp > CMakeFiles/config_thing_production.dir/prod_main.cpp.i

CMakeFiles/config_thing_production.dir/prod_main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/config_thing_production.dir/prod_main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frkn/lely_ws/cpp_training_Sept22/config_thing/prod_main.cpp -o CMakeFiles/config_thing_production.dir/prod_main.cpp.s

CMakeFiles/config_thing_production.dir/motor.cpp.o: CMakeFiles/config_thing_production.dir/flags.make
CMakeFiles/config_thing_production.dir/motor.cpp.o: ../motor.cpp
CMakeFiles/config_thing_production.dir/motor.cpp.o: CMakeFiles/config_thing_production.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frkn/lely_ws/cpp_training_Sept22/config_thing/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/config_thing_production.dir/motor.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/config_thing_production.dir/motor.cpp.o -MF CMakeFiles/config_thing_production.dir/motor.cpp.o.d -o CMakeFiles/config_thing_production.dir/motor.cpp.o -c /home/frkn/lely_ws/cpp_training_Sept22/config_thing/motor.cpp

CMakeFiles/config_thing_production.dir/motor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/config_thing_production.dir/motor.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frkn/lely_ws/cpp_training_Sept22/config_thing/motor.cpp > CMakeFiles/config_thing_production.dir/motor.cpp.i

CMakeFiles/config_thing_production.dir/motor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/config_thing_production.dir/motor.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frkn/lely_ws/cpp_training_Sept22/config_thing/motor.cpp -o CMakeFiles/config_thing_production.dir/motor.cpp.s

CMakeFiles/config_thing_production.dir/config.cpp.o: CMakeFiles/config_thing_production.dir/flags.make
CMakeFiles/config_thing_production.dir/config.cpp.o: ../config.cpp
CMakeFiles/config_thing_production.dir/config.cpp.o: CMakeFiles/config_thing_production.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frkn/lely_ws/cpp_training_Sept22/config_thing/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/config_thing_production.dir/config.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/config_thing_production.dir/config.cpp.o -MF CMakeFiles/config_thing_production.dir/config.cpp.o.d -o CMakeFiles/config_thing_production.dir/config.cpp.o -c /home/frkn/lely_ws/cpp_training_Sept22/config_thing/config.cpp

CMakeFiles/config_thing_production.dir/config.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/config_thing_production.dir/config.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frkn/lely_ws/cpp_training_Sept22/config_thing/config.cpp > CMakeFiles/config_thing_production.dir/config.cpp.i

CMakeFiles/config_thing_production.dir/config.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/config_thing_production.dir/config.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frkn/lely_ws/cpp_training_Sept22/config_thing/config.cpp -o CMakeFiles/config_thing_production.dir/config.cpp.s

# Object files for target config_thing_production
config_thing_production_OBJECTS = \
"CMakeFiles/config_thing_production.dir/prod_main.cpp.o" \
"CMakeFiles/config_thing_production.dir/motor.cpp.o" \
"CMakeFiles/config_thing_production.dir/config.cpp.o"

# External object files for target config_thing_production
config_thing_production_EXTERNAL_OBJECTS =

config_thing_production: CMakeFiles/config_thing_production.dir/prod_main.cpp.o
config_thing_production: CMakeFiles/config_thing_production.dir/motor.cpp.o
config_thing_production: CMakeFiles/config_thing_production.dir/config.cpp.o
config_thing_production: CMakeFiles/config_thing_production.dir/build.make
config_thing_production: CMakeFiles/config_thing_production.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/frkn/lely_ws/cpp_training_Sept22/config_thing/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable config_thing_production"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/config_thing_production.dir/link.txt --verbose=$(VERBOSE)
	/usr/bin/cmake -E copy /home/frkn/lely_ws/cpp_training_Sept22/config_thing/config.ini /home/frkn/lely_ws/cpp_training_Sept22/config_thing/build/config.ini

# Rule to build all files generated by this target.
CMakeFiles/config_thing_production.dir/build: config_thing_production
.PHONY : CMakeFiles/config_thing_production.dir/build

CMakeFiles/config_thing_production.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/config_thing_production.dir/cmake_clean.cmake
.PHONY : CMakeFiles/config_thing_production.dir/clean

CMakeFiles/config_thing_production.dir/depend:
	cd /home/frkn/lely_ws/cpp_training_Sept22/config_thing/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/frkn/lely_ws/cpp_training_Sept22/config_thing /home/frkn/lely_ws/cpp_training_Sept22/config_thing /home/frkn/lely_ws/cpp_training_Sept22/config_thing/build /home/frkn/lely_ws/cpp_training_Sept22/config_thing/build /home/frkn/lely_ws/cpp_training_Sept22/config_thing/build/CMakeFiles/config_thing_production.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/config_thing_production.dir/depend

