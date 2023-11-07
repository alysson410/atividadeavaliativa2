#include <stdio.h>
#include <string.h>

int main(){

int matriz_a[2][16];
int matriz_b[2][16];
int matriz_resultado[2][16];
char operacao[10];
int i, j;

for(i = 0; i < 2; i++){
    for(j = 0; j < 17; j++){
        scanf("%d", &matriz_a[i][j]);
    }
}

for(i = 0; i < 2; i++){
    for(j = 0; j < 17; j++){
        scanf("%d", &matriz_b[i][j]);
    }
}

scanf("%s", operacao);

if(strcmp(operacao, "soma") == 0){
for(i = 0; i < 2; i++){
    for(j = 0; j < 16; j++){
        matriz_resultado[i][j] = matriz_a[i][j] + matriz_b[i][j];
        printf("%d ", matriz_resultado[i][j]);
    }
}printf("\n");

} else if(strcmp(operacao, "sub") == 0){
for(i = 0; i < 2; i++){
    for(j = 0; j < 16; j++){
        matriz_resultado[i][j] = matriz_a[i][j] - matriz_b[i][j];
        printf("%d ", matriz_resultado[i][j]);
    }
}printf("\n");

} else if(strcmp(operacao, "mult") == 0){
for(i = 0; i < 2; i++){
    for(j = 0; j < 16; j++){
        matriz_resultado[i][j] = matriz_a[i][j] * matriz_b[i][j];
        printf("%d ", matriz_resultado[i][j]);
    }
}printf("\n");

}

    return 0;
}