add_executable(Hello Hello.cpp)

target_link_libraries(Hello Math Transform)

install(TARGETS Hello
    RUNTIME DESTINATION bin
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib
)