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



namespace ariel {

//    class Row{
//    public:
//        int rowNum;
//        unordered_map<int,char> colNum;
//        Row(int rowNum){
//        }
//    };
//    class Page{
//    public:
//        int pageNum;
//        unordered_map<int,Row>> row;
//        Page(int pageNum){
//        }
//    };

    class Notebook {

    public:
        map<int,map<int,char[rowLen]>> note;
        //        unordered_map<int, string> rowNum;
//        unordered_map<int, rowNum> pageNum;
        Notebook(){}
        void write( int page,   int col,   int  row, ariel::Direction dir, string str);

        string read( int page,   int col,   int  row, ariel::Direction dir,   int numOfChars);

        void erase( int page,   int col,   int  row, ariel::Direction dir,   int numOfChars);

        int show(int num);


    };
}
//#endif //TASKB_NOTEBOOK_HPP
