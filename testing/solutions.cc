#include "problems.h"


int findMaxWeight(const std::vector<Marble> &m) {
    int max = 0;
    for (int i = 0; i < m.size(); i++) {
        // if the ith weight is greater than max is ith weight
        if (m[i].get_weight() > max) {

            max = m[i].get_weight();
        }
    }
    return max;
}

int findMinWeight(const std::vector<Marble> &m) {
    int min = 10000000;
    for (int i = 0; i < m.size(); i++) {
        // if the ith weight is greater than max is ith weight
        if (m[i].get_weight() < min) {
            min = m[i].get_weight();
        }
    }
    return min;
}

int findTotalWeight(const std::vector<Marble> &m) {
    int total = 0;
    for (int i = 0; i < m.size(); i++) {
        total += m[i].get_weight();
    }
    return total;
}

double findAverageWeight(const std::vector<Marble> &m) {
    int total = findTotalWeight(m);
    double avg = static_cast<double>(total) / m.size();
    return avg;
}

std::string findMaxColor(const std::vector<Marble> &m) {
    std::vector<Marble> green;
    std::vector<Marble> white;
    std::vector<Marble> black;
    std::vector<Marble> blue;
    std::vector<Marble> red;
    std::vector<Marble> yellow;
    for (auto &marble: m) {
        if (marble.get_color() == "green") green.push_back(marble);
        else if (marble.get_color() == "white") white.push_back(marble);
        else if (marble.get_color() == "black") black.push_back(marble);
        else if (marble.get_color() == "blue") blue.push_back(marble);
        else if (marble.get_color() == "red") red.push_back(marble);
        else yellow.push_back(marble);
    }
    std::string max_bag_color;
    int max_bag_size = 0;
    if (green.size() > max_bag_size) {
        max_bag_color = "green";
        max_bag_size = green.size();
    } else if (white.size() > max_bag_size) {
        max_bag_color = "white";
        max_bag_size = green.size();
    } else if (black.size() > max_bag_size) {
        max_bag_color = "black";
        max_bag_size = green.size();
    } else if (red.size() > max_bag_size) {
        max_bag_color = "red";
        max_bag_size = green.size();
    } else if (blue.size() > max_bag_size) {
        max_bag_color = "blue";
        max_bag_size = green.size();
    } else if (yellow.size() > max_bag_size) {
        max_bag_color = "yellow";
        max_bag_size = green.size();
    }
    return max_bag_color;
}

std::vector<Marble> returnBlueBag(const std::vector<Marble> &m) {
    std::vector<Marble> green;
    std::vector<Marble> white;
    std::vector<Marble> black;
    std::vector<Marble> blue;
    std::vector<Marble> red;
    std::vector<Marble> yellow;
    for (auto &marble: m) {
        if (marble.get_color() == "green") {
            green.push_back(marble);
        } else if (marble.get_color() == "white") {
            white.push_back(marble);
        } else if (marble.get_color() == "black") {
            black.push_back(marble);

        } else if (marble.get_color() == "blue") {
            blue.push_back(marble);

        } else if (marble.get_color() == "red") {
            red.push_back(marble);
        } else if (marble.get_color ()== "yellow") {
            yellow.push_back(marble);
        } else if (marble.get_color ()== "yellow") {
        }
    }
    return blue;
}

std::vector<Marble> returnRedBag(const std::vector<Marble> &m) {
    std::vector<Marble> green;
    std::vector<Marble> white;
    std::vector<Marble> black;
    std::vector<Marble> blue;
    std::vector<Marble> red;
    std::vector<Marble> yellow;
    for (auto &marble: m) {
        if (marble.get_color() == "green") {
            green.push_back(marble);
        } else if (marble.get_color() == "white") {
            white.push_back(marble);
        } else if (marble.get_color() == "black") {
            black.push_back(marble);

        } else if (marble.get_color ()== "blue") {
            blue.push_back(marble);

        } else if (marble.get_color ()== "red") {
            red.push_back(marble);
        } else if (marble.get_color ()== "yellow") {
            yellow.push_back(marble);
        } else if (marble.get_color() == "yellow") {
        }
    }
    return red;
}


