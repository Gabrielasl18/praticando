#include<iostream>

using namespace std;

int main(){

	int soma = 0, i = 0,n1 = 0, d = 0, n2 = 0;
	float c;
	int cont = 0;

	while (i < 100){
		i++;
		c = i % 3;
		d = i % 5;
		cout << endl;
		cout << i << "/3 ->" << "o resto eh = " << c << endl;
		cout << i << "/5 ->" << "o resto eh = " << d << ", ou seja:" << endl;
		if (c == 0){
			cout << i <<  " EH multiplo de 3 e" << endl;
			n1 += soma + i;
		}
	    if (c!= 0){
			cout << i << " NAO eh multiplo de 3 e" << endl;
		}   
		if (d == 0){
			cout << i << " EH multiplo de 5" << endl;
			n2 += soma + i;
		}
		else{
			cout << i << " NAO eh multiplo de 5" <<endl;
		}
	}
		cout << "\na soma de todos os multiplos de 3 eh: " << n1;
		cout << "\na soma de todos os multiplos de 5 eh: " << n2 << endl;
}