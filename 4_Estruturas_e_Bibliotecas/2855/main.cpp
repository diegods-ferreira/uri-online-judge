#include <iostream>
#include <stdlib.h>
#include <time.h>
 
using namespace std;

int *sequencia;
int tamanho_sequencia;

void identifcar_elementos(int *, int, int);
void remover_elementos(int *);
 
int main() {

	/*
		-> ID DO PROBLEMA 2855
        O que eu entendi do problema foi que temos que ir executando as passadas e removendo os n ésimos elementos
        até que o tamanho da sequencia seja menor que a próxima passada a ser realizada. Ao final, verificamos se
        o número chave está dentro da sequencia restante. Se estiver, é o número sortudo (Y), senão é o azarado (N).
	*/

    int chave;

    cin >> tamanho_sequencia;

    if (tamanho_sequencia > 0 && tamanho_sequencia < 305000)
    {
        sequencia = new int[tamanho_sequencia];
        for (int i = 0; i < tamanho_sequencia; i++)
            cin >> sequencia[i];
        

        cin >> chave;

        if (chave > 0 && chave < 305000)
        {
            int passada = 2;
            while (tamanho_sequencia >= passada) {
                identifcar_elementos(sequencia, passada, chave);
                remover_elementos(sequencia);
                passada++;
            }
        }
    }    

    char saida = 'N';
    for (int i = 0; i < tamanho_sequencia; i++)
        if (sequencia[i] == chave) {
            saida = 'Y';
            break;
        }
    
    cout << endl << saida << endl;

    delete sequencia;
    system("pause"); 
    return 0;
}

void identifcar_elementos(int *seq, int passada, int chave) {
    int i = 0;
    int aux = 0;
    while (i < tamanho_sequencia) {
        aux++;
        if (aux == passada) {
            sequencia[i] = -1;
            aux = 0;
        }
        i++;
    }
}

void remover_elementos(int *seq) {
    for (int i = 0; i < tamanho_sequencia; i++) {
        if (seq[i] == -1) {
            if (i != (tamanho_sequencia - 1)) {
                for(int k = i; k < (tamanho_sequencia - 1); k++)
                    seq[k] = seq[k + 1];
            }
        tamanho_sequencia--;
        }
    }
}