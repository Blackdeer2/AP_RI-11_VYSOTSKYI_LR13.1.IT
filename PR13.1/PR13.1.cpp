#include <iostream>
#include <iomanip>
#include <math.h>

#include "dod.h" 
#include "suma.h"
#include "var.h" 

using namespace std;

using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

int main()
{
	cout << "x_p = "; cin >> x_p;    
	cout << "x_k = "; cin >> x_k;   
	cout << "dx  = "; cin >> dx;   
	cout << "e   = "; cin >> e;   
	cout << endl;

	cout << fixed;
	cout << "-----------------------------------------------------" << endl;
	cout << "|" << setw(5) << "x" << "     |" << setw(10) << "log((x+1)/(x-1))" << "  |"
		<< setw(7) << "S" << "      |" << setw(5) << "n" << "   |" << endl;
	cout << "-----------------------------------------------------" << endl;

	x = x_p;
	while (x <= x_k) {

		suma();	
		cout << "|" << setw(7) << setprecision(2) << x << "   |"
			<< setw(10) << setprecision(5) << log((x + 1) / (x - 1)) << "        |"
			<< setw(10) << setprecision(5) << 2 * s << "   |"
			<< setw(5) << n << "   |" << endl;
		x += dx;
	}
	return 0;
}