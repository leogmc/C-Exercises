#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <limits>
#include <iomanip>
using namespace std;

int main (){

float pif;
double pid;
long double pil;
pif = M_PI;
pid = M_PI;
pil = M_PI;

cout << "O menor número possível que pode ser representado pela variável do tipo float é: " << numeric_limits<float> ::min() << endl;
cout << "O maior número possível que pode ser representado pela variável do tipo float é: " << numeric_limits<float> ::max() << endl;

cout << "Máximo de precisão do pi em float: " << setprecision(8) << pif << endl;
cout << "Máximo de precisão de pi em double: " << setprecision(49) << pid << endl;
cout << "Máximo de precisão de pi em long double: " << setprecision(49) << pil << endl;


cout << "O valor de pi, formatado com a precisão de 2 casas decimais fica em FLOAT: " << setprecision(3) << pif << endl;
cout << "O valor de pi, formatado com a precisão de 2 casas decimais fica em LONG: " << setprecision(3) << pid << endl << endl;

cout << "O valor de pi, formatado com a precisão de 4 casas decimais fica em FLOAT: " << setprecision(5) << pif << endl ;
cout << "O valor de pi, formatado com a precisão de 4 casas decimais fica em LONG: " << setprecision(5) << pid << endl << endl;

cout << "O valor de pi, formatado com a precisão de 8 casas decimais fica em FLOAT: " << setprecision(9) << pif << endl;
cout << "O valor de pi, formatado com a precisão de 8 casas decimais fica em LONG: " << setprecision(9) << pid << endl << endl;

cout << "O valor de pi, formatado com a precisão de 16 casas decimais fica em FLOAT: " << setprecision(17) << pif << endl;
cout << "O valor de pi, formatado com a precisão de 16 casas decimais fica em LONG: " << setprecision(17) << pid << endl;

    return 0;
}