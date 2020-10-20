#include <string>
#include "Empregado.hpp"

#define MESESREGULMENTADOS 12

class Vendedor : public Empregado {

    public:

        double quotaMensalVendas;

        double quotaTotalAnual() {

            return (quotaMensalVendas * MESESREGULMENTADOS);
        }

        void print(){

            std::cout << "Nome: " << nome << std::endl;
            std::cout << "Salario Mes: " << pagamentoMes(horasTrabalhadas) << std::endl;
            std::cout << "Quota vendas: " << quotaTotalAnual() << std::endl;
            std::cout << std::endl;

        }
};
