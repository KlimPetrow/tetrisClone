#pragma once
#include "grid.h"
#include "score.h"
#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Window.hpp>
#include <SFML/Window/Window.hpp>
#include <string>

class Renderer {
private:
  sf::Window window_;
  sf::Font font_;
  int cellSize_;
  Grid *grid_;
  sf::Texture blockTexture_;
  sf::Sprite blockSprite_;

public:
  Renderer();
  void initialize(int windowWidth, int windowHeight);
  void loadBlockTexture(const std::string &texturePath);
  void setGrid(Grid *gameGrid);
  void drawBlock(int row, int col);
  void drawGrid();
  void drawScore(const Score &score);
  void display();
  void clear();
};
