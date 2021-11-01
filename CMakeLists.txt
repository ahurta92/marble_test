cmake_minimum_required(VERSION 3.20)
project(Marbles)
set(EXAMPLE_SOURCES select_color color_bags sorting_marbles
	marble_bag sort_N_marbles marble_count_bag sort_N_marbles_vector
	sort_N_marbles_while
   )


# Create executables for example applications
foreach(example ${EXAMPLE_SOURCES})
  add_executable(${example} ${example}.cpp )
endforeach()

add_subdirectory(testing)