#define Monster_Class

class Monster {
private:
    int HP;
    int AD;
    int DP;
    int S;
    std::string Race;

public:

    Monster(int HP_, int AD_, int DP_, int S_, std::string Race_);
    void Comparaison(float Stat_1, float Stat_2);
    std::string Get_Race();
    int attack(int AD_, int DP_, int HP_);
    bool win_condition(int HP_1, int HP_2, std::string Name_1, std::string Name_2);
    void fight(Monster o1, Monster o2);
    bool Verify(std::string M1, Monster M2);
};
