#include <algorithm>
#include <functional>
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include "marble.h"



int findMaxWeight(const std::vector<Marble> &m);
int findMinWeight(const std::vector<Marble> &m);
int findTotalWeight(const std::vector<Marble> &m);
double findAverageWeight(const std::vector<Marble> &m);
std::string findMaxColor(const std::vector<Marble> &m);
std::vector<Marble> returnBlueBag(const std::vector<Marble> &m);
std::vector<Marble> returnRedBag(const std::vector<Marble> &m);
std::vector<Marble> returnBagLessThan(const std::vector<Marble> &m,int Weight);
