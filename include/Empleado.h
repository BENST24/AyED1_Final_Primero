#pragma once
#include <iostream>
using namespace std;

/// class Empleado - 
class Empleado {
  // Attributes
private:
    string nombre;
    string apellido;
    int dni;
    double salario;
    string area;
  // Operations
public:
    Empleado(string nom, string ape, int dni, double salario, string area);
    virtual void trabajar() = 0;
    // void mostrarEmpleado();
    string getNombre();
    string getApellido();
    int getDNI();
    double getSalario();
    string getArea();
    
};