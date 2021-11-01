#include <iostream>
#include <random>
#include <vector>

class Marble {
private:
    int weight;
    std::string color;

public:
    Marble(int w,std::string col): weight{w},color{col}{};
    Marble() {
        int rand_color = rand() % 9;
        //Possible colors are {"red","blue","yellow","black","green","white"}
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
    std::string get_color()  { return color; }

    int get_weight() const { return weight; }
    int get_weight()  { return weight; }
};



std::vector<Marble> getRandomMarbles(int N);
