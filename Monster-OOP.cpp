#include <iostream>
#include "Monster_Class.h"
#include "Monster_Choice.hpp"
#include "Menu.hpp"

int main()
{

    int x = time(0);
    srand(x);

    menu();
    Monster o1 = monster_choice_1();
    std::string check = o1.Get_Race();
    Monster o2 = monster_choice_2(check);
    o1.fight(o1, o2);
    std::cout << "Game is finished.";
}