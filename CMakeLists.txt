cmake_minimum_required(VERSION 3.0)
project(app)

# set(SFML_PATH "D:/1MyAll1/projects/c++/.LIBS/sfml/32/SFML-2.5.1")
# list(APPEND CMAKE_PREFIX_PATH SFML_PATH)

# find_package(SFML 2.5 REQUIRED COMPONENTS system window graphics)

# set(CXXFLAGS "-s -O2 -m32")

add_executable(app src/main.cpp)

target_link_libraries(app sfml-system sfml-window sfml-graphics)
