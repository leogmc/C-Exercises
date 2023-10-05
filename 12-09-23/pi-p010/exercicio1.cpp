#include <iostream>

using namespace std;

void maxmin(int vetor[], int n, int& maximo, int& minimo) {
    if (n <= 0) {
        std::cout << "O vetor está vazio." << std::endl;
        return;
    }

    maximo = vetor[0];
    minimo = vetor[0];

    for (int i = 1; i < n; i++) {
        if (vetor[i] > maximo) {
            maximo = vetor[i];
        }
        if (vetor[i] < minimo) {
            minimo = vetor[i];
        }
    }
}

int main() {

      
    int maximo;
    int minimo;
    int n;
    std::cout << "Digite o tamanho do vetor: ";
    std::cin >> n;

    for


    if (n <= 0) {
        std::cout << "Tamanho inválido." << std::endl;
        return 1;
    } 
  
    int* vetor = new int;
    
    cout << minimo << endl;
    cout << maximo << endl;


    return 0;

}