#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class BancoDeDados{
public:
   static void salvarDados(vector<string> dados);
   static vector<string> recuperarDados();

};

    static void salvarDados(vector<string> dados)
    {

    }

    static vector<string> recuperarDados()
    {

    //abrindo o arquivo para leitura
    ifstream arquivo_entrada;
    arquivo_entrada.open("banco_de_dados.txt", ios_base::in);
    vector<string> linhas;

    //verifica se o arquivo foi aberto com sucesso
    if (arquivo_entrada.is_open()){
        string linha;
        while (getline(arquivo_entrada, linha)){
            linhas.push_back(linha);
        }
        arquivo_entrada.close();
    } else {
        cout << "Erro ao abrir o arquivo." << endl;
    }

    return linhas;
    }



int main(){

 

    return 0;
}



//     static void salvarDados(vector<string>& dados){
//             // Abrindo o arquivo para escrita
//         ofstream arquivo_saida;
//         arquivo_saida.open("/home/daniel/Documentos/TIC18/ClassRoom/Aula22/exemplo.txt", ios_base::out);
//         dados.push_back("Amor");

//         // Verifica se o arquivo foi aberto com sucesso
//         if (arquivo_saida.is_open()) {
//             for (const string& linha : dados) {
//                 arquivo_saida << linha << endl;
//             }
//             arquivo_saida.close();
//         } else {
//             cout << "Erro ao abrir o arquivo" << endl;
//         }
//     }
// };

// int main() {
//     vector<string> escrever = BancoDeDados::recuperarDados();

//     BancoDeDados::salvarDados(escrever);
   

//     return 0;
// }
