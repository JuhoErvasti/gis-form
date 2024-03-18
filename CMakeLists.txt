cmake_minimum_required(VERSION 3.5)

project(gis-form VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 COMPONENTS Widgets REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets REQUIRED)

set(PROJECT_SOURCES
        src/main.cpp
        src/App.cpp
        src/App.hpp
        src/App.ui
        src/SourceList.cpp
        src/SourceList.hpp
        src/ToolInfo.cpp
        src/ToolInfo.hpp
        resources/icons.qrc
)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(gis-form
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
endif()

target_link_libraries(gis-form PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

set_target_properties(gis-form PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(gis-form)
endif()
