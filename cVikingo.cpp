#include "cVikingo.h"

cVikingo::cVikingo(string Nombre, string Apellido, string Posicion)
{
	Nombre_vikingo = Nombre;
	Apellido_vikingo = Apellido;
	Posicion_vikingo = Posicion;
}

void cVikingo::SetPosicion(string Trabajo)
{
	Posicion_vikingo = Trabajo;
	return;
}

cVikingo::~cVikingo()
{
}
