cmake_minimum_required(VERSION 3.27)

add_executable(modul_25_task_2 main.cpp
        ${MY_INCLUDE_DIR}/cpu.h
        ${MY_INCLUDE_DIR}/disk.h
        ${MY_INCLUDE_DIR}/gpu.h
        ${MY_INCLUDE_DIR}/kbd.h
        ${MY_INCLUDE_DIR}/ram.h
        cpu.cpp
        disk.cpp
        gpu.cpp
        kbd.cpp
        ram.cpp
)
target_include_directories(modul_25_task_2 PUBLIC ${MY_INCLUDE_DIR})