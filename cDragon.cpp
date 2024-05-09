#include "cDragon.h"

cDragon::cDragon(string Nombre, string Caracteristica, string Tamanio, string Color, bool Estado)
{
	Nombre_dragon = Nombre;
	Caract_dragon = Caracteristica;
	Taman_dragon = Tamanio;
	Color_dragon = Color;
	Estado_dragon = Estado;
	Estrategias = nullptr;
}

void cDragon::AltaNombre_dragon(string Habilidad)
{
	Nombre_dragon = Habilidad;
	return;
}

bool cDragon::Domado_dragon()
{
	return this->Estado_dragon;
}

void cDragon::CargarEstrategias(cEntrenamiento* nuevaEstrategia)
{
	if (Estado_dragon == true ) {
		Estrategias = nuevaEstrategia;
	}
	else
	{
		cout << "Primero debe dormarlo" << endl;
		return;
	}
}

FormasdeATAQUE cDragon::leer_estrategiaATAQUE()
{
	return Estrategias->leerFormaAtaque();
}

FormasdeDEFENSA cDragon::leer_estrategiaDEFENSA()
{
	return Estrategias->leerFormaDefensa();
}


string cDragon::LeerNombreDragon()
{
	return Nombre_dragon;
}

cDragon::~cDragon()
{
}


