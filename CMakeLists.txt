cmake_minimum_required(VERSION 3.15)

project(my_add CXX)

set(CMAKE_BUILD_TYPE Release)

add_library(my_add SHARED src/my_add.cc)

target_compile_features(my_add PUBLIC cxx_std_17)
target_compile_options(my_add PRIVATE -Wall -Wextra -pedantic -Werror)
target_include_directories(my_add PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

# install(
#     TARGETS my_add
#     LIBRARY DESTINATION lib
#     ARCHIVE DESTINATION lib
#     RUNTIME DESTINATION bin
# )

# install(
#     DIRECTORY include/
#     DESTINATION include
# )

# get_cmake_property(_variableNames VARIABLES)
# list (SORT _variableNames)
# foreach (_variableName ${_variableNames})
#     message(STATUS "${_variableName}=${${_variableName}}")
# endforeach()
