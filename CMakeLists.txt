cmake_minimum_required(VERSION 3.16.0)

# binme   - Project to convert text to binary
set(PROJ_1 binme)
set(VERS 0.1.0)
project("${PROJ_1}" VERSION "${VERS}")
add_executable("${PROJ_1}" "src/binme.cpp")

# unbinme - Project to convert binary to text
set(PROJ_2 unbinme)
project("${PROJ_2}" VERSION "${VERS}")
add_executable("${PROJ_2}" "src/unbinme.cpp")

include(InstallRequiredSystemLibraries)
set(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_CURRENT_SOURCE_DIR}/LICENSE")
set(CPACK_PACKAGE_VERSION_MAJOR 1)
set(CPACK_PACKAGE_VERSION_MINOR 0)
set(DESTINATION ${CMAKE_INSTALL_PREFIX})
include(CPack)
