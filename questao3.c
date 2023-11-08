#include <stdio.h>
#include <string.h>

int main(){

int matriz_a[4][4];
int matriz_b[4][4];
int matriz_resultado[4][4] = {{0,0,0,0}, {0,0,0,0}, {0,0,0,0}, {0,0,0,0}};
char operacao[10];
int i, j;

for(i = 0; i < 4; i++){
    for(j = 0; j < 4; j++){
        scanf("%d", &matriz_a[i][j]);
    }
}

for(i = 0; i < 4; i++){
    for(j = 0; j < 4; j++){
        scanf("%d", &matriz_b[i][j]);
    }
}

scanf("%s", operacao);

if(strcmp(operacao, "soma") == 0){
for(i = 0; i < 4; i++){
    for(j = 0; j < 4; j++){
        matriz_resultado[i][j] = matriz_a[i][j] + matriz_b[i][j];
        printf("%4d", matriz_resultado[i][j]);
    }printf("\n");
}

} else if(strcmp(operacao, "sub") == 0){
for(i = 0; i < 4; i++){
    for(j = 0; j < 4; j++){
        matriz_resultado[i][j] = matriz_a[i][j] - matriz_b[i][j];
        printf("%4d", matriz_resultado[i][j]);
    }printf("\n");
}

} else if(strcmp(operacao, "mult") == 0){
for(i = 0; i < 4; i++){
    for(j = 0; j < 4; j++){
        for(int k = 0; k < 4; k++){
            matriz_resultado[i][j] += matriz_a[i][k] * matriz_b[k][j];
        }
        
        printf("%4d", matriz_resultado[i][j]);
    }   

    printf("\n");
    }

}

    return 0;
}