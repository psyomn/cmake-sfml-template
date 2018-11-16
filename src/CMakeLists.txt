add_executable(card main.cxx)
add_dependencies(card sfml-system sfml-window sfml-network sfml-graphics sfml-audio)
target_link_libraries(card sfml-system sfml-window sfml-network sfml-graphics sfml-audio)
