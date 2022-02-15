#include <iostream>

using namespace std;

/*
SUBSTITUI O IF EM OPERAÇÕES MAIS SIMPLES
DIFICULTA A COMPREENSÃO DOS DESENVOLVEDORES QUE NAO ESTÃO ACOSTUMADOS
*/
int main(){
    int nota1,nota2,nota;
    string resposta;

    cout << "digite a primeira nota: " << endl;
    cin >> nota1;
    cout << "digite a segunda nota: " << endl;
    cin >> nota2;

    nota = nota1 + nota2;

    (nota>=50) ? resposta="Aprovado" : resposta="Reprovado";
// ? É A PERGUNTA E O ":" FUNCIONA COMO UM SENÃO
    cout << "o aluno foi: " << resposta << endl;

return 0;
}