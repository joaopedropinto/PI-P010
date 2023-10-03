#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int alunlim;
string nome;
float nota1;
float nota2;
vector<string> nomeslist;
vector<int> nota1list;
vector<int> nota2list;
using namespace std;

void bubbleSort(vector<string> nomeslist, int n) {
    for (int i = 0; i < n - 1; i++) {
        // Últimos i elementos já estão no lugar
        for (int j = 0; j < n - i - 1; j++) {
            // Troca se o elemento encontrado for maior que o próximo elemento
            if (nomeslist[j] > nomeslist[j + 1]) {
                // Troca arr[j] e arr[j + 1] usando std::swap
                swap(nomeslist[j], nomeslist[j + 1]);
            }
        }
    }
}

int main(){

cout << "Forneça o tamanho da turma: ";
cin >> alunlim;
cout << endl;

int loop = 0;
cout << "Digite o nome e a nota dos alunos:" << endl;
cout << endl;
while(loop < alunlim){
    cout << "Digite o nome e a nota do aluno:" << endl;    
    cout << "Nome: ";
    cin >> nome;
    cout << "Primeira nota: ";
    cin >> nota1;
    cout << "Segunda nota: ";
    cin >> nota2;
    nomeslist.push_back(nome);
    nota1list.push_back(nota1);
    nota2list.push_back(nota2);
    cout << endl;
    loop++;
}


int n = nomeslist.size();
for (int i = 0; i < n; i++){
    cout << nomeslist[i] << endl;
}

bubbleSort(nomeslist,n);
for (int i = 0; i < n; i++){
    cout << nomeslist[i] << endl;
}
return 0;
}