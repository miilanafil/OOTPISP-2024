#include <iostream>
#include <string>
#include "Circle.h"
#include "Container.h"
#include "Geometry.h"
#include "Rectangle.h"
#include "Triangle.h"


int main()
{
	Container arr;

	Triangle tr1(3, 4, 5);
	Triangle tr2(6, 8, 10);

	if (tr1 == tr2)
	{
		std::cout << "Triangles are same" << std::endl;
	}
	else
	{
		std::cout << "Triangles are different" << std::endl;
	}

	arr.Add(&tr1);
	arr.Add(&tr2);

	Circle cr1(5);
	Circle cr2(4);


	if (cr1 == cr2)
	{
		std::cout << "Circles are same" << std::endl;
	}
	else
	{
		std::cout << "Circles are different" << std::endl;
	}
	cr2 = cr1;
	arr.Add(&cr1);
	arr.Add(&cr2);

	Rectangle rt1(10, 5);
	Rectangle rt2(5, 10);

	if (rt1 == rt2)
	{
		std::cout << "Rectangles are same" << std::endl;
	}
	else
	{
		std::cout << "Rectangles are different" << std::endl;
	}

	arr.Add(&rt1);
	arr.Add(&rt2);

	std::cout << "Amount of geometry: " << arr.size() << std::endl;
	arr.ShowAll();

	arr[7]->GetArea();
}
