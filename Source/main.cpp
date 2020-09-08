//my first commit test 

#include <iostream>
#include <sstream>
#include <string>

struct Mob
{
    std::string name;
    int health;
    int damage;
};


int main(int argc, char** argv){
    Mob *Player1 = new Mob;
    Mob *Player2 = new Mob;
    Player1->name = argv[1];
    Player2->name = argv[4];
    std::stringstream healthValue(argv[2]);
    std::stringstream damageValue(argv[3]);
    healthValue >> Player1->health;
    damageValue >> Player1->damage;
    std::stringstream healthValue1(argv[5]);
    std::stringstream damageValue1(argv[6]);
    healthValue1 >> Player2->health;
    damageValue1>> Player2->damage;
    std::cout << Player1->name << " Hp:" << Player1->health << " Damage: " << Player1->damage << std::endl;
    std::cout << Player2->name << " Hp:" << Player2->health << " Damage: " << Player2->damage << std::endl;

    return 0;
} 