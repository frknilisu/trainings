cmake_minimum_required(VERSION 3.22)
project(DataGenerator LANGUAGES CXX)

# Require C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# Disable compiler specific extensions
set(CMAKE_CXX_EXTENSIONS OFF)

add_subdirectory(Exercise)
add_subdirectory(OverlyIntricateDataSource)