#include <stdio.h>
// cocluida
int main(){
int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
    
scanf("%d %d %d %d %d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10);
printf("%d %d %d %d %d %d %d %d %d %d\n", n1, n2, n3, n4, n5, n6, n7, n8, n9, n10);

int soma1 = n1 + n2;
int soma2 = n2 + n3;
int soma3 = n3 + n4;
int soma4 = n4 + n5;
int soma5 = n5 + n6;
int soma6 = n6 + n7;
int soma7 = n7 + n8;
int soma8 = n8 + n9;
int soma9 = n9 + n10;

printf("%d %d %d %d %d %d %d %d %d\n", soma1, soma2, soma3, soma4, soma5, soma6, soma7, soma8, soma9);

int seg_soma1 = soma1 + soma2;
int seg_soma2 = soma2 + soma3;
int seg_soma3 = soma3 + soma4;
int seg_soma4 = soma4 + soma5;
int seg_soma5 = soma5 + soma6;
int seg_soma6 = soma6 + soma7;
int seg_soma7 = soma7 + soma8;
int seg_soma8 = soma8 + soma9;

 printf("%d %d %d %d %d %d %d %d\n", seg_soma1, seg_soma2, seg_soma3, seg_soma4, seg_soma5, seg_soma6, seg_soma7, seg_soma8);

int ter_soma1 = seg_soma1 + seg_soma2;
int ter_soma2 = seg_soma2 + seg_soma3;
int ter_soma3 = seg_soma3 + seg_soma4;
int ter_soma4 = seg_soma4 + seg_soma5;
int ter_soma5 = seg_soma5 + seg_soma6;
int ter_soma6 = seg_soma6 + seg_soma7;
int ter_soma7 = seg_soma7 + seg_soma8;

printf("%d %d %d %d %d %d %d\n", ter_soma1, ter_soma2, ter_soma3, ter_soma4, ter_soma5, ter_soma6, ter_soma7);

int qua_soma1 = ter_soma1 + ter_soma2;
int qua_soma2 = ter_soma2 + ter_soma3;
int qua_soma3 = ter_soma3 + ter_soma4;
int qua_soma4 = ter_soma4 + ter_soma5;
int qua_soma5 = ter_soma5 + ter_soma6;
int qua_soma6 = ter_soma6 + ter_soma7;

printf("%d %d %d %d %d %d\n", qua_soma1, qua_soma2, qua_soma3, qua_soma4, qua_soma5, qua_soma6);

int qui_soma1 = qua_soma1 + qua_soma2;
int qui_soma2 = qua_soma2 + qua_soma3;
int qui_soma3 = qua_soma3 + qua_soma4;
int qui_soma4 = qua_soma4 + qua_soma5;
int qui_soma5 = qua_soma5 + qua_soma6;

printf("%d %d %d %d %d\n", qui_soma1, qui_soma2, qui_soma3, qui_soma4, qui_soma5);

int sex_soma1 = qui_soma1 + qui_soma2;
int sex_soma2 = qui_soma2 + qui_soma3;
int sex_soma3 = qui_soma3 + qui_soma4;
int sex_soma4 = qui_soma4 + qui_soma5;

printf("%d %d %d %d\n", sex_soma1, sex_soma2, sex_soma3, sex_soma4);

int set_soma1 = sex_soma1 + sex_soma2;
int set_soma2 = sex_soma2 + sex_soma3;
int set_soma3 = sex_soma3 + sex_soma4;

printf("%d %d %d\n", set_soma1, set_soma2, set_soma3);

int oit_soma1 = set_soma1 + set_soma2;
int oit_soma2 = set_soma2 + set_soma3;

 printf("%d %d\n", oit_soma1, oit_soma2);

int nov_soma1 = oit_soma1 + oit_soma2;

printf("%d\n", nov_soma1);
    
 return 0;
}
