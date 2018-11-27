#include <iostream>
#include "MyMap.hpp"

int main() {
    MyMap m;
    m.readText("../studentMarks.txt");
    cout<<m<<endl;
    cout<<"Search by number 1"<<endl;

    cout<<m[1].first<<endl;

    cout<<"Search by name Wiggim"<<endl;
    pair<string, int> a = m["Wiggim"];
    cout<<a.first<<" "<<a.second<<endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}