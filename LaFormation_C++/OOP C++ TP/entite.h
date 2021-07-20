#ifndef entite_h
#define entite_h

#include<iostream>
#include<string>
using namespace std;

class entite
{
	private :
	// Attributs
	int _code;
	string _nom;
	double _valeur;
	
	public :
	// geters prototypes
	int code() const;
	string nom() const;
	double valeur() const;
	// Setters prototypes
	void code(int);
	void nom(string);
	void valeur(double);
	// Constructors prototypes
	entite();
	entite(int code, string nom, double valeur);
	entite(entite const& e);
	// Destructor
	//~entite();
	
	// Methods prototypes
	string to_str();
	double valeur_special(int,bool);
};
#endif
