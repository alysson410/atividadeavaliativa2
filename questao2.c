#include <stdio.h>
#include <string.h>

int main(){

int jogador[31];
int time1[31], time2[31];
char posicao;
float forca;
float forca_time1 = 0 / 100, forca_time2 = 0 / 100;

scanf("%s", time1);

for(int i = 0; i < 11; i++){
scanf("%s %c %f", jogador, &posicao, &forca);

if(posicao == 'g'){
    forca_time1 += 8 * forca;
}else if(posicao == 'l'){
    forca_time1 += 10 * forca;
}else if(posicao == 'z'){
    forca_time1 += 5 * forca;
}else if(posicao == 'v'){
    forca_time1 += 8 * forca;
}else if(posicao == 'm'){
    forca_time1 += 11 * forca;
}else if(posicao == 'a'){
    forca_time1 += 12 * forca;
}

}

scanf("%s", time2);

for(int i = 0; i < 11; i++){
scanf("%s %c %f", jogador, &posicao, &forca);

if(posicao == 'g'){
    forca_time2 += 8 * forca;
}else if(posicao == 'l'){
    forca_time2 += 10 * forca;
}else if(posicao == 'z'){
    forca_time2 += 5 * forca;
}else if(posicao == 'v'){
    forca_time2 += 8 * forca;
}else if(posicao == 'm'){
    forca_time2 += 11 * forca;
}else if(posicao == 'a'){
    forca_time2 += 12 * forca;
}

}printf("%s: %.2f de forca\n", time1, forca_time1);
printf("%s: %.2f de forca\n", time2, forca_time2);

if(forca_time1 > forca_time2){
    printf("%s eh mais forte\n", time1);
}else(forca_time1 < forca_time2){
    printf("%s eh mais forte\n", time2);
}


    return 0;
}
