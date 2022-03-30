#include "Notebook.hpp"
#include <cstring>
//int const rowLen=100;
using namespace std;



namespace ariel {


        void Notebook::write(int page, int row, int col, ariel::Direction dir, string str) {
            int len=str.length();
            if(page<0 || row<0 || col<0 ||col>=rowLen ){
                throw("Illegal arguments");
            }
            if (dir == Direction::Horizontal) {
                if( len+col>=rowLen){
                    throw("Illegal arguments");
                }
                for (int i = 0; i < len; i++) {
                    if(str[(size_t) i]<minChar || str[(size_t) i]>=maxChar){
                        throw("Illegal chars!!!");
                    }
                    if((note[page][row][col+i] >= minChar && note[page][row][col+i] <= maxChar) && note[page][row][col+i]!='_' ){
                        throw("Used chars!!!");
                    }
//                    cout << str[i] << endl;
                        note[page][row][col + i] = str[(size_t) i];
                }

            } else {
                for (int i = 0; i < len; i++) {
                    if(str[(size_t) i]<minChar || str[(size_t) i]>=maxChar){
                        throw("Illegal chars!!!");
                    }
                    if((note[page][row+i][col] >= minChar && note[page][row+i][col] <= maxChar) && note[page][row+i][col]!='_'){
                        throw("Used chars!!!");
                    }
                        note[page][row + i][col] = str[(size_t)i];
                }
            }
        }

        string Notebook::read(int page,int row, int col,  ariel::Direction dir, int numOfChars) {
            if(page<0 || row<0 || col<0 || col>=rowLen || numOfChars<=0 ){
                throw("Illegal arguments");
            }
            string str;
            if (dir == Direction::Horizontal) {
                if(numOfChars+col > rowLen){
                    throw("Illegal arguments");
                }
                for (int i = 0; i < numOfChars; i++) {
                    if (note[page][row + i][col] != '~') {
                        //if there's no char -> '_'
                        if ((note[page][row][col + i] >= minChar && note[page][row][col + i] <= maxChar) || note[page][row][col + i]=='_') {
                            str += note[page][row][col + i];
                        }
                            //there's a char -> don't touch
                        else {
                            str += '_';

                        }
                    }
                        //there's '~' -> don't touch
                    else{
                         str += '~';


                    }
                }

            }
            //the directon is vertical
            else {
                for (int i = 0; i < numOfChars; i++) {
                    if (note[page][row + i][col] != '~') {
                        //if there's no char -> '_'
                        if ((note[page][row+ i][col ] < minChar || note[page][row + i][col] > maxChar) || note[page][row+ i][col ]=='_') {
//                            note[page][row+ i][col ] = '_';
                            str += '_';
                        }
                            //there's a char -> don't touch
                        else {
                            str += note[page][row + i][col];
                        }
                    }
                        //there's '~' -> don't touch
                    else{
                        str += '~';


                    }
                }

            }
//                for (int i = 0; i < numOfChars; i++) {
//                    if(note[page][row+i][col]!='~'){
//                        if(note[page][row+i][col]<32 || note[page][row+i][col]>126){
//                            note[page][row+i][col]='_';
//                        }
//                    }
//                        str+=note[page][row + i][col];
//                }
//            }
            return str;
        }

        void Notebook::erase(int page,int row, int col,  ariel::Direction dir, int numOfChars) {
            if(page<0 || row<0 || col<0 || col>=rowLen || numOfChars<0 ){
                throw("Illegal arguments");
            }

            if (dir == Direction::Horizontal) {
                if( numOfChars+col>=rowLen){
                    throw("Illegal arguments");
                }
                for (int i = 0; i < numOfChars; i++) {
                    note[page][row][col + i]='~';
                }

            } else {
                for (int i = 0; i < numOfChars; i++) {
                    note[page][row + i][col] = '~';
                }
            }
        }

        int Notebook::show(int num) {
            if(num<0){
                throw("Illegal page");
            }
            for (int i = 0; i < note[num].size(); i++) {
                for(int j=0; j<rowLen;  j++){
                    cout<<note[num][i][j];
                }
                cout<<endl;
            }
            return 0;

        }


    };






