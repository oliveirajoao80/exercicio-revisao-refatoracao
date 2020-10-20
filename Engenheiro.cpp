#include <string>
#include "Empregado.hpp"


class Engenheiro : public Empregado {

  public:

	int ProjetosTotais;

    void print(){

       std::cout << "Nome: " << nome << std::endl;
       std::cout << "Salario mes " << pagamentoMes(horasTrabalhadas) << std::endl;
       std::cout << "Projetos: " << ProjetosTotais << std::endl;
       std::cout << std::endl;
  }


};
