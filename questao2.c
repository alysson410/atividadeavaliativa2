#include <stdio.h>
#include <string.h>

int main(){

int jogador[31];
int time1[31], time2[31];
char posicao;
double forca;
double forca_time1 = 0 , forca_time2 = 0;

scanf("%30[^\n]", time1);

for(int i = 0; i < 11; i++){
scanf(" %30[^;];%c;%lf", jogador, &posicao, &forca);

if(posicao == 'G'){
    forca_time1 += 8 * forca;
}else if(posicao == 'L'){
    forca_time1 += 10 * forca;
}else if(posicao == 'Z'){
    forca_time1 += 5 * forca;
}else if(posicao == 'V'){
    forca_time1 += 8 * forca;
}else if(posicao == 'M'){
    forca_time1 += 11 * forca;
}else if(posicao == 'A'){
    forca_time1 += 12 * forca;
}

}

scanf(" %30[^\n]", time2);

for(int i = 0; i < 11; i++){
scanf(" %30[^;];%c;%lf", jogador, &posicao, &forca);

if(posicao == 'G'){
    forca_time2 += 8 * forca;
}else if(posicao == 'L'){
    forca_time2 += 10 * forca;
}else if(posicao == 'Z'){
    forca_time2 += 5 * forca;
}else if(posicao == 'V'){
    forca_time2 += 8 * forca;
}else if(posicao == 'M'){
    forca_time2 += 11 * forca;
}else if(posicao == 'A'){
    forca_time2 += 12 * forca;
}

}printf("%s: %.2lf de forca\n", time1, forca_time1/100);
printf("%s: %.2lf de forca\n", time2, forca_time2/100);

if(forca_time1 > forca_time2){
    printf("%s eh mais forte\n", time1);
}else if(forca_time1 < forca_time2){
    printf("%s eh mais forte\n", time2);
}


    return 0;
}
