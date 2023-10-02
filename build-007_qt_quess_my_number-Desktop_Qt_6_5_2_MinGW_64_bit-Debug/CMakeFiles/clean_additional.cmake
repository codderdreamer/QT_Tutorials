# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "007_qt_quess_my_number_autogen"
  "CMakeFiles\\007_qt_quess_my_number_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\007_qt_quess_my_number_autogen.dir\\ParseCache.txt"
  )
endif()
