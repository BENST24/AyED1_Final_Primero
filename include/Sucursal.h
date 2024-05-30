#pragma once
#include "Empleado.h"

class Sucursal 
{
private:
    int cantidadEmpleados = 0;
    Empleado* empleados[10];
    string direccion;
public:
    Sucursal(string dire);
    ~Sucursal();
    void agregarEmpleado(Empleado* empleado, int posicion);
    void mostrarEmpleados();
    void enviarNotificacion();
    void setCantidadEmpleados(int cantidad);
};