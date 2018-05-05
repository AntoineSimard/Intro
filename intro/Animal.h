#pragma once
#include <iostream>
#include <string>


class Animal
{
public:
	Animal();
	~Animal();
	virtual void crier()=0;
	std::string dire_nom_age();
	
protected:
	int nb_pattes_;
	std::string nom_;
	int age_;
	int multiplicateur_;
	int age_humain();
};

class Mammifere : public Animal
{
public:
	Mammifere();
	virtual ~Mammifere() = 0;

};

class Chien : public Mammifere
{
public:
	Chien(std::string nom, int age);
	~Chien();
	void rapporte_journal();
	void crier();
};

class Chat : public Mammifere
{
public:
	Chat(std::string nom, int age);
	~Chat();
	void crier();

};

class Poisson : public Animal
{
public:
	Poisson(std::string nom, int age);
	~Poisson();
	std::string dire_ocean();
	void crier();

private:
	std::string ocean_;

};