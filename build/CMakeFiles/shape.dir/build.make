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
include CMakeFiles/shape.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/shape.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/shape.dir/flags.make

CMakeFiles/shape.dir/shape.cpp.o: CMakeFiles/shape.dir/flags.make
CMakeFiles/shape.dir/shape.cpp.o: ../shape.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chikara/c++/opencv-4.5.5/OpenCV_Cppstudy/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/shape.dir/shape.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/shape.dir/shape.cpp.o -c /home/chikara/c++/opencv-4.5.5/OpenCV_Cppstudy/shape.cpp

CMakeFiles/shape.dir/shape.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/shape.dir/shape.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chikara/c++/opencv-4.5.5/OpenCV_Cppstudy/shape.cpp > CMakeFiles/shape.dir/shape.cpp.i

CMakeFiles/shape.dir/shape.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/shape.dir/shape.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chikara/c++/opencv-4.5.5/OpenCV_Cppstudy/shape.cpp -o CMakeFiles/shape.dir/shape.cpp.s

# Object files for target shape
shape_OBJECTS = \
"CMakeFiles/shape.dir/shape.cpp.o"

# External object files for target shape
shape_EXTERNAL_OBJECTS =

shape: CMakeFiles/shape.dir/shape.cpp.o
shape: CMakeFiles/shape.dir/build.make
shape: /usr/local/lib/libopencv_gapi.so.4.5.5
shape: /usr/local/lib/libopencv_highgui.so.4.5.5
shape: /usr/local/lib/libopencv_ml.so.4.5.5
shape: /usr/local/lib/libopencv_objdetect.so.4.5.5
shape: /usr/local/lib/libopencv_photo.so.4.5.5
shape: /usr/local/lib/libopencv_stitching.so.4.5.5
shape: /usr/local/lib/libopencv_video.so.4.5.5
shape: /usr/local/lib/libopencv_videoio.so.4.5.5
shape: /usr/local/lib/libopencv_imgcodecs.so.4.5.5
shape: /usr/local/lib/libopencv_dnn.so.4.5.5
shape: /usr/local/lib/libopencv_calib3d.so.4.5.5
shape: /usr/local/lib/libopencv_features2d.so.4.5.5
shape: /usr/local/lib/libopencv_flann.so.4.5.5
shape: /usr/local/lib/libopencv_imgproc.so.4.5.5
shape: /usr/local/lib/libopencv_core.so.4.5.5
shape: CMakeFiles/shape.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/chikara/c++/opencv-4.5.5/OpenCV_Cppstudy/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable shape"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/shape.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/shape.dir/build: shape

.PHONY : CMakeFiles/shape.dir/build

CMakeFiles/shape.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/shape.dir/cmake_clean.cmake
.PHONY : CMakeFiles/shape.dir/clean

CMakeFiles/shape.dir/depend:
	cd /home/chikara/c++/opencv-4.5.5/OpenCV_Cppstudy/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/chikara/c++/opencv-4.5.5/OpenCV_Cppstudy /home/chikara/c++/opencv-4.5.5/OpenCV_Cppstudy /home/chikara/c++/opencv-4.5.5/OpenCV_Cppstudy/build /home/chikara/c++/opencv-4.5.5/OpenCV_Cppstudy/build /home/chikara/c++/opencv-4.5.5/OpenCV_Cppstudy/build/CMakeFiles/shape.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/shape.dir/depend
