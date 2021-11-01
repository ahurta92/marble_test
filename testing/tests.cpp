//
// Created by adrian on 10/30/21.
//

#include "catch.hpp"
#include "problems.h"

// Returning Strings Problem
TEST_CASE("Find Max Weight") {
    int max=10;
    int min=1;
    int N=100;
    std::vector<Marble> m(N);//=getRandomMarbles(1000);
    SECTION("FIND MAX WEIGHT") {
        REQUIRE(findMaxWeight(m) == max);
    }
    SECTION("FIND MIN WEIGHT") {
        REQUIRE(findMinWeight(m) == min);
    }
    SECTION("FIND TOTAL WEIGHT") {
        int total = 0;
        for (int i = 0; i < m.size(); i++) {
            total += m[i].get_weight();
        }
        std::vector<Marble> m1;
        int M=23;
        for (int i = 0; i < M; i++) {
            m1.push_back(Marble{1,std::string("black")});
        }
        REQUIRE(findTotalWeight(m) == total);
        REQUIRE(findTotalWeight(m1) == M);
    }
    SECTION("FIND AVERAGE WEIGHT") {
        int total = 0;
        for (int i = 0; i < m.size(); i++) {
            total += m[i].get_weight();
        }
        std::vector<Marble> m1;
        int M=23;
        for (int i = 0; i < M; i++) {
            m1.push_back(Marble{1,std::string("black")});
        }
        CHECK(findAverageWeight(std::vector<Marble>(10000)) == Approx(5.5).epsilon(.01));
        REQUIRE(findAverageWeight(m1) == 1.0);
    }
    SECTION("FIND Max Color") {
        REQUIRE(findMaxColor(m) == std::string("green"));
    }
    SECTION("Return Blue Bag") {
        size_t blue=0;
        for (auto &marble: m) {
            if (marble.get_color() == "blue") {
                blue++;
            }
        }
        std::vector<Marble> blueBags= returnBlueBag(m);
        REQUIRE(blueBags.size()==blue);
    }
    SECTION("Return Red Bag") {
        size_t red=0;
        for (auto &marble: m) {
            if (marble.get_color() == "red") {
                red++;
            }
        }
        std::vector<Marble> redBags= returnRedBag(m);
        REQUIRE(redBags.size()==red);
    }
}
