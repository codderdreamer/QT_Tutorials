cmake_minimum_required(VERSION 3.5)

project(002_non_qt_project LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(002_non_qt_project main.cpp)

include(GNUInstallDirs)
install(TARGETS 002_non_qt_project
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
