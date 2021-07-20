#include "Jeu_Puissance_4.h"

int main()
{
	nouvelle_partie:
	Grille G;
	initialiser(G);
	afficher(G);
	couleur joueur(rouge);
	bool gagnee;
	do
	{	
		jouer_tour(G,joueur);
		afficher(G);
		gagnee = partie_gagnee(G,joueur);	
		changer_joueur(joueur);
			
	} while (not gagnee and not grille_pleine(G));
	
	cout << endl << "\tFin partie !" << endl << endl;
	if (gagnee)
	{
		if (joueur == rouge) cout << "Joueur X a gagne !" << endl;
		else cout << "Joueur O a gagne !" << endl;
	}
	else cout << "Partie nul !" << endl;
	system("pause>null");
	if (recommencer()) goto nouvelle_partie;
	return 0;			
}
