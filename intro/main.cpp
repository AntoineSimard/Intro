#include <iostream>
#include "Animal.h"
#include <vector> 
using namespace std;


int main()
{

	std::vector<Animal*> Animaux;
	Animaux.push_back(new Chien("pitou1", 4));
	Animaux.push_back(new Chat("Tas de marde", 12));
	Animaux.push_back(new Poisson("Nemo", 2));

	 /* Boucle forn a la matlab de merde
	int M = Animaux.size();
	for (int i = 0; i < M; i++)
	{
		Animaux[i]->crier();
		cout << Animaux[i]->dire_nom_age() << endl << endl;
	}
	*/

	for (auto it = Animaux.begin(); it != Animaux.end(); it++) {
		(*it)->crier();
		cout << (*it)->dire_nom_age() << endl << endl;
	}

	for (auto& x : Animaux) {
		x->crier();
		cout << x->dire_nom_age() << endl << endl;
	}
	


	cout << "Hello world" << endl;
	system("pause");


}
