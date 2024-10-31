
#include <iostream>

using namespace std;

int main() {
	// 1.16 
	int a, b, c;
	cout << "A: ";
	cin >> a;
	cout << "B: ";
	cin >> b;
	cout << "C: ";
	cin >> c;
	if ((a > b) and (a > c))
	{
		cout << "El valor más grande es: " << a << endl;
	}
	if ((b > c) and (b > a))
	{
		cout << "El valor más grande es: " << b << endl;
	}
	if ((c > a) and (c > b))
	{
		cout << "El valor más grande es: " << c << endl;
	}

	// 1.17 


	// 1.18 
	int hh, ss, mm;
	cout << "HH: ";
	cin >> hh;
	cout << "MM: ";
	cin >> mm;
	cout << "SS: ";
	cin >> ss;
	cout << "La hora un segundo más tarde: " << hh << ":" << mm << ":" << (ss + 1) << endl;

	// 1.19
	

	// 1. 20
	  // a)

	return 0;
}
