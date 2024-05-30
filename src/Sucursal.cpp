#include "..\include\Sucursal.h"

Sucursal::Sucursal(string dire)
{
    this->direccion = dire;
}
Sucursal::~Sucursal()
{
    for (int i = 0; i < cantidadEmpleados; ++i) 
    {
        delete empleados[i];
    }
}
void Sucursal::agregarEmpleado(Empleado* empleado, int posicion)
{
    if(posicion < 10)
    {
        empleados[posicion] = empleado;
    }
    else
    {
        cout << "\n\nNo se puede agregar mas empleados a la sucursal!";
    }
}
void Sucursal::mostrarEmpleados()
{

    if(cantidadEmpleados <= 0)
    {
        cout << "\n\nNo hay empleados cargados en la sucursal!\n";
    }
    else
    {
        cout << "\nLista de Empleados: \n";

        for(int i = 0; i < cantidadEmpleados; i++)
        {
            cout << "------------------------------------------\n";
            cout << "Cargo: " << empleados[i]->getArea() << endl;
            cout << "Nombre: " << empleados[i]->getNombre() << endl;
            cout << "Apellido: " << empleados[i]->getApellido() << endl;
            cout << "DNI: " << empleados[i]->getDNI() << endl;
            cout << "Salario: " << empleados[i]->getSalario() << endl; 
        }
    }
}
void Sucursal::enviarNotificacion()
{
    cout << "\nLa empresa indica que comenzo el horario laboral!\n\n";
    for(int i = 0; i < cantidadEmpleados; i++)
    {
        empleados[i]->trabajar();
    }
}
void Sucursal::setCantidadEmpleados(int cantidad) 
{
    cantidadEmpleados = cantidad;
}