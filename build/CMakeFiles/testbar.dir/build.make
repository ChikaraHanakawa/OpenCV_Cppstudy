# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/chikara/c++/opencv-4.5.5/OpenCV_Cppstudy

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/chikara/c++/opencv-4.5.5/OpenCV_Cppstudy/build

# Include any dependencies generated for this target.
include CMakeFiles/testbar.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/testbar.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/testbar.dir/flags.make

CMakeFiles/testbar.dir/testbar.cpp.o: CMakeFiles/testbar.dir/flags.make
CMakeFiles/testbar.dir/testbar.cpp.o: ../testbar.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chikara/c++/opencv-4.5.5/OpenCV_Cppstudy/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/testbar.dir/testbar.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/testbar.dir/testbar.cpp.o -c /home/chikara/c++/opencv-4.5.5/OpenCV_Cppstudy/testbar.cpp

CMakeFiles/testbar.dir/testbar.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testbar.dir/testbar.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chikara/c++/opencv-4.5.5/OpenCV_Cppstudy/testbar.cpp > CMakeFiles/testbar.dir/testbar.cpp.i

CMakeFiles/testbar.dir/testbar.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testbar.dir/testbar.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chikara/c++/opencv-4.5.5/OpenCV_Cppstudy/testbar.cpp -o CMakeFiles/testbar.dir/testbar.cpp.s

# Object files for target testbar
testbar_OBJECTS = \
"CMakeFiles/testbar.dir/testbar.cpp.o"

# External object files for target testbar
testbar_EXTERNAL_OBJECTS =

testbar: CMakeFiles/testbar.dir/testbar.cpp.o
testbar: CMakeFiles/testbar.dir/build.make
testbar: /usr/local/lib/libopencv_gapi.so.4.5.5
testbar: /usr/local/lib/libopencv_highgui.so.4.5.5
testbar: /usr/local/lib/libopencv_ml.so.4.5.5
testbar: /usr/local/lib/libopencv_objdetect.so.4.5.5
testbar: /usr/local/lib/libopencv_photo.so.4.5.5
testbar: /usr/local/lib/libopencv_stitching.so.4.5.5
testbar: /usr/local/lib/libopencv_video.so.4.5.5
testbar: /usr/local/lib/libopencv_videoio.so.4.5.5
testbar: /usr/local/lib/libopencv_imgcodecs.so.4.5.5
testbar: /usr/local/lib/libopencv_dnn.so.4.5.5
testbar: /usr/local/lib/libopencv_calib3d.so.4.5.5
testbar: /usr/local/lib/libopencv_features2d.so.4.5.5
testbar: /usr/local/lib/libopencv_flann.so.4.5.5
testbar: /usr/local/lib/libopencv_imgproc.so.4.5.5
testbar: /usr/local/lib/libopencv_core.so.4.5.5
testbar: CMakeFiles/testbar.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/chikara/c++/opencv-4.5.5/OpenCV_Cppstudy/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable testbar"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/testbar.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/testbar.dir/build: testbar

.PHONY : CMakeFiles/testbar.dir/build

CMakeFiles/testbar.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/testbar.dir/cmake_clean.cmake
.PHONY : CMakeFiles/testbar.dir/clean

CMakeFiles/testbar.dir/depend:
	cd /home/chikara/c++/opencv-4.5.5/OpenCV_Cppstudy/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/chikara/c++/opencv-4.5.5/OpenCV_Cppstudy /home/chikara/c++/opencv-4.5.5/OpenCV_Cppstudy /home/chikara/c++/opencv-4.5.5/OpenCV_Cppstudy/build /home/chikara/c++/opencv-4.5.5/OpenCV_Cppstudy/build /home/chikara/c++/opencv-4.5.5/OpenCV_Cppstudy/build/CMakeFiles/testbar.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/testbar.dir/depend

