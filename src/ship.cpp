#include "ship.hpp"
#include <iostream>
using namespace std;
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

bool Ship::sameCoordinate(int xl, int yl){
    return (x==xl) && (y==yl);
}
void Ship::printShipCoor(){
    cout << "(" << x << "," << y << ")" << endl;
}
int Ship::setCoor(int a , int b){
    this->x=a;
    this->y = b;
}
int Ship::getX(){return x;}
int Ship::getY(){return y;}