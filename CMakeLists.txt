cmake_minimum_required(VERSION 2.8)
include(../CompileScripts/CMakeLists.txt)

project(FireEmblem)
aux_source_directory(Structs SRC_LIST)
include_directories(
	../libGamesEngines
	../libGamesEngines/Cpp11
	../libGamesEngines/Cpp11/Containers
	../libGamesEngines/Lua
	../libGamesEngines/Math
	../libGamesEngines/WarChess
)
#system include
include_directories(/usr/include/lua5.3)
include_directories(/usr/include/x86_64-linux-gnu/qt5)
add_library(${PROJECT_NAME} SHARED ${SRC_LIST})

set(EXECUTABLE_OUTPUT_PATH ../FireEmblem)