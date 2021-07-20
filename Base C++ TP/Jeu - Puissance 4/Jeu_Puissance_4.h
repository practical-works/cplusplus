#ifndef Jeu_Puissance_4
#define Jeu_Puissance_4
#include<iostream>
#include<array>
using namespace std;

enum couleur { vide, rouge, jaune };
typedef array<array<couleur,7>,6> Grille; // 6 lignes x 7 colonnes

void initialiser(Grille& grille)
{
	for (auto& ligne : grille)
	{
		for (auto& cell : ligne)
		{
			cell = vide;
		}
	}
}
void afficher(const Grille& grille)
{
	cout << "   ";
	for(size_t i(1); i<=grille[0].size(); i++)
	{
		cout << i << "   ";
	}
	cout << endl;
	for (auto ligne : grille)
	{
		cout << " | ";
		for (auto cell : ligne)
		{
			if (cell == vide)
			{
				cout << " ";
			}
			else if (cell == rouge)
			{
				cout << "O";
			}
			else
			{
				cout << "X";
			}
			cout << " | ";
		}
		cout << endl;
	}
}
bool jouer(Grille& grille, size_t colonne, couleur couleur_joueur)
{
	int N(grille.size()-1);
	for (int i(N); i>=0; i--)
	{
		if (grille[i][colonne] == vide)
		{
			grille[i][colonne] = couleur_joueur;
			return true;		
		}
	}
	return false;
}
string symbole_joueur(couleur couleur_joueur)
{
	if (couleur_joueur == rouge)
	{
		return "O";
	}
	else
	{
		return "X";
	}
}
void jouer_tour(Grille& grille, couleur couleur_joueur)
{	
	size_t colonne;
	bool choix_valide, coup_valide;		
	do
	{
		cout << endl << "Joueur [ " << symbole_joueur(couleur_joueur) << " ] Entrez colonne: ";		
		cin >> colonne;
		choix_valide = ( colonne > 0 and colonne <= grille[0].size() );
		if (not choix_valide)
		{
			cout << "Choix invalide !" << endl;
		}
		else
		{
			colonne--;			
			coup_valide = jouer(grille,colonne,couleur_joueur);
			if (not coup_valide)
			{
				cout << "Coup invalide ! (Colonne pleine)" << endl;
			}			
		}	
	} while (not choix_valide or not coup_valide);
	system("cls");
}
void changer_joueur(couleur& couleur_joueur)
{
	if (couleur_joueur == rouge)
	{
		couleur_joueur = jaune;
	}
	else
	{
		couleur_joueur = rouge;
	}
}
unsigned int compte_pions(const Grille& grille, size_t ligne_dep, size_t colonne_dep, 
size_t ligne_suiv, size_t colonne_suiv)
{
	unsigned int compteur(0);
	size_t ligne(ligne_dep), colonne(colonne_dep);
	couleur couleur_joueur(grille[ligne_dep][colonne_dep]);
	while (ligne < grille.size() and colonne < grille[ligne].size() and 
	grille[ligne][colonne] == couleur_joueur)
	{
		compteur++;
		ligne   += ligne_suiv;
		colonne += colonne_suiv;
	}
	return compteur;
}
bool partie_gagnee(const Grille& grille, couleur couleur_joueur)
{
	for (size_t i(0); i<grille.size(); i++)
	{
		for (size_t j(0); j<grille[i].size(); j++)
		{
			if (grille[i][j] == couleur_joueur)
			{
				if ( compte_pions(grille,i,j,  -1,0) >= 4 or // Haut <=> ligne--
			  	 	 compte_pions(grille,i,j,  +1,0) >= 4 or // Bas <=> ligne++
			     	 compte_pions(grille,i,j,  0,+1) >= 4 or // Droit <=> colonne++
				     compte_pions(grille,i,j,  0,-1) >= 4 or // Gauche <=> colonne--
				     compte_pions(grille,i,j, -1,+1) >= 4 or // Haut Droit <=> ligne-- && colonne++
				     compte_pions(grille,i,j, -1,-1) >= 4 or // Haut Gauche <=> ligne-- && colonne--
				     compte_pions(grille,i,j, +1,+1) >= 4 or // Bas Droit <=> ligne++ && colonne++
				     compte_pions(grille,i,j, +1,-1) >= 4 )  // Bas Gauche <=> ligne++ && colonne--
				{
					return true;
				}
			}
			
		}
	}
	return false;
}
bool grille_pleine(const Grille& grille)
{
	for (auto cell : grille[0])
	{
		if (cell == vide)
		{
			return false;
		}
	}
	return true;
}
bool recommencer()
{
	cout << endl << "Commencer une nouvelle partie ? (y/n)" << endl;
	choix:
	cout << endl << "Entrez choix: ";
	char choix;
	cin >> choix;
	switch(choix)
	{
		case 'y': 
			system("cls");	
			return true;
		case 'n':
			exit(0);
		default : 
			cout << "Choix invalide!" << endl;
			goto choix;
	}
}
#endif
