add_executable(builder_demo main.cpp)
target_link_libraries(builder_demo PRIVATE builder_pattern_impl)
install(TARGETS builder_demo DESTINATION bin)
