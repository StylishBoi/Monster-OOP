
#include <iostream>

auto monster_choice_1() {
    std::cout << "First Monster ||| Who do you choose as your first monster ?\n";
    int menu = 0;
    bool menu_loop = true;
    while (menu_loop == true) {
        std::cout << "1 - Orc | 2 - Troll | 3 - Goblin\n";
        std::cin >> menu;
        if (menu == 1) {
            Monster Fighter_1(50, 20, 10, 5, "Orc");
            return Fighter_1;
        }
        else if (menu == 2) {
            Monster Fighter_1(40, 15, 10, 15, "Troll");
            return Fighter_1;
        }
        else if (menu == 3) {
            Monster Fighter_1(30, 10, 15, 10, "Goblin");
            return Fighter_1;
        }
        else {
            std::cout << "Invalid input\n";
        }
    }
}
auto monster_choice_2(std::string m1) {
    std::cout << "\nSecond Monster ||| Who do you choose as your second monster ? \n";
    int menu = 0;
    bool menu_loop = true;
    bool copy=false;
    while (menu_loop == true) {
        std::cout << "1 - Orc | 2 - Troll | 3 - Goblin\n";
        std::cin >> menu;
        if (menu == 1) {
            Monster Fighter_2(50, 20, 10, 5, "Orc");
            copy = Fighter_2.Verify(m1, Fighter_2);
            if (copy == true) {
                std::cout << "Monsters of the same race can't fight each other.\n";
                continue;
            }
            return Fighter_2;
        }
        else if (menu == 2) {
            Monster Fighter_2(40, 15, 10, 15, "Troll");
            copy = Fighter_2.Verify(m1, Fighter_2);
            if (copy == true) {
                std::cout << "Monsters of the same race can't fight each other.\n";
                continue;
            }
            return Fighter_2;
        }
        else if (menu == 3) {
            Monster Fighter_2(30, 10, 15, 10, "Goblin");
            copy = Fighter_2.Verify(m1, Fighter_2);
            if (copy == true) {
                std::cout << "Monsters of the same race can't fight each other.\n";
                continue;
            }
            return Fighter_2;
        }
        else {
            std::cout << "Invalid input\n";
        }
    }
}