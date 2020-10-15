#include "Engenheiro.cpp"
#include "Vendedor.cpp"

int main() {
  Engenheiro* eng1 = new Engenheiro("Joao Snow", 35, 3);
  std::cout << "Nome: " << eng1._nome << std::endl;
  std::cout << "Salario Mes: " << eng1._pagamentoMes(9.5) << std::endl;
  std::cout << "Projetos: " << eng1._projetos << std::endl;
  std::cout << std::endl;
  
  Engenheiro* eng2 = new Engenheiro("Daniela Targaryen", 30, 1);
  std::cout << "Nome: " << eng2._nome << std::endl;
  std::cout << "Salario Mes: " << eng2._pagamentoMes(8) << std::endl;
  std::cout << "Projetos: " << eng2._projetos << std::endl;  
  std::cout << std::endl;
	
  Engenheiro* eng3 = new Engenheiro("Bruno Stark", 30, 2);
  std::cout << "Nome: " << eng3._nome << std::endl;
  std::cout << "Salario Mes: " << eng3._pagamentoMes(8) << std::endl;
  std::cout << "Projetos: " << eng3._projetos << std::endl;  
  std::cout << std::endl;
  
  
  Vendedor* vend1 = new Vendedor("Tonho Lannister", 20, 5000);
  std::cout << "Nome: " << vend1._nome << std::endl;
  std::cout << "Salario Mes: " << vend1._pagamentoMes(6) << std::endl;  
  std::cout << "Quota vendas: " << vend1._quotaTotalAnual() << std::endl;
  std::cout << std::endl;
  
  Vendedor* vend2 = new Vendedor("Jose Mormont", 25, 3000);
  std::cout << "Nome: " << vend2._nome << std::endl;
  std::cout << "Salario Mes: " << vend2._pagamentoMes(8) << std::endl;  
  std::cout << "Quota vendas: " << vend2._quotaTotalAnual() << std::endl; 
  std::cout << std::endl;  
	
  Vendedor* vend2 = new Vendedor("Sonia Stark", 30, 4000);
  std::cout << "Nome: " << vend3._nome << std::endl;
  std::cout << "Salario Mes: " << vend3._pagamentoMes(8) << std::endl;  
  std::cout << "Quota vendas: " << vend3._quotaTotalAnual() << std::endl;  

  delete eng1;
  delete eng2;	
  delete eng3;  
  delete vend1;
  delete vend2;	
  delete vend3;  
  return 0;	
}
