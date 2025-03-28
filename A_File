#include <stdio.h>
#include <stdlib.h>
#include <math.h>



/**ler o N com um scanf. Este valor tem que estar obrigatoriamente entre 1 e 26. Este N serão quantas linhas terá o input
 * a cada linha tem uma letra maiuscula random que vai ser o "nome" e depois um numero positivo K que tem que estar entre 0<=K<= 10⁹
 * no final destas linhas temos que ter o intervalo a ser analizado. I e F são os nomes
 * 
 

*/

int lerDados(int *numN, int k[], char nomeletra[], int *I, int *F) {      
    const int MAX_N = 26;
    const int LIMITE_SUP = (int)pow(10, 9); 
    
    // Ler o número de pares
    if (scanf("%d", numN) != 1 || *numN < 1 || *numN > MAX_N) {
        return 0; //ocorreu um erro
    }
    
    // Ler os pares (letra e número)
    for (int j = 0; j < *numN; j++) {
        if (scanf(" %c %d", &nomeletra[j], &k[j]) != 2 || k[j] < 0 || k[j] > LIMITE_SUP) {
            return 0;  
        }
    }
    
    // Ler os limites I e F
    if (scanf("%d %d", I, F) != 2 || *I < 0 || *I > LIMITE_SUP || *F < 0 || *F > LIMITE_SUP) {
        return 0;
    }
    return 1;  //bem sucedido
}

void ordenarPares(int numN, int k[], char nomeletra[]) {
    for (int j = 0; j < numN - 1; j++) {   //nr de vezes que passa o array
        for (int i = 0; i < numN - j - 1; i++) {  // percorrer elementos até à posicao
            if (nomeletra[i] > nomeletra[i + 1]) {
                // Trocar as letras   char temp int tempk guarda o temporario em cada "ciclo"
                char temp = nomeletra[i];
                nomeletra[i] = nomeletra[i + 1];
                nomeletra[i + 1] = temp;
                // Trocar os números correspondentes
                int tempK = k[i];
                k[i] = k[i + 1];
                k[i + 1] = tempK;
            }
        }
    }
}

int contarMultiplos(int divisor, int I, int F) {
    if (I == 0)
        return F / divisor + 1;
    else
        return F / divisor - (I - 1) / divisor;
}

int main() {
    const int MAX_N = 26;
    int numN, k[MAX_N], I, F;
    char nomeletra[MAX_N];

    if (!lerDados(&numN, k, nomeletra, &I, &F)) {
        return 1;    // Se a leitura dos dados não for bem-sucedida (lerDados retorna 0), então termina o programa com um código de saída igual a 1, sinalizando erro.
    }

    ordenarPares(numN, k, nomeletra);

    for (int j = 0; j < numN; j++) {
        int cont = contarMultiplos(k[j], I, F);
        printf("%c %d\n", nomeletra[j], cont);
    }
    return 0;
}
