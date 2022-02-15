#include <iostream>

using namespace std;

/*

SWITCH SÓ TESTA IGUALDADE.
DENTRO DO MESMO SWITCH NÃO TESTA MAIS DE 1 CASE, A NAO SER QUE SEJA ANINHADO.

SINTAXE:

SWITCH(EXPRESSAO){
    CASE CONST 1:
       COMANDOS;
       BREAK; (SE FOR, ELE NAO FICA TESTANDO OS OUTROS, ELE VAI DIRETO)
    CASE CONST 2:
       COMANDOS;
       BREAK; 
    DEFAULT:(ESTRUTURA PADRÃO, SE NÃO SATISFAZER OS OUTROS, NÃO É NECESSÁRIO, MAS SE QUISER POR COMANDOS, USAR ELE)
        COMANDO; 
}
*/

int main()
{
    int valor;

    cin >> valor;

    switch(valor){
        case 1:
           cout << "belezura" << endl;
           break;
        case 2:
           cout << "belezao" << endl;
           break;
        default:
           cout << "inexistente" << endl;
    }

     cout << "---Programa Finalizado---" << endl;

return 0;
}