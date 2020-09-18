cmake_minimum_required(VERSION 3.17)
project(laboratorio_di_programmazione)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(test)

set(SOURCE_FILES Message.cpp Chat.cpp User.cpp MessageNotifier.cpp)
add_executable(laboratorio_di_programmazione main.cpp)
add_library(core ${SOURCE_FILES})
target_link_libraries(laboratorio_di_programmazione core)