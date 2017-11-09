#include <iostream>
#include <stdlib.h>
#include "Carte.h"
#include <string>




void cr�er(Carte cartes[]);
void afficher(Carte cartes[]);
void modifier(Carte cartes[], int chosen);


using namespace std;

int main()
{
	int choix(0); //variable qui permet de choisir la fonction qu'on appelle
	int chosen(0);
	

	Carte cartes[10]; //on cr�e un tableau de 10 cartes

	do {
		cout << "Que souhaitez vous faire? Creer, afficher, modifier ou supprimer une carte?" << endl;
		cin >> choix;
		

		if (choix == 1) {
			cr�er(cartes); //si on appuie sur 1, on cr�e une carte dans le premier espace disponible du tableau
			
		}
		else
		if (choix == 2) {
			afficher(cartes); //cela affiche le tableau

		}
		else {
			cout << "sur quelle carte voulez vous r�aliser cette op�ration? (donnez l'id)" << endl;
			cin >> chosen;

			if (choix == 3) {
				modifier(cartes, chosen); //on modifie la carte dont on a l'i
			}

			







			
		}

	} while (choix != 0); //on continue tant qu'on a pas choisi le chiffre 0



	system("pause");








	return 0;
}







void cr�er(Carte cartes[]) {
	//BUT: remplir une carte du tableau, la premi�re qui est libre
	//ENTREE: le tableau de cartes
	//SORTIE:le tableau de cartes avec une carte en +
	bool done(false);
	int i(0);
	do {
		if (cartes[i].getNom() == "") { //on v�rifie que la case sur laquelle on se trouve est vide. Si oui, on la rempli avec la fonction membre "cr�er"
			cartes[i].cr�er();
			done = true;
			


		}
		
		

		i++;












	} while (done==false); //tant que on a pas trouv� de case vide, on continue


	








}

void afficher(Carte cartes[]) {
	//BUT: afficher le tableau
	//ENTREE: le tableau de cartes
	//SORTIE: l'affichage du tableau
	int i;
	for (i=0; i < 11; i++) {
		cartes[i].affiche(); //on appelle la fonction membre afficher sur chaque carte
		
	}

	






}

void modifier(Carte cartes[],int chosen) {
	//BUT: Modifier un param�tre d'une carte que l'on choisi
	//ENTREE: le tableau de carte, l'id de la carte qu'on veut modifier
	//SORTIE: le tableau mis � jour

	int i; 
	for (i = 0; i < 10; i++) {
		if (cartes[i].getID()==chosen){
		
			cartes[i].modifier(); //on appelle la m�thode membre modifier apr�s avoir trouv� le bon ID (il faudra lui donner le nom de ce qu'on veut modifier)
		
		
		}
	}


}
