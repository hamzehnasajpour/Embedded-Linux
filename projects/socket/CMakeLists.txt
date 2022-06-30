cmake_minimum_required(VERSION 3.10)
project(signals)

add_executable(server src/server.c)

add_executable(client src/client.c)
