cmake_minimum_required(VERSION 3.10)
project(link)
include_directories(${TOP})
set(CMAKE_CXX_STANDARD 11)
find_package(Threads REQUIRED)
add_executable(link 
                    main.cpp 
                    Link.cpp
                    )
target_link_libraries(link PRIVATE 
                                    Threads::Threads
                                    ${CMAKE_DL_LIBS}
                                    )
target_include_directories(link PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})