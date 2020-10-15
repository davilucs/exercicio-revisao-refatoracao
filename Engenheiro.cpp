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
		printEngenheiro() {
		  	std::cout << "Nome: " << this._nome << std::endl;
  			std::cout << "Salario Mes: " << this._pagamentoMes(9.5) << std::endl;
  			std::cout << "Projetos: " << this._projetos << std::endl;
  			std::cout << std::endl;
		}
};

