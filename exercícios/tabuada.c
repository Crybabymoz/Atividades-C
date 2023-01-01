#include <stdio.h>
// exercicio 10 da lista 1 de IPC
//tabuada
int main() {
//iniciamos a variavel no 0 
    int x, y,tabuada = 0;
//pedimos ao usuario qual tabuada ele quer 
    scanf("%i", &tabuada);
//no comando nossa variavel comeca no 1 e vai ate o 10
    for(x=1; x<=10; x++){
//na funcao o numero da tabuada multiplica pela sequencia de 1 a 10
        printf("%d x %d = %d\n",tabuada, x, x * tabuada);
//imprimimos o numero da tabuada e depois a divisao 
//1 x 4 = 4
    }

    return 0;
}