#include <iostream>

#include "Banco.hpp"

int main(int argc, char const *argv[])
{
    Banco b("Bamerindus");

    cout << b.obtemNome() << endl;
    cout << "Contas: " << b.obtemNumContas() << endl;
    cout << "Saldo total: " << b.obtemSaldoTotal() << endl;

    Conta c1(100, 123.45);
    Conta c2(200, 3.14);

    b.adicionaConta(c1);
    cout << "Contas: " << b.obtemNumContas() << endl;
    cout << "Saldo total: " << b.obtemSaldoTotal() << endl;

    b.adicionaConta(c2);
    cout << "Contas: " << b.obtemNumContas() << endl;
    cout << "Saldo total: " << b.obtemSaldoTotal() << endl;

    Conta *c3 = b.obtemConta(100);
    cout << "Conta C3: " << c3->obtemNumero() << endl;

    b.transferir(c1 , c2, 50.0); // obtem returns a pointer..

    cout << "Conta C3: " << c3->obtemNumero() << endl;

    Conta *c4 = b.obtemConta(100);
    Conta *c5 = b.obtemConta(200);
    cout << "Conta C1: " << c1.obtemSaldo() << endl;
    cout << "Conta C2: " << c2.obtemSaldo() << endl;
    cout << "Conta C3: " << c3->obtemSaldo() << endl;
    cout << "Conta C4: " << c4->obtemSaldo() << endl;
    cout << "Conta C5: " << c5->obtemSaldo() << endl;

    cout << "Contas: " << b.obtemNumContas() << endl;
    cout << "Saldo total: " << b.obtemSaldoTotal() << endl;

    return 0;
}
