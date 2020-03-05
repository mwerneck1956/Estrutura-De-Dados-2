#include<iostream>
#include<fstream>
using namespace std;

void escreveArquivoTexto(){
    ofstream arq("saida.txt");
    string frase;
    cout << "Digite uma frase" << endl;
    cin >> frase;
    arq << frase << endl;
    arq << "Dadoos : " << endl;
    arq << "4.2" << " 8.3";
    cout << "Tamanho em bytes" << arq.tellp() << endl;

}

void leArquivoTexto(){
    ifstream arq("entrada");
    cout << arq.is_open() ? "Arquivo aberto " : "Arquivo fechado";
    if(arq.is_open()){
        cout << "Informações no Arquivo " << endl;
        string str;
        while(getline(arq,str)){
            cout << str << endl;
        }
        cout << "Fim de Arquivo" << endl;
    }
   
}

int main(){
    leArquivoTexto();
}