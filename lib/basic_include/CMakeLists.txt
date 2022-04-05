cmake_minimum_required(VERSION 3.11-3.18)
project(basic_include
        VERSION 0.0.1)

add_library(basic_include src/basic_include.cpp)

# PUBLIC needed to make both basic_include.h and basic_include library available elsewhere in project
target_include_directories(${PROJECT_NAME}
    PUBLIC ${PROJECT_SOURCE_DIR}/include)

#Use c++ 20
target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_20)