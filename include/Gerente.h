#pragma once
#include "Empleado.h"

/// class Gerente - 
class Gerente : public Empleado 
{

public:
    
    Gerente(string nom, string ape, int dni, double salario);
    void trabajar();
};