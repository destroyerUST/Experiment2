#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
int main ()
{
	int x,y;
	double z = 2.5;
	
	cout << " enter for the value of x: \n"; cin >> x;
	cout << " enter for the value of y: \n"; cin >> y;
	
	switch (x)
	{
		
		case 1:
			
			if ( 1 < y && y < 5 )
			{
				cout << x*y*z;
			}
			if ( y>=5 )
			{
				cout << x + y/z;
			}
	
	break;
	 case 2:
	 	if ( y <= 5)
	{
		cout << (x-y)/z;
	}
		if ( y > 5)
		{
			cout << x-sqrt(y+z);
		}
		break;
	default:
		{
		cout << x+y+z;
		}
		break;
	}
	getch ();
	return 0;
}
