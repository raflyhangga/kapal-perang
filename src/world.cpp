#include "world.hpp"
#include <windows.h>
#include <stdlib.h>
World::World(){
    map = new int*[10];
    for(int i = 0;i<10;i++){
        map[i] = new int[11];
        for(int j=0;j<11;j++){
            map[i][j] = 0;
        }
    }
    //creating player
    map[5][5] = 1;
    PlayerShip player();
    

    enemies = new EnemyShip[7];
    for(int i = 0; i<7 ; i++){
        EnemyShip temp;
        enemies[i] = temp;
    }
}
void World::printSide(int x , int y){
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    bool placed = false;
    if(player.sameCoordinate(x,y)){
        SetConsoleTextAttribute(h,0xA);
        cout << " A ";
        placed = true;
    }else{
        int i = 0;
        while(i<11 && !placed){
            if(enemies[i].sameCoordinate(x,y) && enemies[i].isAlive()){
                SetConsoleTextAttribute(h,0x4);
                cout << " A ";
                placed = true;
            }
            else{i++;}
        }
    }
    if(!placed){
        SetConsoleTextAttribute(h,0x9);
        cout << " # ";
    }
}

void World::printmap(){
    for(int i = 0; i<11;i++){
        for(int j = 0;j<11;j++){
            printSide(i,j);
        }
        cout << endl;
    }
}