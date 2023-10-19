#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Transacao
{
private:
    string data;
    double valor_transacao;
    string descricao;
};


class Conta
{
private:
    int numero_da_conta;
    string nome_do_correntista;
    double saldo;
    vector<Transacao> transacoes;
public:
    Conta();
    ~Conta();

    void setNumero_da_conta(int _numConta)
    {
        numero_da_conta = _numConta;
    }

    int getNumero_da_conta()
    {
        return numero_da_conta;
    }

     void setNome_do_correntista(int _nomeCorrentista)
    {
        nome_do_correntista = _nomeCorrentista;
    }

    string getNome_do_correntista()
    {
        return nome_do_correntista;
    }

    virtual void deposito(); //Como a operação é igual nos três tipos de conta, a implementação é feita na própria classe abstrata.
    virtual void retirada(); //Como a operação só é diferente em um tipo de conta, a implementação também é feita aqui, e sua "re-implementação" é feita na classe que possui uma operação diferente.
    virtual void extrato() const = 0; //Utiliza-se o "const = 0", quando a operação do método é diferente em todas as classes. Sendo assim, a implementação do método só é feito nas classes derivadas, e não na classa abstrata.





};



int main(){





    return 0;
}