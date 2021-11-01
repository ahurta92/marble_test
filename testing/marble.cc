//
// Created by adrian on 11/1/21.
//
#include "marble.h"

std::vector<Marble> getRandomMarbles(int N) {

    std::vector<Marble> marbles(N);
    srand(1);
    for (auto &marble : marbles) {
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
