#include <iostream>
#include <Windows.h>
using namespace std;

class Car
{
private:
    string model;
    int year;

protected:
    int speed;
    float volume;

public:
    Car() : model("none"), year(0), speed(0), volume(0) {}
    Car(string m, int y, float v) : model(m), year(y), speed(0), volume(v) {}

    void setSpeed(int s)
    {
        if (s > 0 && s <= 500)
            speed = s;
        else
            speed = 0;
    }

    void print() const
    {
        cout << model << endl;
        cout << "year - " << year << endl;
        cout << "speed - " << speed << endl;
        cout << "volume - " << volume << endl;
    }

    virtual void drive() const
    {
        cout << "i am car, and i'm driving with speed " << speed << "km/h" << endl;
    }
    
};

class policeCar : public Car
{
private:
    int soundVolume;

public:
    policeCar() : soundVolume(0), Car() {}
    policeCar(string m, int y, float v, int s) : soundVolume(s), Car(m, y, v) {}

    void print()
    {
        Car::print();
        cout << "siren volume - " << soundVolume << "db" << endl;
    }

    void drive() const override
    {
        cout << "i am police car, and i'm driving with speed " << speed << "km/h" << endl;
    }

};


class sportCar : public Car
{
private:
    int turboSpeed;

public:
    sportCar() : turboSpeed(0), Car() {}
    sportCar(string m, int y, float v, int ts) : turboSpeed(ts), Car(m, y, v) {}

    void print()
    {
        Car::print();
        cout << "turbo speed - " << turboSpeed << "km/h" << endl;
    }
     
    void drive() const override
    {
        cout << "i am police car, and i'm driving with speed " << speed << "km/h" << endl;
    }

    void nitro()
    {
        speed += turboSpeed;
        cout << "turbo speed - " << speed << "km/h" << endl;
    }

};

void testDrive(Car& car)
{
    car.setSpeed(70);
    car.drive();
}



int main()
{
    Car car("67676767", 2017, 45.3);
    policeCar pc("bmw 67", 2017, 45.3, 4);
    pc.print();
   
    sportCar sportik("sportik", 2021, 2.7, 100);
    testDrive(car);
    testDrive(sportik);

    Car* cars[3]
    {
        new Car("BMW", 2021, 3.65),
        new policeCar("Formula 5435435", 2000, 324.3, 43),
        new sportCar("Mercedes", 1999, 3.43, 54)
    };

    for (int i = 0; i < 3; i++)
    {
        cars[i]->drive();
        cars[i]->print();
        delete cars[i];
    }
}

