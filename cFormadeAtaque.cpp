#include "cFormadeAtaque.h"

cFormadeAtaque::cFormadeAtaque(Ataques Formita)
{
	FormadeAtaque = Formita;
}

string cFormadeAtaque::GetFormadeAtaque() const
{
	switch (FormadeAtaque)
	{
	case cFormadeAtaque::GARRAS:
		return "GARRAS";
		break;
	case cFormadeAtaque::GOLPE:
		return "GOLPE";
		break;
	case cFormadeAtaque::FUEGO:
		return "FUEGO";
		break;
	case cFormadeAtaque::PESO:
		return "PESO";
		break;
	case cFormadeAtaque::DIENTES:
		return "DIENTES";
		break;
	default:
		return "NINGUNA";
		break;
	};
}

void cFormadeAtaque::SetNuevaForma(Ataques NewForma)
{
	FormadeAtaque = NewForma;
}

cFormadeAtaque::~cFormadeAtaque()
{
}
