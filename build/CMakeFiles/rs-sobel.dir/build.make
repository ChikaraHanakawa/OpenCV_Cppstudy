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
include CMakeFiles/rs-sobel.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/rs-sobel.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/rs-sobel.dir/flags.make

CMakeFiles/rs-sobel.dir/rs-sobel.cpp.o: CMakeFiles/rs-sobel.dir/flags.make
CMakeFiles/rs-sobel.dir/rs-sobel.cpp.o: ../rs-sobel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chikara/c++/opencv-4.5.5/OpenCV_Cppstudy/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/rs-sobel.dir/rs-sobel.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/rs-sobel.dir/rs-sobel.cpp.o -c /home/chikara/c++/opencv-4.5.5/OpenCV_Cppstudy/rs-sobel.cpp

CMakeFiles/rs-sobel.dir/rs-sobel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rs-sobel.dir/rs-sobel.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chikara/c++/opencv-4.5.5/OpenCV_Cppstudy/rs-sobel.cpp > CMakeFiles/rs-sobel.dir/rs-sobel.cpp.i

CMakeFiles/rs-sobel.dir/rs-sobel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rs-sobel.dir/rs-sobel.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chikara/c++/opencv-4.5.5/OpenCV_Cppstudy/rs-sobel.cpp -o CMakeFiles/rs-sobel.dir/rs-sobel.cpp.s

# Object files for target rs-sobel
rs__sobel_OBJECTS = \
"CMakeFiles/rs-sobel.dir/rs-sobel.cpp.o"

# External object files for target rs-sobel
rs__sobel_EXTERNAL_OBJECTS =

rs-sobel: CMakeFiles/rs-sobel.dir/rs-sobel.cpp.o
rs-sobel: CMakeFiles/rs-sobel.dir/build.make
rs-sobel: /usr/local/lib/libopencv_gapi.so.4.5.5
rs-sobel: /usr/local/lib/libopencv_highgui.so.4.5.5
rs-sobel: /usr/local/lib/libopencv_ml.so.4.5.5
rs-sobel: /usr/local/lib/libopencv_objdetect.so.4.5.5
rs-sobel: /usr/local/lib/libopencv_photo.so.4.5.5
rs-sobel: /usr/local/lib/libopencv_stitching.so.4.5.5
rs-sobel: /usr/local/lib/libopencv_video.so.4.5.5
rs-sobel: /usr/local/lib/libopencv_videoio.so.4.5.5
rs-sobel: /usr/local/lib/libopencv_imgcodecs.so.4.5.5
rs-sobel: /usr/local/lib/libopencv_dnn.so.4.5.5
rs-sobel: /usr/local/lib/libopencv_calib3d.so.4.5.5
rs-sobel: /usr/local/lib/libopencv_features2d.so.4.5.5
rs-sobel: /usr/local/lib/libopencv_flann.so.4.5.5
rs-sobel: /usr/local/lib/libopencv_imgproc.so.4.5.5
rs-sobel: /usr/local/lib/libopencv_core.so.4.5.5
rs-sobel: CMakeFiles/rs-sobel.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/chikara/c++/opencv-4.5.5/OpenCV_Cppstudy/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable rs-sobel"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/rs-sobel.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/rs-sobel.dir/build: rs-sobel

.PHONY : CMakeFiles/rs-sobel.dir/build

CMakeFiles/rs-sobel.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/rs-sobel.dir/cmake_clean.cmake
.PHONY : CMakeFiles/rs-sobel.dir/clean

CMakeFiles/rs-sobel.dir/depend:
	cd /home/chikara/c++/opencv-4.5.5/OpenCV_Cppstudy/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/chikara/c++/opencv-4.5.5/OpenCV_Cppstudy /home/chikara/c++/opencv-4.5.5/OpenCV_Cppstudy /home/chikara/c++/opencv-4.5.5/OpenCV_Cppstudy/build /home/chikara/c++/opencv-4.5.5/OpenCV_Cppstudy/build /home/chikara/c++/opencv-4.5.5/OpenCV_Cppstudy/build/CMakeFiles/rs-sobel.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/rs-sobel.dir/depend
