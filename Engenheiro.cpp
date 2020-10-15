#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {
  	public:
		Engenheiro(std::string nome, double salarioHora, int projetos){
			_nome =nome;
			_salarioHora = salarioHora;
			_projetos = projetos;
		}
		int _projetos;
	
};

