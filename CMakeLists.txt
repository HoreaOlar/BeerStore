cmake_minimum_required(VERSION "3.16.3")
project("BeerStore")
add_executable("${PROJECT_NAME}"
                includes/Beer.hpp
                includes/Store.hpp
                includes/OnlineStore.hpp
                src/main.cpp
                src/Store.cpp
                src/Beer.cpp
                src/OnlineStore.cpp)

