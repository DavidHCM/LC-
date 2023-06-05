#include <iostream>

using namespace std;

int main() {

    string name = "gri Academy";
    // Funcion de .find busca un parametro donde queremos un caracter o string
    cout << name.find("Academy",0) << endl;
    // Aqui usando este ejemplo me regresa el index donde lo encontro

    // Aqui tomando dos parametros nos dara elementos de un cierto string y tambien podemos pedir la longitud a tomar
    cout << name.substr(4,3) << endl; // Nos dara: Aca
    


    return 0;
}
