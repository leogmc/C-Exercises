#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main(){
    //string contendo campos separados por vírgula
    std::string input = "campo1,campo2,campo3,campo4";

    //Usando std::istringstream para dividir a string
    std::istringstream ss(input);
    std::string token;
    std::vector<std::string> campos;

    while(std::getline(ss,token,',')){
        campos.push_back(token);
    }

    //imprimindo os campos
    for (const auto& campo: campos){
        std::cout << campo << std::endl;
    }

    return 0;
}