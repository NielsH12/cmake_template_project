set (target Math)

include_directories(/include/Math)

set (FILES_CPP
    Addition.cpp
    Subtraction.cpp
)

set (FILES_HPP
    Addition.cpp
    Subtraction.cpp
)

# Add a Library: Math
add_library(${target} Addition.cpp Subtraction.cpp)
# set_target_properties(${target} PROPERTIES PUBLIC_HEADER )

# target_link_libraries(${target} ${ROBWORK_LIBRARIES})
target_link_libraries(${target})

install(TARGETS ${target}
    EXPORT ${target}Targets
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR} 
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
    # INCLUDE DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)

install(EXPORT ${target}Targets
    FILE ${target}Targets.cmake
    NAMESPACE ${target}::
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/${target}
)