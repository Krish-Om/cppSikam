cmake_minimum_required(VERSION 3.28)
project(Game)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(bin)
include_directories(headers)
include_directories(source)

add_executable(Game
        bin/Main
        source/Bot.c++
        source/Game.c++
        source/Players.c++
        source/User_Player.c++
        Main.c++
        headers/User_Player.hpp
        headers/Game.hpp
        headers/Players.hpp
        headers/Bot.hpp)
