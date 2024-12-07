#include<iostream>
#include <string>
using namespace std;


int main(){
    int a;
    int b;
    string nome;


    cout << "exemplo inicial de aplicativo" << endl;
    cout << "digite o seu nome: ";
    //cin >> nome;
    getline(cin, nome);
    cout << "digita um numero: ";
    cin >> a; 
    cout << "digite outro numero :";
    cin >> b;
    cout << " fale " << nome << ", A soma dos numero e: " << a + b << endl;

    system("pause");
    return 0;
}