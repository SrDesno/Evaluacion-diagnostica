#include "Fraccion.hpp"
#include <iostream>

Fraccion::Fraccion(){
  denominador=0;
  numerador=0;
}

void Fraccion::setNumerador(int _numerador){
  numerador=_numerador;
}

int Fraccion::getNumerador(){
    return numerador;
}

void Fraccion::setDenominador(int _denominador){
    denominador=_denominador;
}

int Fraccion::getDenominador(){
    return denominador;
}

