#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;

int main(int argc, char* argv[]){
int inteiro;
double decimal;
if (argc < 3){
    cout << "Você inseriu um número menor de argumentos necessários." << endl;
} else {

    if(strcmp(argv[1], "/int") == 0){
        //Pesquisar mais sobre "atoi" e "atof"
        inteiro = atoi(argv[2]) / atoi(argv[3]);
        cout << inteiro << endl;
    } else if (strcmp(argv[1], "/double") == 0) {
        decimal = atof(argv[2]) / atof(argv[3]);
        cout << decimal << endl;
    }else {

        cout << "Nenhuma das opções." << endl;
    }
}



return 0;

}