#include "..\include\Encargado.h"

Encargado::Encargado(string nom, string ape, int dni, double salario)
    : Empleado(nom, ape, dni, salario, "Encargado") {}

void Encargado::trabajar()
{
    cout << "El Encargado " << Empleado::getNombre() << " " << Empleado::getApellido() << " esta supervisando.\n";
}