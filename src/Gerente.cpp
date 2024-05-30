#include "..\include\Gerente.h"

Gerente::Gerente(string nom, string ape, int dni, double salario)
    : Empleado(nom, ape, dni, salario, "Gerente") {}

void Gerente::trabajar()
{
    cout << "El Gerente " << Empleado::getNombre() << " " << Empleado::getApellido() << " esta gestionando el equipo.\n";
}