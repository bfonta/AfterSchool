#include <iostream>

using namespace std;

int main() {
    int N, input_num, maior, segundo_maior;
    cin >> N;
    
    cin >> maior; //Marcar o primeiro inteiro inicialmente como o maior.
    
    for (int i = 1; i < N; i++) { //Para os outros elementos da lista, marcar como
        cin >> input_num;         //o maior se for superior ao primeiro ou como o
        if (input_num > maior) {  //segundo maior se for menor que o primeiro.
            segundo_maior = maior;
            maior = input_num;
        }
        else if (input_num > segundo_maior) {
            segundo_maior = input_num;
        }
    }
    
    cout << segundo_maior << " " << maior << endl;
}
