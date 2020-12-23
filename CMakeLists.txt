cmake_minimum_required(VERSION 3.17)
project(LabFor1Sem C)

set(CMAKE_C_STANDARD 11)

include_directories(src)
include_directories(src/cryptLib)
include_directories(src/dynamicString)

add_executable(LabFor1Sem
        src/cryptLib/CryptCoder.c
        src/cryptLib/cryptManager.c
        src/dynamicString/core.c
        src/dynamicString/tools.c
        src/stringTools.c)
