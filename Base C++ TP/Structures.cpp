#include<iostream>
using namespace std;

struct complexe
{
	double re,im; 	
};

int main()
{
	start:
	typedef complexe cx;
	typedef int entier;
	cx z = { 0 , 0 };
	entier n(17);
	cout << n << endl;
	cout << "Partie reelle: "; cin >> z.re;
	cout << "Partie imaginaire: "; cin >> z.im;
	cout << "Nombre complexe: " << z.re << " + i" << z.im << endl;
	z = {17,3};
	cout << "Nombre complexe: " << z.re << " + i" << z.im << endl;
	z.im = 17;
	cout << "Nombre complexe: " << z.re << " + i" << z.im << endl;
	
	system("pause>null");
	system("cls");
	goto start;
}

