#pragma once
#include <SFML/Graphics/Color.hpp>
#include <vector>

class Block {
private:
  std::vector<std::vector<bool>> shape_;
  sf::Color color_;

public:
  Block(const std::vector<std::vector<bool>> &blockShape,
        const sf::Color &blockColor);
  const std::vector<std::vector<bool>> &getShape() const;
  const sf::Color &getColor() const;
  void rotateClockwise();
  void rotateCounterClockwise();
};
