#include <iostream>

using namespace std;

class Calculadora{
public:
    static double soma(double numero1, double numero2){
        return numero1 + numero2;

    }

    static double subtracao(double numero1, double numero2){
        return numero1 - numero2;

    }

    static double multiplicacao(double numero1, double numero2){
        return numero1 * numero2;

    }

    static double divisao(double numero1, double numero2){
        return numero1 / numero2;

    }


};

int main(){

    double num1, num2;
    char operacao;

    cout << "Insira o primeiro numero: ";
    cin >> num1;

    cout << "Insira o segundo numero: ";
    cin >> num2;

    cout << "Agora insira a operação desejada: ";
    cin >> operacao;

    if (operacao == '+'){
        cout << num1 << " + " << num2 << " = " << Calculadora::soma(num1,num2); 

    } else if (operacao == '-'){
        cout << num1 << " - " << num2 << " = " << Calculadora::subtracao(num1,num2); 

    } else if (operacao == '*'){
        cout << num1 << " * " << num2 << " = " << Calculadora::multiplicacao(num1,num2);

    } else if (operacao == '/'){
        cout << num1 << " / " << num2 << " = " << Calculadora::divisao(num1,num2); 
        
    }


    return 0;
}