#include <iostream>
#include <string>
#include "shape.h"
#include "triangle.h"

using namespace std;

	int man(){

		Triangle tria;
		float a, b;
			
		cout << "input base :\n";
		cin >> a;
		cout << "Input height: \n";
		cin >> b;
		tria.setArea(a,b);
		
		cout << "Area is:" << tria.getArea() << endl;
		cout << tria.getName() << endl;
			
	return 0;
		
}