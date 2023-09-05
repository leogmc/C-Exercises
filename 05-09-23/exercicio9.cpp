#include <iostream>

using namespace std;

// REQUER CONTINUAÇÃO -------------!
int main(){

int f[10], num, i, aux, n;
f[0] = 0;
f[1] = 1;


    cout << "Insira um número: ";
    cin >> num;

    cout << f[0];
    cout << f[1];

    for(i=0, n=0; i <= num; i++, n++){
        
        cout << f[n] << endl; 
        aux = f[n] + f[n+1];
        f[n+2] = aux;
        cout << aux;


        // RESULTADO ESPERADO: 0,1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584... 
    }


    return 0;
}