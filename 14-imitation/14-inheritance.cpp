#include <iostream>
using namespace std;

class Enemy
{
protected:
    string name;
    int health;
    float strength;
    static const int maxHealth = 100;
public:
    Enemy() : name("npc"), health(maxHealth), strength(10) {}
    Enemy(string n, float s) : name(n), health(maxHealth), strength(s) {}
    
    bool isAlive()
    {
        return health > 0;
    }

    void print() const
    {
        cout << "name - " << name << endl;
        cout << "health - " << health << endl;
        cout << "strength - " << strength << endl;
    }

    void healthDecrease(int value)
    {
        if (health - value <= 0)
            health = 0;
        else
            health -= value;
    }
};

class dragon : public Enemy
{
private:
    float armor;
public:
    dragon() : armor(0), Enemy() {}
    dragon(string n, float s, float a) : armor(a), Enemy(n, s) {}

    void print()
    {
        cout << "dragon" << endl;
        Enemy :: print();
        cout << "armor - " << armor << endl;
    }

    void fight(int damage)
    {
        cout << "-" << damage-armor << " hp" << endl;
        healthDecrease(damage-armor);
        cout << "health - " << health << endl;
    }

    float attack() const
    {
        cout << "attacking with strength " << strength << endl;
        return strength;
    }
};

class wizard : public Enemy
{
private:
    float turboAttack;
public:
    wizard() : turboAttack(0), Enemy() {}
    wizard(string n, float s, float t) : turboAttack(t), Enemy(n, s) {}
    
    void print() const
    {
        cout << "wizard" << endl;
        Enemy::print();
        cout << "turbo attack power " << turboAttack << endl;
    }

    float turboAttack()
    {
        cout << "wizard attacks with turbo power! -" << turboAttack << " hp" << endl;
        return turboAttack;
    }

};

int main()
{
    dragon dragon1("oncearion", 4.34, 5);
    dragon boss("twicearion", 8.64, 2);

    int i = 1;

    do
    {
        cout << "round " << i << endl;
        dragon1.print();
        cout << endl;
        boss.print();
        cout << endl;

        dragon1.fight(boss.attack());
        boss.fight(dragon1.attack());

        dragon1.print();
        cout << endl;
        boss.print();
        cout << endl;
        i++;
    } while (boss.isAlive() && dragon1.isAlive());

    wizard w("weezzard", 10, 43);
}