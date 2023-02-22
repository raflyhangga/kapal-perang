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
    PlayerShip player();
    

    enemies = new EnemyShip[7];
    for(int i = 0; i<7 ; i++){
        EnemyShip temp;
        enemies[i] = temp;
    }
}

PlayerShip World::getPlayer(){
    return this->player;
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
    SetConsoleTextAttribute(h,0x7);
}

void World::printmap(){
    for(int i = 0; i<11;i++){
        for(int j = 0;j<11;j++){
            printSide(j,i);
        }
        cout << endl;
    }
}
void World::playerMove(char direction){
    switch(direction){
        case 'w':
            if(player.getY()<0){
                return;
            }else{
                player.setCoor(player.getX(),player.getY()-1);
                break;
            }
            
        case 'a':
            if(player.getX()-1<0){
                return;
            }
            break;
        case 's':
            if(player.getX()+1>10){
                return;
            }
            break;
        case 'd':
            if(player.getY()+1>10){
                return;
            }
            break;
        default:
            return;
    }
    return;
}