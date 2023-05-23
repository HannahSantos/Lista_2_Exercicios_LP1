#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include "contas.h"

class Cliente{
private:
    std::string nome;
    std::string cpf;
    ContaPoupança *poupança;
    ContaCorrente *corrente;
public:
    Cliente(std::string nome, std::string cpf) {}
    std::string getNome() { return nome; }
    void setNome(std::string nome) { this->nome = nome;}
    std::string getCpf() { return cpf; }
    void setCpf(std::string cpf) { this->cpf = cpf; }
};

#endif