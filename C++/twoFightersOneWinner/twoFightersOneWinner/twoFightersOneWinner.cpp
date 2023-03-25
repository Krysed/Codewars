/*
Create a function that returns the name of the winner in a fight between two fighters.

Each fighter takes turns attacking the other and whoever kills the other first is victorious. Death is defined as having health <= 0.

Each fighter will be a Fighter object/instance. See the Fighter class below in your chosen language.

Both health and damagePerAttack (damage_per_attack for python) will be integers larger than 0. You can mutate the Fighter objects.

Your function also receives a third argument, a string, with the name of the fighter that attacks first.

Example:
  declare_winner(Fighter("Lew", 10, 2), Fighter("Harry", 5, 4), "Lew") => "Lew"

  Lew attacks Harry; Harry now has 3 health.
  Harry attacks Lew; Lew now has 6 health.
  Lew attacks Harry; Harry now has 1 health.
  Harry attacks Lew; Lew now has 2 health.
  Lew attacks Harry: Harry now has -1 health and is dead. Lew wins.
*/
#include <iostream>
#include <memory>

class Fighter
{
private:
    std::string name;

    int health;

    int damagePerAttack;

public:
    Fighter(std::string name, int health, int damagePerAttack)
    {
        this->name = name;
        this->health = health;
        this->damagePerAttack = damagePerAttack;
    }

    ~Fighter() { };

    std::string getName()
    {
        return name;
    }

    int getHealth()
    {
        return health;
    }

    int getDamagePerAttack()
    {
        return damagePerAttack;
    }

    void setHealth(int value)
    {
        health = value;
    }
};

std::string declareWinner(Fighter* fighter1, Fighter* fighter2, std::string firstAttacker)
{
    Fighter* currentAttacker;
    Fighter* otherFighter;

    if (fighter1->getName() == firstAttacker) {
        currentAttacker = fighter1;
        otherFighter = fighter2;
    }
    else {
        currentAttacker = fighter2;
        otherFighter = fighter1;
    }

    while (fighter1->getHealth() > 0 && fighter2->getHealth() > 0) {
        otherFighter->setHealth(otherFighter->getHealth() - currentAttacker->getDamagePerAttack());
        std::swap(currentAttacker, otherFighter);
    }

    if (fighter1->getHealth() > 0) {
        return fighter1->getName();
    }
    else {
        return fighter2->getName();
    }
}

bool equal(std::string a, std::string b) {
    return a == b;
}

int main()
{
    Fighter *fighter1 = new Fighter("Lew", 10, 2);
    Fighter *fighter2 = new Fighter("Harry", 5, 4);
    Fighter *fighter3 = new Fighter("Harald", 20, 5);

    std::cout << std::boolalpha;

    std::cout << equal(declareWinner(fighter1, fighter2, "Lew"),"Lew") << "\n";
    std::cout << equal(declareWinner(fighter3, fighter2, "Harald"), "Harald") << "\n";


    delete fighter1;
    delete fighter2;
    delete fighter3;
    fighter1 = nullptr;
    fighter2 = nullptr;
    fighter3 = nullptr;
    return 0;
}
