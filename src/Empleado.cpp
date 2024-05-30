#include "..\include\Empleado.h"

Empleado::Empleado(string nom, string ape, int dni, double salario, string area)
{
    this->nombre = nom;
    this->apellido = ape;
    this->dni = dni;
    this->salario = salario;
    this->area = area;
}
string Empleado::getNombre()
{
    return nombre;
}

string Empleado::getApellido()
{
    return apellido;
}

int Empleado::getDNI()
{
    return dni;
}

double Empleado::getSalario()
{
    return salario;
}

string Empleado::getArea()
{
    return area;
}