#include <iostream>

using namespace std;

int main()
{

    char nome;
    char resposta;
    int idade;

  inicio:   
  
  cout << "digite seu nome: " << endl;
  cin >> nome;
  cout << "digite sua idade: " << endl;
  cin >> idade;
  cout << "deseja continuar?[S/N] " << endl;
  cin >> resposta;
      
      if(resposta=='S' or resposta=='s'){
        goto inicio;
      }
      else{
        exit(0);
      }

return 0;
}