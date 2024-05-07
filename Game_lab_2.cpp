#include <string>
#include <iostream>
#include "Player.h"
#include "Enemy.h"
#include "Weapons.h"
#include "Quest.h"
#include "Entity.h"

using namespace std;

int main()
{
    // Реализация взаимодействия классов

    quest FirstQuest = quest(1, "Begining", "You need to kill 2 big demons");
    NPC Civilian = NPC("Friend", 32, "Friend, pls, help me!", FirstQuest);

    warrior Knight = warrior(213223, "Knight", 100);

    weapon legend_bow = weapon("bow", "Legengary bow", 30, 20);
    weapon My_sword = weapon("sword", "Legengary sword", 45, 10);

    Knight.Talk_NPC(Civilian);

    Knight.Swap_weapon(My_sword);
    Knight.Warrior_furios();
    Knight.Player_get_info();

    demon Goliath;
    Goliath.Enemy_get_info();

    Knight.Player_attack(Goliath);

    Goliath.Enemy_get_info();

    return 0;
}