#include <iostream>

void menu() {
    std::cout << "Welcome to Monster Battle !\n";
    int menu = 0;
    bool menu_loop = true;
    while (menu_loop == true) {
        std::cout << "Main Menu ||| 1 - Play | 2 - Rules\n";
        std::cin >> menu;
        switch (menu) {
        case 1:
            std::cout << "Time for Battle !\n\n";
            menu_loop = false;
            break;
        case 2:
            std::cout << "To play, you need to select two monsters who aren't the same race." << std::endl << "Then, watch them battle it out until one of them runs out of health.";
            std::cout << "\nMonsters will first throw out a basic amount of damage, then the adversary will block a certain part of it, the rest will of the damage will be damaging the HPs.";
            break;
        default:
            std::cout << "Invalid input\n\n";
        }
    }
}