cmake_minimum_required(VERSION 3.15)
project(Monopoly)

set(CMAKE_CXX_STANDARD 14)

add_executable(Monopoly main.cpp Board.cpp Board.h Player.cpp Player.h Field.cpp Field.h Street.h MonopolyLogic.cpp MonopolyLogic.h UserDB.cpp UserDB.h StartGame.cpp StartGame.h Move.cpp Move.h Account.h)