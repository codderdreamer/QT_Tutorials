# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "006_qt_intro_autogen"
  "CMakeFiles\\006_qt_intro_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\006_qt_intro_autogen.dir\\ParseCache.txt"
  )
endif()
