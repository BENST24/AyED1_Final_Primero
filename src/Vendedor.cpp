#include "..\include\Vendedor.h"

Vendedor::Vendedor(string nom, string ape, int dni, double salario)
    : Empleado(nom, ape, dni, salario, "Vendedor") {}

void Vendedor::trabajar()
{
    cout << "El Vendedor " << Empleado::getNombre()<< " " << Empleado::getApellido() << " esta promocionando.\n";
}