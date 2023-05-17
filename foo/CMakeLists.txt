cmake_minimum_required(VERSION 3.16)

project(foo VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.5 REQUIRED COMPONENTS Quick)

qt_standard_project_setup(REQUIRES 6.5)

set(SOURCES
    # cmake-format: sort
    main.cpp
    foo.cpp
    fooobjectwithbarproperty.cpp
)

set(HEADER
    # cmake-format: sort
    fooobjectwithbarproperty.h
    foo.h
)

qt_add_executable(appfoo
    main.cpp
)

qt_add_qml_module(appfoo
    URI foo
    VERSION 1.0
    QML_FILES Main.qml
    SOURCES
        ${SOURCES}
        ${HEADER}
)

set_target_properties(appfoo PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appfoo
    PRIVATE Qt6::Quick bar
)

install(TARGETS appfoo
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
