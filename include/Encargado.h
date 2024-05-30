#pragma once
#include "Empleado.h"

/// class Encargado - 
class Encargado : public Empleado 
{

public:
    
    Encargado(string nom, string ape, int dni, double salario);
    void trabajar();
};