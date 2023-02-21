#include "ship.hpp"

Ship::Ship(){
    this->x = 0;
    this->y = 0;
    this->health = 150;
    this->range = 2;
    this->damage = 25;
    this->alive = true;
}
Ship::Ship(int health, int x, int y, int damage, int range){
    this->health = health;
    this->x = x;
    this->y = y;
    this->damage = damage;
    this->range = range;
    this-> alive = true;
}
bool Ship::isAlive(){
    return alive;
}
bool Ship::move(char direction){
    switch(direction){
        case 'w':
            if(y-1<0){
                return false;
            }
            y-=1;
            break;
        case 'a':
            if(x-1<0){
                return false;
            }
            x-=1;
            break;
        case 's':
            if(x+1>10){
                return false;
            }
            x+=1;
            break;
        case 'd':
            if(y+1>10){
                return false;
            }
            y+=1;
            break;
        default:
            return false;
    }
    return true;
}
bool Ship::sameCoordinate(int xl, int yl){
    return (x==xl) && (y==yl);
}
