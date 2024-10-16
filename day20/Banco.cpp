#include "Banco.hpp"
 
Banco::Banco(string nome)
{
    this->nome = nome;
    this->numContas = 0;
}

string Banco::obtemNome() const
{
    return nome;
}

bool Banco::adicionaConta(Conta &c)
{
    if (numContas < N)
    {
        contas[numContas] = c;
        numContas++;
        return true;
    }
    return false;
}

Conta *Banco::obtemConta(int numero) // const
{
    for (int i = 0; i < numContas; i++)
    {
        Conta c = contas[i];
        if (c.obtemNumero() == numero)
            return contas+i;
    }    
    return nullptr;
}

bool Banco::transferir(Conta &deCC, Conta &paraCC, double valor)
{
    //deCC.retirar(valor); // removes from copy!
    //paraCC.depositar(valor);    
    Conta *de = obtemConta(deCC.obtemNumero());
    Conta *para = obtemConta(paraCC.obtemNumero());
    de->retirar(valor);
    para->depositar(valor);    
    return true;
}

double Banco::obtemSaldoTotal() const
{
    double s = 0.0;
    for (int i = 0; i < numContas; i++)
    {
        Conta c = contas[i];
        s += c.obtemSaldo();
    }
    
    return s;
}

int Banco::obtemNumContas() const
{
    return numContas;
}
