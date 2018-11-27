#include <iostream>
#include "MyMap.hpp"

int main() {
    MyMap m;
    m.readText("../studentMarks.txt");
    cout<<m<<endl;
    cout<<"Search"<<endl;

    cout<<m[1].first<<endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}