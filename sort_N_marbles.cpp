#include "marble.h"
// Marbles have a color and a weight
// colors{red,blue,yellow}
// weight{1,2,3,4,5}

int main() {
  int red{0}, yellow{0}, blue{0};
  int N = 5; // how many marbles are we counting
  for (int i = 0; i < N; ++i) {
    Marble my_marble = Marble();
    if (my_marble.get_color() == "red") {
      red++;
    } else if (my_marble.get_color() == "blue") {
      blue = blue + 1;
    } else {
      yellow = yellow + 1;
    }
  }
  std::cout << "red: " << red << std::endl;
  std::cout << "blue: " << blue << std::endl;
  std::cout << "yellow: " << yellow << std::endl;
}
