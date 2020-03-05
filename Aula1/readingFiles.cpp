#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

void lePorBloco(int tamBloco)
{
    cout << "entrei " << endl;
    string linha, linha2,linha3;
    ifstream arq("books_with_blurbs.csv");
    char *dados = new char[tamBloco];
    int count = 0 ,  countChar = 0;
    if (arq.is_open())
    {
        while (!arq.eof())
        {
            getline(arq, linha);
         
            count ++;
            
                for(int i = 0 ; i < linha.size() ; i++){
                    if(linha[i] == '"'){
                        i++;
                        while(linha[i] != '"'){
                            cout << linha[i];
                            i++;
                        }
                        cout << endl;
                        break;
                    }
                    if(linha[i] == ','){
                        cout << endl;
                    }else{
                        cout << linha[i];
                    }
                }                          
            
                cout << endl;
            if(count == 4)
            break;
        }
    }
    else
    {
        cout << "Nao foi possivel abrir o arquivo" << endl;
    }
}

int main()
{
    cout << "hello" << endl;
    lePorBloco(50000);
}
