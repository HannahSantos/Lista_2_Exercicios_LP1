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

    Aluno(std::string nomeCompleto, std::string cpf, std::string idade, int matricula, std::string serie){
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

    Funcionario(std::string nomeCompleto, std::string cpf, std::string idade, int matricula, std::string cargo, float salario){
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
    void setSerie(float salario){
        this->salario = salario;
    }
};

class Escola{

    std::string nomeEscola;
    std::string cnpj;
    Funcionario *funcionarios = new Funcionario[5];
    Aluno *alunos = new Aluno[10];
    std::vector<Funcionario> funcionarios;
    // Funcionario funcionarios[5];
    std::vector<Aluno> estudantes;
    // Aluno alunos[10];
    int cont{0};

public:

    Escola(std::string nomeEscola, std::string cnpj){
        this->nomeEscola = nomeEscola;
        this->cnpj = cnpj;
    }

    void inserirAluno(std::string nomeCompleto, std::string cpf, std::string idade, int matricula, std::string serie){
        Aluno temp(nomeCompleto, cpf, idade, matricula, serie);
        estudantes.push_back(temp);
        


    }

    void inserirAlun(std::string nomeCompleto, std::string cpf, std::string idade, int matricula, std::string serie){
        if (cont < 10)
        {
            alunos[cont].setNome(nomeCompleto);
            alunos[cont].setCpf(cpf);
            alunos[cont].setIdade(idade);
            alunos[cont].setMatricula(matricula);
            alunos[cont].setSerie(serie);
            cont++;
        }
        else
        {
            std::cout << "Vetor estudantes cheio" << std::endl;
        }
    }

    void listarAlun()
    {
        std::cout << "###### Estudantes ######" << std::endl;
        for (int i = 0; i < cont; i++)
        {
            std::cout << "Nome: " << alunos[i].getNome() << std::endl
                      << "Cpf: " << alunos[i].getCpf() << std::endl
                      << "Idade: " << alunos[i].getIdade() << std::endl
                      << "Matricula: " << alunos[i].getMatricula() << std::endl
                      << "Salario: " << alunos[i].getSerie() << std::endl
                      << "****************************" << std::endl;
        }
    }

    float calcularSalarios(){
        float soma = 0;
        for (int i = 0; i < cont; i++){
            soma += funcionarios[i].getSalario();
        }
        return soma;
    }
};

int main(){
    return 0;
}
