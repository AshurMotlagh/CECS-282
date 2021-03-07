cmake_minimum_required(VERSION 3.17)
project(SolitarePrime)

set(CMAKE_CXX_STANDARD 14)

add_executable(SolitarePrime main.cpp Card.cpp Card.h Deck.cpp Deck.h)