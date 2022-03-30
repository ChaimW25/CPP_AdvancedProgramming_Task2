#include "string"
#include <iostream>
#include <unordered_map>
#include "Direction.hpp"
#include <map>
//#ifndef TASKB_NOTEBOOK_HPP
//#define TASKB_NOTEBOOK_HPP
using namespace std;
const int rowLen=100;
const int minChar=32;
const int maxChar=126;
//const int underScore=95;




namespace ariel {

    class Notebook {

    public:
        map<int,map<int,char[rowLen]>> note;
        //        unordered_map<int, string> rowNum;
//        unordered_map<int, rowNum> pageNum;
        Notebook(){}
        void write( int page, int  row,  int col,    ariel::Direction dir, string str);

        string read( int page,int  row,    int col,   ariel::Direction dir,   int numOfChars);

        void erase( int page, int  row,  int col,    ariel::Direction dir,   int numOfChars);

        int show(int num);


    };
}
//#endif //TASKB_NOTEBOOK_HPP
