#include <stdio.h>
#include <stdlib.h>
#include <string.h>



//108648


/*
primeiramente função ler um scanf para ver quantas linhas de informação teremos (C linhas)
partir o numero N em partes de tamanho f
multiplicar esse partes e printar o maior resultado





*/



long long funcaoProdutoMaximo(char *texto, int tamanho)
{
    int comprimento = strlen(texto);
    long long maximoProd = 0;

    for (int indice = 0; indice <= comprimento - tamanho; indice++) {
      
      
        long long produto = 1;

        for (int k = 0; k < tamanho; k++)
        {
            // Converter cada dígito e multiplicar
            produto *= (texto[indice + k] - '0');
        }

        if (produto > maximoProd) { 
        
        
            maximoProd = produto;
        }
    }

    return maximoProd;
}

int main()
{
    int casos;
    char sequencia[1001];
    int grupo;

    if (scanf("%d", &casos) != 1) 
    {
        //corta
        
        return 1;
    }

    while (casos--)
    {
        if (scanf("%s %d", sequencia, &grupo) != 2)
        {
           // igual ao de cima corta
            return 1;
        }
        printf("%lld\n", funcaoProdutoMaximo(sequencia, grupo));
    }

    return 0;
}
