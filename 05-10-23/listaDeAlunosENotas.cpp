#include <iostream>
#include <vector>

using namespace std;

class Aluno
{
private:
    string nome;
    string email;
    int nota1;
    int nota2;
public:
    Aluno();
   ~Aluno();
    string getNome(){
    return nome;
    }
    string getEmail(){
        return email;
    }
    int getNota1(){
        return nota1;
    }
    int getNota2(){
        return nota2;
    }

    void setNome(string _nome){
        nome = _nome;
    }

    void setEmail(string _email){
        email = _email;
    }

    void setNota1(int _nota1){
        nota1 = _nota1;
    }

     void setNota2(int _nota2){
        nota1 = _nota2;
    }
  

};

Aluno::Aluno()
{
    nome = "indefinido";
    email = "indefinido";
    nota1 = 0.0;
    nota2 = 0.0;
}

Aluno::~Aluno()
{
}

class BancoDeDados
{
private:
    /* data */
public:
    BancoDeDados(/* args */);
    ~BancoDeDados();
};

BancoDeDados::BancoDeDados(/* args */)
{
}

BancoDeDados::~BancoDeDados()
{
}






int main(){




    return 0;
}