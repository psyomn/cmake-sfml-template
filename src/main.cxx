#include <SFML/Graphics.hpp>
#include <iostream>

using std::cout;
using std::endl;

int main(void) {
  cout << "HI" << endl;
  sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");

  while (window.isOpen()) {
      // Process events
      sf::Event event;
      while (window.pollEvent(event))
        {
          // Close window: exit
          if (event.type == sf::Event::Closed)
            window.close();
        }
      // Clear screen
      window.clear();
      // Draw the sprite
      // window.draw(sprite);
      // Draw the string
      // window.draw(text);
      // Update the window
      window.display();
  }

  return 0;
}
