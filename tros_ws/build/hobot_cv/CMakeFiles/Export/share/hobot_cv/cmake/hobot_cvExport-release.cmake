#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "hobot_cv::hobot_cv" for configuration "Release"
set_property(TARGET hobot_cv::hobot_cv APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(hobot_cv::hobot_cv PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libhobot_cv.so"
  IMPORTED_SONAME_RELEASE "libhobot_cv.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS hobot_cv::hobot_cv )
list(APPEND _IMPORT_CHECK_FILES_FOR_hobot_cv::hobot_cv "${_IMPORT_PREFIX}/lib/libhobot_cv.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
