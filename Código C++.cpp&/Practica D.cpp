
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
