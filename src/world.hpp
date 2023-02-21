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
    void printmap();
    void doPlayerAction();
    void botDecision();
    void printSide(int, int);
private:
    /*List of enemy bot*/
    EnemyShip* enemies;
    int currentMaxEnemies;
    /*Player bot*/
    PlayerShip player;
    /*mapSize: x*x need odd*/
    int x;
    /*Matrix of map*/
    int **map;
    /*Kill Count*/
    int killCount;
};


#endif