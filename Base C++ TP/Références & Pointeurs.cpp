#include<iostream>
using namespace std;

int main()
{
	start:
	
	int variable;
	int& ref(variable); // "ref" autre nom de "variable"
	cout << "<ref> est reference de <variable> !" << endl << endl;
	ref = 17;
	cout << "valeur de <ref> = " << ref << endl;
	cout << "adresse de <ref> = " << &ref << endl << endl; 
	cout << "valeur de <variable> = " << variable << endl;
	cout << "adresse de <variable> = " << &variable << endl << endl;
	
	int* pointeur(nullptr);
	pointeur = &variable;
	cout << "<pointeur> pointe sur <variable> !" << endl << endl;
	cout << "valeur de <pointeur> (adresse de <variable>)= " << pointeur << endl;
	cout << "valeur de <variable> pointee par <pointeur> = " << *pointeur << endl << endl;
	pointeur = &ref;
	cout << "<pointeur> pointe sur <ref> !" << endl << endl;
	cout << "valeur de <pointeur> (adresse de <ref>)= " << pointeur << endl;
	cout << "valeur de <ref> pointee par <pointeur> = " << *pointeur << endl;
	
	system("pause>null");
	system("cls");
	goto start;
}

