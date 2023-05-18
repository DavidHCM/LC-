#include <iostream>

// Esto nos sirve para no tener que andar escribeidnoe el std using namespace std;
// Y solo usamos el cout <<"string";

int main() {
    /*
    // Datos basicos y su print
    int d1 = 12;
    std::cout<<d1<<std::endl;

    float f1 = 1.2;
    std::cout<<f1<<std::endl;

    double db = 1.222222;
    std::cout<<db<<std::endl;

    char c = 'a';
    std::cout<<c<<std::endl;
     */

    // Lectura de datos
    std::cout<<"Introduce un valor"<<std::endl;
    int dd = 0;
    std::cin>>dd;
    std::cout<<"El valor es: "<<dd<<std::endl;
    return 0;

}
