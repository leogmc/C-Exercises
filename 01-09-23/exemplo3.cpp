#include <iostream>

using namespace std;

int main(int argc, char* argv[]){


if (argc>1) {
string ano = argv[2];
int anoI = stoi(ano);
int idade = 2023-anoI;

cout << "Bom dia, " << argv[1] << endl << "Sua idade é" << idade << endl;

}
    return 0;
}