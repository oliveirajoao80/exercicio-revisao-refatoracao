#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

#define HORARIOCOMERCIAL 8
#define PESOHORAEXTRA 0.5

class Empregado {

    public:

        std::string nome;

        double horasTrabalhadas;

        double salarioHora;

        double pagamentoMes(double horasTrabalhadas) {

            double TotHora = horasTrabalhadas;
                if (horasTrabalhadas > HORARIOCOMERCIAL) {
                    double HoraExtra;
                        HoraExtra = (horasTrabalhadas - HORARIOCOMERCIAL);
                            TotHora += (HoraExtra * PESOHORAEXTRA);
                }
                        return (TotHora * salarioHora);

        }

};

#endif
