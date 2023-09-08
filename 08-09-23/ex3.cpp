#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
int i, media;
vector<float> nota;
int escolha;
bool decisao = false;
soma = 0;



do {
    for(i = 0; i!= 100; i++ ){
    cout << "Insira uma nota: " << endl;
    cin >> nota;

    nota.push_back(i);


    cout << "Deseja inserir outra nota? Digite (1) para SIM ou (2) para NÃO" << endl;
    cin >> escolha;

    if(escolha == 2){
        decisao = true;
    }
    }

} while (decisao = false);



nota.size();





















    return 0;
}