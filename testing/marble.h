#include <iostream>
#include <random>
#include <vector>

class Marble {
private:
    int weight;
    std::string color;

public:
    Marble() {
        int rand_color = rand() % 9;
        if (rand_color == 0) {
            color = "red";
        } else if (rand_color == 1) {
            color = "blue";
        } else if (rand_color == 2) {
            color = "yellow";
        } else if (rand_color == 3) {
            color = "black";
        } else if (rand_color == 4) {
            color = "green";
        } else if (rand_color == 5) {
            color = "green";
        } else if (rand_color == 6) {
            color = "green";
        } else if (rand_color == 7) {
            color = "green";
        } else {
            color = "white";
        }
        // weight range is 10
        weight = ((rand() % 10) + 1);
    }
// marbles can weigh from values 1 to 5

    void set_color(std::string col) { color = col; }

    void set_weight(int w) { weight = w; }

    std::string get_color() const { return color; }

    int get_weight() const { return weight; }
};

std::vector<Marble> getRandomMarbles(int N) {

    std::vector<Marble> marbles(N);
    srand(1);
    for (auto &marble: marbles) {
        int rand_color = rand() % 3;
        if (rand_color == 0) {
            marble.set_color("red");
        } else if (rand_color == 1) {
            marble.set_color("blue");
        } else {
            marble.set_color("yellow");
        }
        marble.set_weight((rand() % 5) + 1);
        // marbles can weigh from values 1 to 5
    }
    return marbles;
}
