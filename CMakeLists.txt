cmake_minimum_required (VERSION 2.8 FATAL_ERROR)

cmake_policy(SET CMP0048 NEW) # for version
project (factory_mode VERSION 1.5.2)

SET(CMAKE_BUILE_TYPE "build")

find_package(Qt5 COMPONENTS Widgets   REQUIRED)

execute_process(
  COMMAND ${GIT_EXECUTABLE} rev-parse --short HEAD
  WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}"
  OUTPUT_VARIABLE PROJECT_COMPILE_COMMIT
  ERROR_QUIET OUTPUT_STRIP_TRAILING_WHITESPACE)


# Tell CMake to run moc when necessary:
SET(CMAKE_AUTOMOC ON)

message(${CMAKE_SOURCE_DIR})
#find LaserLib
include_directories (${CMAKE_SOURCE_DIR}/include)

# As moc files are generated in the binary dir, tell CMake
# to always look for includes there:
SET(CMAKE_INCLUDE_CURRENT_DIR ON)

SET  (PROJECT_SOURCES
	${CMAKE_SOURCE_DIR}/src/main.cpp
	${CMAKE_SOURCE_DIR}/src/base.cpp
  ${CMAKE_SOURCE_DIR}/src/testA.cpp
  ${CMAKE_SOURCE_DIR}/src/testB.cpp
  ${CMAKE_SOURCE_DIR}/src/testC.cpp
  ${CMAKE_SOURCE_DIR}/src/factory.cpp
	) 

SET  (PROJECT_HEADERS
  ${CMAKE_SOURCE_DIR}/include/base.h
  ${CMAKE_SOURCE_DIR}/include/testA.h
  ${CMAKE_SOURCE_DIR}/include/testB.h
  ${CMAKE_SOURCE_DIR}/include/testC.h
  ${CMAKE_SOURCE_DIR}/include/factory.h
	)

INCLUDE_DIRECTORIES(src include ${CMAKE_CURRENT_BINARY_DIR} ${Qt5_INCLUDE_DIRS})
LINK_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/lib/linux)
ADD_EXECUTABLE(${PROJECT_NAME} ${PROJECT_SOURCES} ${PROJECT_HEADERS} )
TARGET_LINK_LIBRARIES(${PROJECT_NAME} Qt5::Core Qt5::Widgets Qt5::Gui )

# =========================
# Get System Name
# =========================

SET(CMAKE_INSTALL_RPATH ${CMAKE_INSTALL_PREFIX}/lib/${PROJECT_NAME})
SET(CMAKE_EXE_LINKER_FLAGS "-Wl,--disable-new-dtags")

find_program(LSB_EXEC lsb_release)

if(LSB_EXEC MATCHES "NOTFOUND")
  message(
    "\n lsb_release not found, please install using: \n\t sudo apt install lsb_release\n"
  )
endif()

execute_process(
  COMMAND ${LSB_EXEC} -cs
  OUTPUT_VARIABLE LSB_CODENAME
  OUTPUT_STRIP_TRAILING_WHITESPACE)

target_include_directories(${PROJECT_NAME} PRIVATE  ${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/include)


