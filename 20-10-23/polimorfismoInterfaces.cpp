#include <iostream>

using namespace std;

class Desenhavel{
public:
    virtual void desenhar() = 0;

};

class Circulo : public Desenhavel{
public:
    virtual void desenhar() override {
    std::cout <<      "              ooooo"     <<std:: endl;
    std::cout <<    "            ooooooooo"    <<std:: endl;
    std::cout <<   "          oooooooooooo"    <<std:: endl;
    std::cout <<  "         oooooooooooooo"    <<std:: endl;
    std::cout <<  "         oooooooooooooo"    <<std:: endl;
    std::cout <<   "          oooooooooooo"    <<std:: endl;
    std::cout <<    "            ooooooooo"    <<std:: endl;
    std::cout <<      "              ooooo"     <<std:: endl;
    std:: cout << endl;
    std:: cout << endl;

    }

};

class Retangulo : public Desenhavel{
public:
    virtual void desenhar() override {
    
    std::cout <<  "         oooooooooooooo"    <<std:: endl;
    std::cout <<  "         oooooooooooooo"    <<std:: endl;
    std::cout <<  "         oooooooooooooo"    <<std:: endl;
    std::cout <<  "         oooooooooooooo"    <<std:: endl;
    std::cout <<  "         oooooooooooooo"    <<std:: endl;
    std:: cout << endl;
    std:: cout << endl;

    }

};

class Triangulo : public Desenhavel{
public:
    virtual void desenhar() override {
    std::cout <<           "              o"     <<std:: endl;
    std::cout <<          "             ooo"    <<std:: endl;
    std::cout <<         "            ooooo"    <<std:: endl;
    std::cout <<       "          ooooooooo"    <<std:: endl;
    std::cout <<     "        ooooooooooooo"    <<std:: endl;
    std::cout <<   "      ooooooooooooooooo"    <<std:: endl;

    }

};


int main(){
    Circulo circulo;
    Retangulo retangulo;
    Triangulo triangulo;

    Desenhavel* forma1 = &circulo;
    Desenhavel* forma2 = &retangulo;
    Desenhavel* forma3 = &triangulo;

    forma1->desenhar(); //Chama o método desenhar() da classe Circulo
    forma2->desenhar(); //Chama o método desenhar() da classe Retangulo
    forma3->desenhar(); //Chama o método desenhar() da classe Triangulo


    return 0;
}