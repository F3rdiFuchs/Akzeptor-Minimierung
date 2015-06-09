#pragma once
#include "StateBehaviour.h"

class Acceptor
{
public:
	Acceptor();
	Acceptor(unsigned int n);
	~Acceptor();
private:
	// Anzahl der Zust�nde
	unsigned int nrOfStates;
	// Dyn. Array aus allen Abbildungsauspr�gungen f�r a und b samt dazugeh�rigen Zustand
	vector<StateBehaviour> table;
public:
	void setNrOfStates(unsigned int nrOfStates);
	unsigned int getNrOfStates();
	void setRow(StateBehaviour* pRow);
	StateBehaviour* getRow(int i);
	void define();
	void printStateBehaviourTable();
};

