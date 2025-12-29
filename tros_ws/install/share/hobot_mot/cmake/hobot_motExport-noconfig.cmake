#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "hobot_mot::hobot_mot" for configuration ""
set_property(TARGET hobot_mot::hobot_mot APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(hobot_mot::hobot_mot PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libhobot_mot.so"
  IMPORTED_SONAME_NOCONFIG "libhobot_mot.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS hobot_mot::hobot_mot )
list(APPEND _IMPORT_CHECK_FILES_FOR_hobot_mot::hobot_mot "${_IMPORT_PREFIX}/lib/libhobot_mot.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
