#include <iostream>

using namespace std;

void contar(){
    static int contar = 0;
    cout << contar<<endl;
    contar++;
}

class Pessoa{
    public:
    string nome;
    int idade;
    static int contador;

    void mostrar(){
    cout << "contador: " << contador << endl;
    contador++;
}
};

int Pessoa::contador = 0;

int main() {

      cout << "\nBreak\n";
     int a;
    for(int a=0;a < 9; a++){
            if(a==5){
    break;}
    cout << a << "\n";}

    cout << "\n";

    cout << "\nContinue\n";
     int i;
    for(int i=0;i < 9; i++){
            if(i==5){
    continue;}
    cout << i << "\n";}

    cout << "\n";

    cout << "\nStatic\n";

    for (int b=0;b<10;b++){
        contar();
    }

    cout << "\nCriacao de classe com static: \n";

    Pessoa p0;
    Pessoa p1;
    Pessoa p2;

    p0. mostrar();
    p1. mostrar();
    p2. mostrar();
    
   


    return 0;
}
