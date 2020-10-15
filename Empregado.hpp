#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>
const double multHorasExtras = 2;
const double horasMaxDia = 8;
class Empregado {
	
  public:
    std::string _nome;
    double _salarioHora;  
    double _quotaMensalVendas;
	
    double pagamentoMes(double horasTrabalhadas){
    	double t = horasTrabalhadas;
	  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > horasMaxDia) {
        double x = horasTrabalhadas - horasMaxDia;
        t += x / multHorasExtras;
      }
	  return t * _salarioHora;
    }
};

#endif
