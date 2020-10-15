#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {
const mesPorAno = 12;
  public:  
	double quotaTotalAnual() {
	  return quotaMensalVendas * mesPorAno;
	}
	
};

