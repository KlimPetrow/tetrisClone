#pragma once
#include "block.h"
#include "grid.h"
#include <SFML/Graphics.hpp>
#include <SFML/Window/Window.hpp>

class InputHandler {
private:
  sf::Window &window_;
  Grid *grid_;
  Block *block_;

public:
  InputHandler(sf::Window &gameWindow);
  void setGrid(Grid *gameGrid);
  void setBlock(Block *gameBlock);
  void handleInput();
};
