#include "world.hpp"
#include <iostream>
using namespace std;

int main(){
    World world;
    string input =" ";
    while(input != "Exit"){
        world.printmap();
        cin >> input;
        if(input == "w"){
                world.playerMove('w');
        }else{
            cout << "Movement invalid" << endl;
        }
        
    }
    
    return 0;
}