#include <iostream>
#include ".\include\Empleado.h"
#include ".\include\Encargado.h"
#include ".\include\Gerente.h"
#include ".\include\Sucursal.h"
#include ".\include\Vendedor.h"

using namespace std;

void clearConsole()
{
    #ifdef __unix__
        system("clear");
    #elif __APPLE__
        system("clear");
    #elif defined(_WIN32) || defined(WIN32)
        system("cls");
    #endif
}

void pauseConsole()
{
    cin.ignore();
    cin.get();
}

void selecionarArea(string nombre, string apellido, int dni, double salario, int &posicion, int &cantidad, Sucursal* sucursal);

int main()
{
    string nombre, apellido;
    int dni, opcion;
    double salario;
    int posicion = -1, cantidad = 0;
    
    Sucursal* sucursal = new Sucursal("Colon 2700");

    do
    {
        clearConsole();

        cout << "\n\nOpciones!\n";
        cout << "Para agregara un epleado ingrese 1\n";
        cout << "Para listar empleados ingrese 2\n";
        cout << "Para enviar notificacion ingrese 3\n";
        cout << "Para Salir ingrese 0\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            clearConsole();
            cout << "\n\nIngrese el nombre: ";
            cin.ignore();
            getline(cin, nombre);
            cout << "Ingrese el apelldio: ";
            getline(cin, apellido);
            cout << "Ingrese el DNI: ";
            cin >> dni;
            cout << "Ingrese el salario: ";
            cin >> salario;
            selecionarArea(nombre, apellido, dni, salario, posicion, cantidad, sucursal);
            break;
        case 2:
            clearConsole();
            sucursal->mostrarEmpleados();
            pauseConsole();
            break;
        case 3:
            clearConsole();
            sucursal->enviarNotificacion();
            pauseConsole();
            break;
        case 0:
            clearConsole();
            cout << "\n\n\nPreograma Finalizado!!!\n";
            break;
        default:
            cout << "\nOpcion no valida!\n";
            break;
        }
    } while (opcion != 0);

    delete sucursal;

    pauseConsole();

    return 0;
}

void selecionarArea(string nombre, string apellido, int dni, double salario, int &posicion, int &cantidad, Sucursal* sucursal)
{
    int opcion;

    cout << "\nEliga puesto del empleado:\n";
    cout << "Para Gerente ingrese 1\n";
    cout << "Para Encargado ingrese 2\n";
    cout << "Para Vendedor ingrese 3\n";
    cout << "Opcion: ";
    cin >> opcion;

    do
    {
        switch(opcion)
        {
        case 1:
        {
            Gerente* gerente = new Gerente(nombre, apellido, dni, salario);
            posicion++;
            cantidad++;
            sucursal->agregarEmpleado(gerente, posicion);
            sucursal->setCantidadEmpleados(cantidad);
            break;
        }
        case 2:
        {
            Encargado* encargado = new Encargado(nombre, apellido, dni, salario);
            posicion++;
            cantidad++;
            sucursal->agregarEmpleado(encargado, posicion);
            sucursal->setCantidadEmpleados(cantidad);
            break;
        }
        case 3:
        {
            Vendedor* vendedor = new Vendedor(nombre, apellido, dni, salario);
            posicion++;
            cantidad++;
            sucursal->agregarEmpleado(vendedor, posicion);
            sucursal->setCantidadEmpleados(cantidad);
            break;
        }
        default:
            cout << "\nOpcion no valida\n";
            break;
        }
    } while(opcion < 1 || opcion > 3);
    
}