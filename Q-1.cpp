#include <iostream>
#include <fstream>

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
    
    cout << "\nCasthing\n";
     int iVar = 10;
     double dVar1 = 10 / 4;// dVar = 2.0
     double dVar2 = (double) 10 / 4;// dVar = 2.5
     cout << dVar1 << endl;
     cout << dVar2 << endl;

     cout << "\nLeitura e escrita de arquivo\n\n";

     // Escrita no arquivo.txt
    ofstream escrita1("arquivo.txt");

    if (escrita1.is_open()) {

        escrita1 << "Gravando isso em um arquivo.\n";
        escrita1.close();

    } else {
        cerr << "Nao foi possivel abrir o arquivo" << endl;
    }

    // Escrita no Arquivo1.txt
    ofstream escrita2("Arquivo1.txt");

    if (escrita2.is_open()) {

        escrita2 << "gravando";
        escrita2.close();

    } else {
        cerr << "Nao abriu (escrita2)." << endl;
    }

    // Leitura de arquivo.txt
    string linha;

    ifstream leitura1("arquivo.txt");

    if (leitura1.is_open()) {

        while (getline(leitura1, linha)) {
            cout << linha << endl;
        }

        leitura1.close();

    } else {
        cerr << "Nao abriu (leitura1)" << endl;
    }

    // Leitura de Arquivo1.txt
    string linha1;
    ifstream leitura2("Arquivo1.txt");
    if (leitura2.is_open()) {
        while (getline(leitura2, linha1)) {
            cout << linha1 << endl;
        }
        leitura2.close();
    } else {
        cerr << "Nao abriu (leitura2)." << endl;
    }

    string n = "Leticya";
    cout << n.front()<<endl;
    cout << n.back()<<endl;
    cout << n.empty() << endl;
    cout << n.length()<<endl;
    
    return 0;
}
