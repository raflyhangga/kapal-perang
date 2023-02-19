#include <iostream>
#include "ship.cpp"
using namespace std;
class World{
public:
/*ctor*/
    World(){
        map = new int*[10];
        for(int i = 0;i<10;i++){
            map[i] = new int[10];
            for(int j=0;j<10;j++){
                map[i][j] = i+j;
            }
        }
    }

    void printmap(){
        for(int i = 0; i<10;i++){
            for(int j = 0;j<10;j++){
                cout<<" # ";
            }
            cout << endl;
        }
    }
private:
    /*List of enemy bot*/
    /*Player bot*/
    /*size: x*x need odd*/
    int x;
    /*Matrix of map*/
    int **map;
    /*Kill Count*/
};