#pragma once

class Score {
private:
  int score_;
  int topScore_;

public:
  Score();
  int getScore() const;
  int getTopScore() const;
  void increaseScore(int);
  void resetScore();
  void updateTopScore();
};
