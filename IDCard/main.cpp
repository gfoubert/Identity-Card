#include <iostream>
#include <stdlib.h>
#include "Carte.h"
#include <string>



void créer(Carte cartes[]);
void afficher(Carte cartes[]);
void modifier(Carte cartes[], int chosen);


using namespace std;

int main()
{
	int choix(0); //variable qui permet de choisir la fonction qu'on appelle
	int chosen(0);
	

	Carte cartes[10]; //Création tabelau 10 cartes

	do {
		cout << "modifier ou supprimer" << endl;
		cin >> choix;
		

		if (choix == 1) {
			créer(cartes); 
			
		}
		else
		if (choix == 2) {
			afficher(cartes); //Affichage tableau

		}
		else {
			cout << "On fait l'action surla carte dont on donne l'ID" << endl;
			cin >> chosen;

			if (choix == 3) {
				modifier(cartes, chosen); //une fois qu'on a l'id on modifie la carte
			}

				
		}

	} while (choix != 0); // si 0 est pas choisit on continue


	system("pause");


	return 0;
}







void créer(Carte cartes[]) {
	//BUT: remplir une carte du tableau
	//ENTREE: le tableau de cartes
	//SORTIE:le tableau + une
	bool done(false);
	int i(0);
	do {
		if (cartes[i].getNom() == "") { // si case vide on remplit avec la fonction membre
			cartes[i].créer();
			done = true;
			


		}
		
	
		i++;


	} while (done==false); //continue tant que c'est vide



}

void afficher(Carte cartes[]) {
	//BUT: Affichage tableau
	//ENTREE: Le tableau de cartes
	//SORTIE: L'affichage du tableau
	int i;
	for (i=0; i = 10; i++) {
		cartes[i].affiche(); //pour chque carte on apelle la fonction membre
		
	}

	
}

void modifier(Carte cartes[],int chosen) {
	//BUT: On choisit une carte et on modifit un paramètre
	//ENTREE: ID Card qu'on veut modifier et le tableau
	//SORTIE: le tableau mis à jour

	int i; 
	for (i = 0; i < 10; i++) {
		if (cartes[i].getID()==chosen){
		
			cartes[i].modifier(); 
		
		
		}
	}

}
