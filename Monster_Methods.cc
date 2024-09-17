#include <iostream>

#include "Monster_Class.h"


    Monster::Monster(int HP_, int AD_, int DP_, int S_, std::string Race_) :
        HP(HP_), AD(AD_), DP(DP_), S(S_), Race(Race_) {
    }

    std::string Monster::Get_Race() {
        return Race;
    }

    int Monster::attack(int AD_, int DP_, int HP_) {
        int damage = rand() % AD_;
        int armor = 0;
        do {
            armor = rand() % DP_;
        } while (armor > damage);
        std::cout << "Damage dealt : " << damage << std::endl;
        std::cout << "Damage blocked : " << armor << std::endl;
        HP_ = HP_ - (damage - armor);
        std::cout << "Monster health left : " << HP_ << std::endl << std::endl;
        return HP_;
    }

    bool Monster::win_condition(int HP_1, int HP_2, std::string Name_1, std::string Name_2) {

        if (HP_1 <= 0) {
            std::cout << Name_2 << " won.\n";
            return false;
        }
        else if (HP_2 <= 0) {
            std::cout << Name_1 << " won.\n";
            return false;
        }
        else {
            return true;
        }
    }

    void Monster::fight(Monster o1, Monster o2) {
        int round = 0;
        bool fight_loop = true;

        std::cout << "\n\n\nTime to fight !\n\n\n";

        while (fight_loop == true) {
            if (o1.S > o2.S) {
                std::cout << o1.Race << " attacks\n";
                o2.HP = attack(o1.AD, o2.DP, o2.HP);
                round += 1;
                fight_loop = win_condition(o1.HP, o2.HP, o1.Race, o2.Race);
                if (fight_loop == false) {
                    break;
                }

                std::cout << o2.Race << " attacks\n";
                o1.HP = attack(o2.AD, o1.DP, o1.HP);
                round += 1;
                fight_loop = win_condition(o1.HP, o2.HP, o1.Race, o2.Race);
            }
            else {
                std::cout << o2.Race << " attacks\n";
                o1.HP = attack(o2.AD, o1.DP, o1.HP);
                fight_loop = win_condition(o1.HP, o2.HP, o1.Race, o2.Race);
                if (fight_loop == false) {
                    break;
                }

                std::cout << o1.Race << " attacks\n";
                o2.HP = attack(o1.AD, o2.DP, o2.HP);
                round += 1;
                fight_loop = win_condition(o1.HP, o2.HP, o1.Race, o2.Race);
            }
        }

        std::cout << "Number of rounds : " << round << std::endl;
    }

    bool Monster::Verify(std::string M1, Monster M2) {
        if (M1 == M2.Race) {
            return true;
        }
    }