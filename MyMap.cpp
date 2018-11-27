//
// Created by dldms on 11/26/2018.
//
#include "MyMap.hpp"

void MyMap::readText(string fileName) {
    ifstream ifile(fileName, ios::in);
    string temp;
    string line;
    if (!ifile.is_open()) {
        cerr << "There was a problem opening the input file!\n";
    }
    int mark = 0;
    string name = "";
    string word = "";
    while (getline(ifile, line)) {
        istringstream iss(line);
        mark = 0;
        name = "";
        word = "";
        int count = 0;
        while(iss >> word) {
            if (count == 0) {
                name = word;
            }
            if (count == 1) {
                mark = stoi(word);
            }
            count++;
        }
        myMap.insert(make_pair(name, mark));
    }
}

void MyMap::add(string key, int score) {
    multimap<string, int>::iterator oneNumber = myMap.find(key);
    if (oneNumber == myMap.end()) {
        myMap.insert(make_pair(key, score));
    } else {
        myMap.erase(oneNumber);
        myMap.insert(make_pair(key, score));
    }
}

pair<string,int> MyMap::operator [](int idx) {
    map<string, int>::iterator it2;
    int count = 0;
    for (it2 = myMap.begin(); it2 != myMap.end(); it2++) {

        if (count == idx)
            return it2);
        count++;
    }
    return (*it2);
}


/**
pair<string,int>& MyMap::operator [](string idx) {
    return myMap[idx];
}

pair<string,int> MyMap::operator [](string idx) const{
    return myMap.find(idx);
}
*/
ostream& operator<<(ostream& os, MyMap& mm)
{
   map<string, int>::iterator it2;

    for (it2 = mm.myMap.begin(); it2 != mm.myMap.end(); it2++) {

        os << (*it2).first << " " << (*it2).second<<endl;
    }

    return os;
}