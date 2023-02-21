#ifndef ENEMYSHIP_HPP
#define ENEMYSHIP_HPP
#include "ship.hpp"

class EnemyShip : public Ship{
    private:
        int enemyId;
        static int enemyCount;
    public:
    EnemyShip();
};
#endif