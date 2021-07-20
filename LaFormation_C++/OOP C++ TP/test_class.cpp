#include<iostream>
#include<string>
using namespace std;

class joueur
{
	public: string nom; int xp;
	joueur(string nom="unnamed", int xp=0) : nom(nom), xp(xp) { }
	
	void infos() const
	{
		cout << "Adresse objet / Attributs : " << this << " / (" << &nom << "," << &xp << ")"  << endl;
		cout << "Valeur objet : " << "(" << nom << "," << xp << ")"  << endl;
		cout << "*******************************" << endl;
	}
	joueur operator+(joueur const& j)
	{
		return joueur(nom+"_"+j.nom,xp+j.xp);
	}
};



int main()
{
	start:
	
	joueur j("Angel",64); 
	joueur* k(new joueur("Devil",32));
	joueur l(j+(*k));
	
	j.infos();
	k->infos();
	l.infos();
		
	system("pause>null");
	system("cls");
	goto start;
}

