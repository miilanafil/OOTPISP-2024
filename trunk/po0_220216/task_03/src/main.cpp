#include <iostream>
#include <string>
#include "Transport.h"
#include "Car.h"
#include "Bike.h"
#include "Truck.h"
#include "TransportCollection.h"

using namespace std;

int main()
{
	TransportCollection arr;
	Bike bike_1("Track", 3, 24);
	Bike bike_2("Aist", 2, 12);

	if (bike_1 == bike_2)
	{
		cout << "Bike 1 and 2 is eq"<<endl<<endl;
	}
	else
	{
		cout << "Bike 1 and 2 isnt eq"<<endl<<endl;
	}


	arr.add(&bike_1);
	arr.add(&bike_2);


	Car car_1("Audi", 20, 4);
	Car car_2("Audi", 20, 4);

	if (car_1 == car_2)
	{
		cout << "Car 1 and 2 is eq" << endl<<endl;
	}
	else
	{
		cout << "Car 1 and 2 isnt eq" << endl<<endl;
	}


	arr.add(&car_1);
	arr.add(&car_2);



	Truck truck_1("MAZ", 60, 3, 1500);
	Truck truck_2("MAZ", 60, 3, 1400);

	if (truck_1 == truck_2)
	{
		cout << "Truck 1 and 2 is eq" << endl << endl;
	}
	else
	{
		cout << "Truck 1 and 2 isnt eq" << endl << endl;
	}


	arr.add(&truck_1);
	arr.add(&truck_2);

	arr.showAll();
	cout <<endl<< "Arr size: " << arr.size();

	arr[3]->Show();
	
}