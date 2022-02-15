#include <iostream>
#include <cstring>

using namespace std;

int main(){
     
    int i;
    string nome[i]; 

for(i=1;i<16;i++){
getline(cin,nome[i]);
}
for(i=1;i<16;i++){
cout << nome[i] << " " << nome[i].size() << endl;
}

return 0;
}

