#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{

int x, y = 0, z =1, v;

cout << "FIBONACCI NUMBERS: " << endl;



for (x=0; x < 22; x++)
{


	cout << y << ", ";
v =  y+z;
y=z;
z=v;


}
getch();
return 0;
}
