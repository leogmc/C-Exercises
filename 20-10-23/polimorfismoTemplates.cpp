#include <iostream>
#include <vector>

template <typename T>
class ListaGenerica {
public:
    void adicionar(const T& elemento) {
        elementos.push_back(elemento);
    }

    bool remover(const T& elemento) {
        auto it = std::find(elementos.begin(), elementos.end(), elemento);
        if (it != elementos.end()) {
            elementos.erase(it);
            return true;
        }
        return false;
    }

    void listar() {
        for (const T& elemento : elementos) {
            std::cout << elemento << std::endl;
        }
    }

private:
    std::vector<T> elementos;
};

int main() {
    ListaGenerica<int> listaInteiros;
    listaInteiros.adicionar(10);
    listaInteiros.adicionar(20);
    listaInteiros.adicionar(30);

    ListaGenerica<std::string> listaStrings;
    listaStrings.adicionar("Olá");
    listaStrings.adicionar("Mundo");

    ListaGenerica<double> listaDoubles;
    listaDoubles.adicionar(3.14);
    listaDoubles.adicionar(2.718);

    std::cout << "Lista de Inteiros:" << std::endl;
    listaInteiros.listar();

    std::cout << "Lista de Strings:" << std::endl;
    listaStrings.listar();

    std::cout << "Lista de Números de Ponto Flutuante:" << std::endl;
    listaDoubles.listar();

    return 0;
}
