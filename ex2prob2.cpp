#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	
	int gallon, balanced;
	cout << "Enter previous balance. \n"; cin >> balanced;
	cout << "Enter the gallon used \n"; cin >> gallon;
	
	
	if (balanced > 0)
	{
		cout << "Your water bill is " << 2.5*gallon + 35 +20;
	}
	else
	{
	cout << "Your water bill is " << 2.5*gallon + 35;	
	}
	getch ();
	return 0;
}
