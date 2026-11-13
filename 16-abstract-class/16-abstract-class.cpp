#include <iostream>
using namespace std;

class Animal // abstract class
{
protected:
    string name;
    string homeadress;
    float weight;

public:
    Animal() : name("none"), homeadress("none"), weight(0) {}
    Animal(string n, string ha, float w) : name(n), homeadress(ha)
    {
        weight = (w > 0) ? w : 0;
    }

    virtual void print() const
    {
        cout << "i am " << name << endl;
        cout << "home adress - " << homeadress << endl;
        cout << "weight - " << weight << endl;
    }

    virtual void makeSound() const = 0;  // pure virtual function

    virtual void move() const
    {
        cout << "i am moving!!" << endl;
    }
};

class Dog : public Animal
{
private:
    string breed;
public:
    Dog() : breed("none"), Animal() {}
    Dog(string n, string b, string ha, float w) : breed(b), Animal(n, ha, w) {}

    void print() const override
    {
        Animal::print();
        cout << "breed - " << breed << endl;
    }

    void makeSound() const override
    {
        cout << "gav! gav!! gav!!!!!!!!" << endl;
    }

    void move() const override
    {
        cout << "i am running and jumping!!" << endl;
    }
};

class Parrot : public Animal
{
private:
    float flyHeight;
    bool canSpeak;

public:
    Parrot() : flyHeight(0), canSpeak(false), Animal() {}
    Parrot(string n, string ha, float w, float fH, bool cS) : flyHeight(fH), canSpeak(cS), Animal(n, ha, w) {}

    void print() const
    {
        Animal::print();
        cout << "fly height - " << flyHeight << endl;
        cout << "can speak - " << canSpeak << endl;
    }

    void makeSound() const override
    {
        cout << "kra-rar-mal-dav-ann!!!!!!!!!!!" << endl;
    }

    void move() const override
    {
        cout << "i am flying up to " << flyHeight << " m!" << endl;
    }
};

class Amphibian : public Animal // abstract class
{
protected:
    float swimDeep;

public:
    Amphibian() : swimDeep(0), Animal() {}
    Amphibian(string n, string ha, float w, float sD) : swimDeep(sD), Animal(n, ha, w) {}

    void print() const
    {
        Animal::print();
        cout << "swim depth - " << swimDeep << endl;
    }

    /*void makeSound() const override
    {
        cout << "bul'-bul'-bul'" << endl;
    }*/

    void move() const override
    {
        cout << "i am swimming down to " << swimDeep << " m!" << endl;
    }
};

class Frog : public Amphibian
{
public:
    Frog() : Amphibian() {}
    Frog(string n, string ha, float w, float sD) : Amphibian(n, ha, w, sD) {}

    void makeSound() const override
    {
        cout << "kva-kva-kva :)" << endl;
    }
};

void rollCall(Animal& a)
{
    a.makeSound();
    a.move();
}

int main()
{
    Dog dog("Jordan", "pomeranskiy shpic'", "Prospekt Miru, 23", 12.23);
    dog.move();
    cout << endl;
    dog.print();
    cout << endl;
    dog.makeSound();
    cout << endl;
    cout << endl;
    cout << endl;
    
    Parrot parrot("Ticki", "Soborna, 16", 0.5, 7.32, true);
    parrot.move();
    cout << endl;
    parrot.print();
    cout << endl;
    parrot.makeSound();
    cout << endl;

    Frog frog("Miley", "Stepana Banderi, 24", 0.2, 24);
    frog.move();
    cout << endl;
    frog.print();
    cout << endl;
    frog.makeSound();
    cout << endl;

    rollCall(dog);
    rollCall(parrot);
    rollCall(frog);
}