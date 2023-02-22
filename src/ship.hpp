#ifndef SHIP_HPP
#define SHIP_HPP
class Ship{


    public:
    //default ctor, create enemy ship
        Ship();

    //custom ctor
        Ship(int health, int x, int y, int damage, int range);

    //cctor
    /*Getter*//*
    int getHealth();
    int getRange();
    int getDamage();
    ;*/
    bool isAlive();
    /*Setter*/
    int setHealth();
    int getX();
    int getY();
    int setCoor(int, int);
    void printShipCoor();


    bool sameCoordinate(int, int);
    protected:
        int health;
        int range;
        int damage;
        bool alive;
        /*coordinate*/
        int x;
        int y;

};

#endif