#pragma once
#include <string>
using namespace std;
class cFormadeAtaque
{
public:

	enum Ataques {GARRAS=1,GOLPE,FUEGO,PESO,DIENTES};//inicia en 1 porque 0 es ninguna
	Ataques FormadeAtaque;

	cFormadeAtaque(Ataques Formita);//constructor
	string GetFormadeAtaque() const;
	void SetNuevaForma(Ataques NewForma);
	~cFormadeAtaque();
};

