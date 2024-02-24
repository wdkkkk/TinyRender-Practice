# CMakeLists.txt
cmake_minimum_required(VERSION 3.10)

project(Tinyrenderer)

aux_source_directory(. DIR_SRCS)

add_subdirectory(tgaimage)

add_executable(Tinyrenderer ${DIR_SRCS})

target_link_libraries(Tinyrenderer tgaimage)