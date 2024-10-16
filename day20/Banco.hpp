#ifndef _BANCO_HPP
#define _BANCO_HPP
#include <string>
#include "Conta.hpp"

#define N 2

using namespace std;
class Banco
{
private:
    string nome;
    int numContas;
    Conta contas [ N ];


public:
    Banco(string nome = "");
    string obtemNome() const;
    bool adicionaConta(Conta &conta);

    Conta *obtemConta(int numero) ; // const
    bool transferir(Conta &deCC, Conta &paraCC, double valor);
    double obtemSaldoTotal() const;
    int obtemNumContas() const;
};

#endif