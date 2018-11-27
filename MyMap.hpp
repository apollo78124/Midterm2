//
// Created by dldms on 11/26/2018.
//

#ifndef MIDTERM2_MYMAP_HPP
#define MIDTERM2_MYMAP_HPP

#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <fstream>
#include <cmath>
#include <sstream>
#include <algorithm>
#include <random>
using namespace std;
//template <int V>
class MyMap{
private:
    map<string,int> myMap;
public:
    void readText(string fileName);
    void add(string key, int score);
    pair <string,int> operator [](int idx);
    pair<string,int> operator [](int idx) const;
    pair<string,int> operator [](string idx);
    friend ostream& operator<<(ostream& os, MyMap& mm);
};
#endif //MIDTERM2_MYMAP_HPP
