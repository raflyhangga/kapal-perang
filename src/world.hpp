#ifndef WORLD_HPP
#define WORLD_HPP
#include <iostream>
#include "playerShip.hpp"
#include "Ship.hpp"
#include "enemyShip.hpp"
using namespace std;
class World{
public:
/*ctor*/
    World();
    PlayerShip getPlayer();
    void printmap();
    void doPlayerAction();
    void botDecision();
    void printSide(int, int);
    void playerMove(char);
private:
    /*List of enemy bot*/
    EnemyShip* enemies;
    int currentMaxEnemies;
    /*Player bot*/
    PlayerShip player;
    /*mapSize: n*n need odd*/
    int n;
    /*Matrix of map*/
    int **map;
    /*Kill Count*/
    int killCount;
};


#endif