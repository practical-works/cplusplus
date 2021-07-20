#include "entite.h"
// getters definitions
int entite::code() const { return _code; }
string entite::nom() const { return _nom; }
double entite::valeur() const { return _valeur; }
// setters definitions
void entite::code(int value) { _code = value; }
void entite::nom(string value) { _nom = value; }
void entite::valeur(double value) { _valeur = value; }
// Constructors definitions
entite::entite() : _code(0), _nom("sans_nom"), _valeur(0.0)
{ }
entite::entite(int code, string nom, double valeur) : _code(code), _nom(nom), _valeur(valeur)
{ }
entite::entite(entite const& e) : _code(e._code), _nom(e._nom), _valeur(e._valeur)
{ }
// Destructor
//entite::~entite() 
//{ }

// Methods definitions
string entite::to_str()
{
	return "#" + to_string(_code) + " " + _nom + " (" + to_string(_valeur) + ")"; // #7 name (17.00)
}
double entite::valeur_special(int rang, bool produit)
{
	double x;
	if (produit) x = 1; else x = 0;
	for (int i(1); i<10; i++)
		if (produit) x *= i + _valeur; else x += i * _valeur;
	return x;
}
