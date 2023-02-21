#include "enemyShip.hpp"

int EnemyShip::enemyCount = 0;

EnemyShip::EnemyShip() : Ship(){
    enemyId = ++enemyCount;
}

