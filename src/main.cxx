#include <SFML/Graphics.hpp>
#include <iostream>

#include "common.hxx"

using std::cout;
using std::endl;

int main(void) {
  auto dim = Common::RetroDimentions();
  sf::RenderWindow window(sf::VideoMode(dim.x, dim.y), "game-template");

  while (window.isOpen()) {
    sf::Event event;
    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed)
        window.close();
    }
    window.clear();
    window.display();
  }

  return 0;
}
