#include <iostream>
#include "sources/Notebook.cpp"

using namespace std;



    int main() {
        ariel::Notebook no;
        no.write(1, 1, 1, ariel::Direction::Horizontal, "hello u");
        string str = no.read(2, 1, 1, ariel::Direction::Horizontal, 4);
        cout << str << endl;
        return 0;
    }
