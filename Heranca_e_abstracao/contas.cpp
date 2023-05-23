#include "contas.h"

float ContaCorrente::sacar(float valorSaque){
    if (valorSaque > (saldoConta + (valorSaque*taxaSaque))){
        throw std::length_error("Você não possui dinheiro suficiente.");
    }
    return saldoConta -= (valorSaque + (valorSaque*taxaSaque));
}
