#ifndef CONTAS_H
#define CONTAS_H

#include <iostream>
#include <iomanip>
#include <stdexcept>

class Conta{
protected:
    float saldoConta;
public: 
    Conta(float dinheiro): saldoConta(dinheiro) {}
    virtual float depositar(float deposito) = 0;
    virtual float sacar(float saque) = 0;
    float getSaldo() { return saldoConta; }
    void setSaldo(float saldoConta) { this->saldoConta = saldoConta; }

};

class ContaCorrente : public Conta{
private:
    float taxaSaque{0.05};
public:
    ContaCorrente(float saldoConta) : Conta(saldoConta) {}
    float depositar(float valorDeposito) {return saldoConta + valorDeposito;}
    float sacar(float valorSaque);
    float getTaxaSaque() { return taxaSaque; }
    void setTaxaSaque(float taxaSaque) { this->taxaSaque = taxaSaque; }
};

class ContaPoupança : public Conta{
private: 
    float taxaRendimento{0.05};
public:
    ContaPoupança(float saldoConta) : Conta(saldoConta) {}
    float depositar(float valorDeposito) { return saldoConta + valorDeposito + (valorDeposito*taxaRendimento); }
    float sacar(float valorSaque) {return saldoConta - valorSaque; }
    float getTaxaRendimento() { return taxaRendimento; }
    void setTaxaRendimento(float taxaRendimento) { this->taxaRendimento = taxaRendimento; }
};

#endif