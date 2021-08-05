/*ex06_55.cpp*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

const double Pi = 3.14159;

double circleArea(int r) {return Pi * r *r;};

int main()
{
   int radius = 1;
   while(radius > 0)
   {
      cout << "To calculate the area of a circle, enter the radius of that circle "
	   << "(Enter a negative number to exit):\n";
      cin >> radius;
      cout << "The area of a circle with a radius of " 
	   << radius << " is: " << circleArea(radius) << endl << endl;
   }
   return 0;
}
