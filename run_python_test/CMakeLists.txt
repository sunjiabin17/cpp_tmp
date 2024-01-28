project(test CXX)

add_executable(main main.cc)

target_include_directories(main PRIVATE
    "/Users/sunjiabin/miniconda3/include/python3.8")
target_link_libraries(main PRIVATE
    "/Users/sunjiabin/miniconda3/lib/libpython3.8.dylib")
