#pragma once
#include <vector>

class Grid {
private:
  int width_;
  int height_;
  std::vector<std::vector<bool>> gridCells_;

public:
  Grid(int gridWidth, int gridHeigth);
  void initialize();
  int getWidth() const;
  int getHeight() const;
  bool getCellState(int row, int col) const;
  void setCellState(int row, int col, bool state);
  bool isCellOccupied(int row, int col) const;
  bool isRowFull(int row) const;
  void clearRow(int row);
  void clear();
};
