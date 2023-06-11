#pragma once
#include "block.h"
#include "grid.h"
#include "inputHandler.h"
#include "renderer.h"
#include "score.h"
#include <SFML/Graphics.hpp>
#include <SFML/Window/Window.hpp>

class Game {
private:
  sf::Window window_;
  Renderer renderer_;
  InputHandler inputHandler_;
  Grid grid_;
  Score score_;
  Block block_;

public:
  Game();
  void initialize();
  void loadResources();
  void start();
  void update();
  void render();
  void handleInput();
  void checkGameOver();
  void restartGame();
};
