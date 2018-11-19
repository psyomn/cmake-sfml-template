add_executable(game main.cxx)
add_dependencies(game sfml-system sfml-window sfml-network sfml-graphics sfml-audio)
target_link_libraries(game sfml-system sfml-window sfml-network sfml-graphics sfml-audio)
