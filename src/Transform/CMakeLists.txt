set (target Transform)

# include_directories(include)

set (FILES_CPP
    src/Transform.cpp
)

# set (FILES_HPP
#     include/Transform/Transform.hpp
# )

add_library(${target} ${FILES_CPP} ${FILES_HPP})

install(TARGETS ${target}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR} 
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
)