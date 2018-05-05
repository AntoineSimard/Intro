#include "Animal.h"
#include <iostream>
using namespace std;

// Partie sur lANimal qui est en moi, tuer lhumanite
// Constructeur inutiles que J-G insite d<avoir pac il est cave
Animal::Animal()
{}
Animal::~Animal()
{}

std::string Animal::dire_nom_age()
{
	return "Mon nom est " + nom_ + " et mon age est " + to_string(age_humain());
}

int Animal::age_humain()
{
	return multiplicateur_ * age_;
}


// Partie sur le Mammifere
Mammifere::Mammifere() : Animal()
{
	nb_pattes_ = 4;
}

Mammifere::~Mammifere()
{
}


// Partie sur le chien
Chien::Chien(std::string nom, int age) : Mammifere()
{
	nom_ = nom;
	age_ = age;
	multiplicateur_ = 7;
}

Chien::~Chien()
{
}

void Chien::rapporte_journal()
{
	cout << "Va chercher ton journal toua meme gros criss de porc, esti de lazzy ass mothafucker" << endl;
}

void Chien::crier()
{
	cout << "Wouf Wouf " << endl;
}

// Partie sur le chat 

Chat::Chat(std::string nom, int age) :Mammifere()
{
	nom_ = nom;
	age_ = age;
	multiplicateur_ = 11;

}

Chat::~Chat()
{
}

void Chat::crier()
{
	cout << "MIAOU MIAOU jgestfif" << endl;
}


// Partie sur le poisson

Poisson::Poisson(std::string nom, int age) : Animal()
{
	nom_ = nom;
	age_ = age;
	multiplicateur_ = 17;
}

Poisson::~Poisson()
{
}

std::string Poisson::dire_ocean()
{
	return "Je vis et chie dans locean" + ocean_;
}

void Poisson::crier()
{
	cout << "Blup Blup" << endl;
}