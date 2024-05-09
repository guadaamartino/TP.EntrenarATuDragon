#pragma once
#include <string>
using namespace std;
class cVikingo
{
private:
	string Nombre_vikingo, Apellido_vikingo, Posicion_vikingo;
public:
	cVikingo(string Nombre, string Apellido, string Posicion);
	//string LeerNombre();
	//string LeerApellido();
	//string LeerPosicion();
	void SetPosicion(string Trabajo);
	~cVikingo();
};

