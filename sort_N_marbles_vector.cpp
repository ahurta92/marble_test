#include "marble.h"
// Marbles have a color and a weight
// colors{red,blue,yellow}
// weight{1,2,3,4,5}

int main() {
  int red{0}, yellow{0}, blue{0};
  int N = 5; // how many marbles are we counting
  std::vector<Marble> marble_bag = getRandomMarbles(N);
  for (int i = 0; i < marble_bag.size(); ++i) {
    if (marble_bag[i].get_color() == "red") {
      red++;
    } else if (marble_bag[i].get_color() == "blue") {
      blue = blue + 1;
    } else {
      yellow = yellow + 1;
    }
  }
  std::cout << "red: " << red << std::endl;
  std::cout << "blue: " << blue << std::endl;
  std::cout << "yellow: " << yellow << std::endl;
}
