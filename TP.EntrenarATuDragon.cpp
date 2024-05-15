// TP.EntrenarATuDragon.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "cDragon.h"

int main()
{
    cDragon dragoncito1("Veloz", "Dientudo", "Grande", "Negro",0);
    cEntrenamiento nuevoentrenamiento;//inicialmente su forma de ataque y defensa es:ninguna
    nuevoentrenamiento.setearFormaAtaque(GARRAS);
    nuevoentrenamiento.setearFormaDefensa(VUELO);
    dragoncito1.CargarEstrategias(&nuevoentrenamiento);
    std::cout << "Tu dragon " << dragoncito1.LeerNombreDragon() << "Tiene forma de ataque: " << std::endl << dragoncito1.leer_estrategiaATAQUE() << std::endl;
    std::cout<<"Y forma de defensa:" << std::endl<<dragoncito1.leer_estrategiaDEFENSA();
   
}

