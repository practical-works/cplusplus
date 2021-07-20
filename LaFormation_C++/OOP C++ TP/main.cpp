#include "entite.h"

int main(int argc, char** argv) 
{
	entite objet(7,"Ambratolm",17), obj;
	for (int i(0); i<5; i++)
	{
		obj = entite(i,"obj_"+to_string(i),17+2*i);
		cout << obj.to_str() << endl << endl;
	}
	
	cout << objet.to_str() << endl << endl;
	cout << "Valeur speciale: " << objet.valeur_special(7,true) << endl;
	
	cin.get();
	return 0;
}
