cmake_minimum_required(VERSION 3.5)

project(004_non_qt_classes LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(004_non_qt_classes main.cpp)

include(GNUInstallDirs)
install(TARGETS 004_non_qt_classes
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
