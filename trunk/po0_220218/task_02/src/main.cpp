#include <iostream>
#include <string>
#include "Detail.h"
#include "Node.h"
#include "Mechanism.h"
#include "Good.h"

int main()
{
	Node first(10, true, "Rotation node", true);
	Mechanism second("Tractor", 20, true, "Movable node", true);
	Good third(50, "Plank", false);
	Detail fourth;

	first.SetName("Movable node");
	second.SetPurpose("Car");
	third.SetPrice(100);
	fourth.SetMaterial(false);
	fourth.SetName("Pump");
	fourth.Add();

	Detail::ShowDetails();
}