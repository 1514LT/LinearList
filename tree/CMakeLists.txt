cmake_minimum_required(VERSION 3.10)
project(tree)
include_directories(${TOP})
set(CMAKE_CXX_STANDARD 11)
find_package(Threads REQUIRED)
add_executable(tree 
                    main.cpp 
                    Tree.cpp
                    )
target_link_libraries(tree PRIVATE 
                                    Threads::Threads
                                    ${CMAKE_DL_LIBS}
                                    )
target_include_directories(tree PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})