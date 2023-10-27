cmake_minimum_required(VERSION 3.15)

project(my_add CXX)

set(CMAKE_BUILD_TYPE Release)

add_library(my_add SHARED src/my_add.cc)
target_compile_features(my_add PUBLIC cxx_std_17)
target_compile_options(my_add PRIVATE -Wall -Wextra -pedantic -Werror)
# target_include_directories(my_add PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_include_directories(
    my_add
    PUBLIC
        $<INSTALL_INTERFACE:include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)


include(GNUInstallDirs)
install(
    TARGETS my_add
    EXPORT my_add-targets
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)

set(INSTALL_CONFIGDIR ${CMAKE_INSTALL_LIBDIR}/cmake/my_add)

install(
    EXPORT my_add-targets
    FILE   MyAddTargets.cmake
    NAMESPACE Custom::
    DESTINATION ${INSTALL_CONFIGDIR}
)

# get_cmake_property(_variableNames VARIABLES)
# list (SORT _variableNames)
# foreach (_variableName ${_variableNames})
#     message(STATUS "${_variableName}=${${_variableName}}")
# endforeach()
