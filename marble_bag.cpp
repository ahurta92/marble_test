#include "marble.h"
// Marbles have a color and a weight
// colors{red,blue,yellow}
// weight{1,2,3,4,5}

int main() {
  // A container of 10 random marbles
  int N=10;
  std::vector<Marble> marbles = getRandomMarbles(N);
  int count = 0;
  for (int i = 0; i < marbles.size(); ++i) {
    count++;
    std::cout << "m: " << count << ", weight " << marbles[i].get_weight()
              << ", color: " << marbles[i].get_color() << std::endl;
  }
}
