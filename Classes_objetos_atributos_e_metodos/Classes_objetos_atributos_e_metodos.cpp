#include <iostream>
#include <string>
#include <vector>

class Aluno{

    std::string nomeCompleto;
    std::string cpf;
    std::string idade;
    long int matricula;
    std::string serie;

public:

    Aluno(){}

    Aluno(std::string nomeCompleto, std::string cpf, std::string idade, long int matricula, std::string serie){
        this->nomeCompleto = nomeCompleto;
        this->cpf = cpf;
        this->idade = idade;
        this->matricula = matricula;
        this->serie = serie;
    }

    std::string getNome(){
        return this->nomeCompleto;
    }
    void setNome(std::string nomeCompleto){
        this->nomeCompleto = nomeCompleto;
    }

    std::string getCpf(){
        return this->cpf;
    }
    void setCpf(std::string cpf){
        this->cpf = cpf;
    }

    std::string getIdade(){
        return this->idade;
    }
    void setIdade(std::string idade){
        this->idade = idade;
    }

    long int getMatricula(){
        return this->matricula;
    }
    void setMatricula(long int matricula){
        this->matricula = matricula;
    }

    std::string getSerie(){
        return this->serie;
    }
    void setSerie(std::string serie){
        this->serie = serie;
    }
};

class Funcionario{

    std::string nomeCompleto;
    std::string cpf;
    std::string idade;
    long int matricula;
    std::string cargo;
    float salario;

public:

    Funcionario(){}

    Funcionario(std::string nomeCompleto, std::string cpf, std::string idade, long int matricula, std::string cargo, float salario){
        this->nomeCompleto = nomeCompleto;
        this->cpf = cpf;
        this->idade = idade;
        this->matricula = matricula;
        this->cargo = cargo;
        this->salario = salario;
    }

    std::string getNome(){
        return this->nomeCompleto;
    }
    void setNome(std::string nomeCompleto){
        this->nomeCompleto = nomeCompleto;
    }

    std::string getCpf(){
        return this->cpf;
    }
    void setCpf(std::string cpf){
        this->cpf = cpf;
    }

    std::string getIdade(){
        return this->idade;
    }
    void setIdade(std::string idade){
        this->idade = idade;
    }

    long int getMatricula(){
        return this->matricula;
    }
    void setMatricula(long int matricula){
        this->matricula = matricula;
    }

    std::string getCargo(){
        return this->cargo;
    }
    void setCargo(std::string cargo){
        this->cargo = cargo;
    }

    float getSalario(){
        return this->salario;
    }
    void setSalario(float salario){
        this->salario = salario;
    }
};

class Escola{

    std::string nomeEscola;
    std::string cnpj;
    // Alunos:
    Aluno *alunos = new Aluno[10];
    // Aluno alunos[10]:
    std::vector<Aluno> estudantes;
    // Funcionarios:
    Funcionario *funcionarios = new Funcionario[5];
    // Funcionario funcionarios[5]:
    std::vector<Funcionario> empregados;
    int kountA{0}, kountF{0};

public:

    Escola(std::string nomeEscola, std::string cnpj){
        this->nomeEscola = nomeEscola;
        this->cnpj = cnpj;
    }

    // Alunos:

    // Inserir com vector.
    void inserirAluno(std::string nomeCompleto, std::string cpf, std::string idade, long int matricula, std::string serie){
        Aluno temp(nomeCompleto, cpf, idade, matricula, serie);
        estudantes.push_back(temp);
    }

    // Inserir com Classe.
    void inserirAlun(std::string nomeCompleto, std::string cpf, std::string idade, long int matricula, std::string serie){
        if (kountA < 10)
        {
            alunos[kountA].setNome(nomeCompleto);
            alunos[kountA].setCpf(cpf);
            alunos[kountA].setIdade(idade);
            alunos[kountA].setMatricula(matricula);
            alunos[kountA].setSerie(serie);
            ++kountA;
        }
        else{
            std::cout << "Vetor estudantes cheio" << std::endl;
        }
    }

    // Listar componentes do vetor.
    void listarAlun(){
        std::cout << "###### Estudantes ######" << std::endl;
        for (auto i{0}; i < kountA; ++i){
            std::cout << "Nome: " << alunos[i].getNome() << std::endl
                      << "Cpf: " << alunos[i].getCpf() << std::endl
                      << "Idade: " << alunos[i].getIdade() << std::endl
                      << "Matrícula: " << alunos[i].getMatricula() << std::endl
                      << "Série: " << alunos[i].getSerie() << std::endl
                      << "****************************" << std::endl;
        }
    }

    // Funcionarios:

    // Inserir com vector.
    void inserirFunc(std::string nomeCompleto, std::string cpf, std::string idade, long int matricula, std::string cargo, float salario){
        Funcionario temp(nomeCompleto, cpf, idade, matricula, cargo, salario);
        empregados.push_back(temp);
    }

    // Inserir com Classe.
    void inserirFun(std::string nomeCompleto, std::string cpf, std::string idade, long int matricula, std::string cargo, float salario){
        if (kountF < 5)
        {
            funcionarios[kountF].setNome(nomeCompleto);
            funcionarios[kountF].setCpf(cpf);
            funcionarios[kountF].setIdade(idade);
            funcionarios[kountF].setMatricula(matricula);
            funcionarios[kountF].setCargo(cargo);
            funcionarios[kountF].setSalario(salario);
            ++kountF;
        }
        else{
            std::cout << "Vetor funcionários cheio" << std::endl;
        }
    }

    // Listar componentes do vetor.
    void listarFun(){
        std::cout << "###### Funcionários ######" << std::endl;
        for (auto j{0}; j < kountF; ++j){
            std::cout << "Nome: " << funcionarios[j].getNome() << std::endl
                      << "Cpf: " << funcionarios[j].getCpf() << std::endl
                      << "Idade: " << funcionarios[j].getIdade() << std::endl
                      << "Matrícula: " << funcionarios[j].getMatricula() << std::endl
                      << "Cargo: " << funcionarios[j].getCargo() << std::endl
                      << "Salário: " << funcionarios[j].getSalario() << std::endl
                      << "****************************" << std::endl;
        }
    }

    // Somar todos os 'float salario' inseridos.
    float calcularSalarios(){
        float soma{0};
        for (auto k{0}; k < kountF; ++k){
            soma += funcionarios[k].getSalario();
        }
        return soma;
    }
};

int main(){
    return 0;
}
