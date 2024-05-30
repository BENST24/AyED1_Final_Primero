#pragma once
#include "Empleado.h"

/// class Vendedor - 
class Vendedor : public Empleado 
{

public:
    
    Vendedor(string nom, string ape, int dni, double salario);
    void trabajar();
};

