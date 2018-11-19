#pragma once

#include <SFML/Graphics.hpp>
#include <cstddef>

struct Common {
  static inline sf::Vector2<size_t> RetroDimentions() {
    return sf::Vector2<size_t>(512, 448);
  }
};
