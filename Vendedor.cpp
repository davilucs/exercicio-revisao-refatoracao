#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {
const double mesPorAno = 12;
  public:  
	Vendedor(std::string nome, double salarioHora, double quotaMensalVendas){
		_nome =nome;
  		_salarioHora = salarioHora;
  		_quotaMensalVendas = quotaMensalVendas;
	}
	double _quotaMensalVendas;
	double quotaTotalAnual() {
	  return quotaMensalVendas * mesPorAno;
	}
	
};

