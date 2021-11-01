#include "marble.h"
// Marbles have a color and a weight
// colors{red,blue,yellow}
// weight{1,2,3,4,5}

int main() {
  // Here we can create a single random marble
  Marble my_marble = Marble();
  // These variables the color count
  int red{0}, yellow{0}, blue{0};
  // Color Sorter
  if (my_marble.get_color() == "red") {
    // if marble is red add one to red count
    red++;
  } else if (my_marble.get_color() == "blue") {
    // if marble is blue add one to blue count
    blue = blue + 1;
  } else {
    // if not red or blue must be yellow
    yellow = yellow + 1;
  }
  // print the count of each color
  std::cout << "red: " << red << std::endl;
  std::cout << "blue: " << blue << std::endl;
  std::cout << "yellow: " << yellow << std::endl;
}
