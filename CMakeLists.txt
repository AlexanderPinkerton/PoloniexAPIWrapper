cmake_minimum_required(VERSION 3.6)
project(PoloniexAPIWrapper)
set(CMAKE_CXX_STANDARD 11)


#----------------Prepare and Load Dependencies--------------------------------

#Add the QT Cmake path to the current cmake path.
#If it cannot find QT, make sure it is installed and then set the QtCmakePath

#Add the <Qt5Dir>/lib/cmake/Qt5 Enivronment Variable to the prefix path 
SET(CMAKE_PREFIX_PATH ${CMAKE_PREFIX_PATH} "~/Qt5.8.0/5.8/gcc_64/lib/cmake/Qt5")
# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Find the Qt Modules
find_package(Qt5 COMPONENTS Core Network REQUIRED )
# Instruct CMake to run moc automatically when needed. [For Qt]
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)


# Find the BOOST library
#SET(CMAKE_INCLUDE_PATH ${CMAKE_INCLUDE_PATH} "X:/Libraries/boost_1_63_0/boost")
#SET(CMAKE_LIBRARY_PATH ${CMAKE_LIBRARY_PATH} "X:/Libraries/boost_1_63_0/stage/lib")
#FIND_PACKAGE( Boost 1.63 COMPONENTS system REQUIRED )

#INCLUDE_DIRECTORIES( ${Boost_INCLUDE_DIR} )

# Tell Cmake what user files to include in the build process.
file(GLOB SOURCE_FILES "./cpp/*.cpp" "./hpp/*.hpp")
add_executable(PoloniexAPIWrapper ${SOURCE_FILES})
#add_library(poloniex-api-cpp SHARED ${SOURCE_FILES} PoloniexClient.cpp PoloniexClient.h)


#------------------Attach Dependencies to Executable-----------------------

# Specify which QT modules to add to the executable.
target_link_libraries(PoloniexAPIWrapper Qt5::Core Qt5::Network)

# Link Dependencies.
#TARGET_LINK_LIBRARIES( PoloniexAPIWrapper ${Boost_LIBRARIES} )
