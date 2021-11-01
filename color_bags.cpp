#include "marble.h"
// Marbles have a color and a weight
// colors{red,blue,yellow}
// weight{1,2,3,4,5}

int main() {
  // A container of 10 random marbles
  std::vector<Marble> marbles = getRandomMarbles(5);
  int count = 0;
  for (int i = 0; i < marbles.size(); ++i) {
    count++;
    std::cout << "m: " << count << ", weight " << marbles[i].get_weight()
              << ", color: " << marbles[i].get_color() << std::endl;
  }
  std::vector<Marble> rbag;
  std::vector<Marble> ybag;
  std::vector<Marble> bbag;

  for (int i = 0; i < marbles.size(); ++i) {
    if (marbles[i].get_color() == "red") {
      rbag.push_back(marbles[i]);
    } else if (marbles[i].get_color() == "blue") {
      bbag.push_back(marbles[i]);
    } else {
      ybag.push_back(marbles[i]);
    }
  }
  std::cout << "red: " << rbag.size() << std::endl;
  std::cout << "blue: " << bbag.size() << std::endl;
  std::cout << "yellow: " << ybag.size() << std::endl;
  count = 0;
  for (auto &marble : rbag) {
    count++;
    std::cout << "m: " << count << ", weight " << marble.get_weight()
              << ", color: " << marble.get_color() << std::endl;
  }
  for (auto &marble : ybag) {
    count++;
    std::cout << "m: " << count << ", weight " << marble.get_weight()
              << ", color: " << marble.get_color() << std::endl;
  }
  for (auto &marble : bbag) {
    count++;
    std::cout << "m: " << count << ", weight " << marble.get_weight()
              << ", color: " << marble.get_color() << std::endl;
  }
}
