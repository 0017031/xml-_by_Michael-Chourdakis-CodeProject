cmake_minimum_required (VERSION 3.1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


project (xmlcpp_header_unit_test)

add_executable(xmlcpp_header_unit_test test_main.cpp test_xml.cpp)
# add_test(test_main.cpp test_xml.cpp)

target_include_directories(xmlcpp_header_unit_test PUBLIC ../include)
target_include_directories(xmlcpp_header_unit_test PRIVATE ../cs_string/src)
target_include_directories(xmlcpp_header_unit_test PRIVATE ../../Catch/single_include)


# ../include C:/Users/baic/Downloads/Work/github-libs/date C:/Users/baic/Downloads/work/github-libs/Catch/single_include)




