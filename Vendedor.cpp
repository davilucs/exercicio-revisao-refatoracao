#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {
const double mesPorAno = 12;
  public:  
	double _quotaMensalVendas;
	double quotaTotalAnual() {
	  return quotaMensalVendas * mesPorAno;
	}
	
};

