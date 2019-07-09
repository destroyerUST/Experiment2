#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
   int hours;
   char package;	
   cout << "Enter the subscribed package: \n"; cin >> package;
   cout << "Enter the hours of internet you have consumed: \n"; cin >> hours;
   
   switch (package)
   {
   	case 'a':
   		case 'A':
   		if (hours > 10) 
   	 {
		cout << "Your bill is $ " << 995 + (hours-10)*20 << endl;
		}
		else
   	 cout << "Your bill is $ 995. \n";
   	break;
   	   	case 'b':
   		case 'B':
   		if (hours > 20) 
   	 {
		cout << "Your bill is " << 1495 + (hours-20)*20 << endl;
		}
		else
   	 cout << "Your bill is 1495. \n";
   	case 'c':
   		case 'C':
   	cout << "Your bill is 1995 even how many hours you consumed. \n";
	   break;
		default:
		cout << "INVALID PACKAGE!! \n";
   }
	
	getch ();
	return 0;
	
}
