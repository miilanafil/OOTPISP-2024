#include <iostream>
#include <string>
#include "Figures.h"
#include "Square.h"
#include "Ellipse.h"
#include "Trapeze.h"
#include "FiguresCollection.h"

using namespace std;

int main()
{
    FiguresCollection arr;
    Ellipse ellipse_1("Ellipse", 3, 24);
    Ellipse ellipse_2("Ellipsoid", 2, 12);

    if (ellipse_1 == ellipse_2)
    {
        cout << "Ellipse 1 and 2 is eq"<<endl<<endl;
    }
    else
    {
        cout << "Ellipse 1 and 2 isnt eq"<<endl<<endl;
    }


    arr.add(&ellipse_1);
    arr.add(&ellipse_2);


    Square square_1("Square", 20, 4);
    Square square_2("Parallelogram", 20, 4);

    if (square_1 == square_2)
    {
        cout << "Square 1 and 2 is eq" << endl<<endl;
    }
    else
    {
        cout << "Square 1 and 2 isnt eq" << endl<<endl;
    }


    arr.add(&square_1);
    arr.add(&square_2);



    Trapeze trapeze_1("Trapeze", 60, 3, 1500);
    Trapeze trapeze_2("Arbitrary", 60, 3, 1400);

    if (trapeze_1 == trapeze_2)
    {
        cout << "Trapeze 1 and 2 is eq" << endl << endl;
    }
    else
    {
        cout << "Trapeze 1 and 2 isnt eq" << endl << endl;
    }


    arr.add(&trapeze_1);
    arr.add(&trapeze_2);

    arr.showAll();
    cout <<endl<< "Arr size: " << arr.size();

    arr[3]->Show();
    
}
