#include<iostream>
#include<typeinfo>
using namespace std;

int main()
{
	start:
	
	int variable(17); // Allocation statique
	cout << "Nom allocation:   " << "\"variable\"" << endl
		 << "Type:             " << typeid(variable).name() << endl
		 << "Adresse:          " << &variable << endl
		 << "Taille:           " << sizeof(variable) << " bits" << endl
		 << "Valeur:           " << variable << endl << endl;
	
	int* pointeur(new int(17)); // Allocation dynamique
	cout << "Nom allocation:   " << "\"\"" << endl
		 << "Type:             " << typeid(*pointeur).name() << endl
		 << "Adresse:          " << pointeur << endl
		 << "Taille:           " << sizeof(*pointeur) << " bits" << endl
		 << "Valeur:           " << *pointeur << endl << endl;
	delete pointeur;
	pointeur = nullptr;
	
	double* p(new double(17.7));
	cout << "Nom pointeur:      " << "\"p\"" << endl
		 << "Type pointeur:     " << typeid(p).name() << endl
		 << "Adresse pointeur:  " << &p << endl
		 << "Taille pointeur:   " << sizeof(p) << " bits" << endl
		 << "Valeur pointeur:   " << p << endl;
	cout << "Nom allocation:   " << "\"\"" << endl
		 << "Type:             " << typeid(*p).name() << endl
		 << "Adresse:          " << p << endl
		 << "Taille:           " << sizeof(*p) << " bits" << endl
		 << "Valeur:           " << *p << endl << endl;
	delete p;
	p = nullptr;
	
	system("pause>null");
	system("cls");
	goto start;
}
