#include "Car.h";

int main()
{
	Car car("toyota", 120, 70, "metal", "red", 60, 7, "white", nullptr);
	car.print();
	cout << endl;

	car.interactDoors(true);
	car.interactDoors(true);
	car.interactDoors(false);
	car.interactDoors(true);
	cout << endl;

	car.interactTransmission(4);
	car.interactTransmission(-1);
	cout << endl;

	car.drive();
	car.interactDoors(false);
	car.drive();
	cout << endl;

	car.interactLights(true);
	car.interactLights(true);
	car.interactLights(false);
	cout << endl;

	Driver andrew("andrew", "manzuk", 14, middle);
	andrew.print();
	cout << endl;

	car.addDriver(andrew);
	cout << endl;
	car.printDriver();
	cout << endl;
	car.addDriver(andrew);
	cout << endl;
}