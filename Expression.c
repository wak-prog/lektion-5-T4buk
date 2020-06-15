#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main(){
int a;
int b;
int c;
int d;
int summe;
int ab;
int cd;
printf("Bitte Zahl a eingeben: \n");
scanf("%d",&a);
printf("Bitte Zahl b eingeben: \n");
scanf("%d",&b);
printf("Bitte Zahl c eingeben: \n");
scanf("%d",&c);
printf("Bitte Zahl d eingeben: \n");
scanf("%d",&d);
ab = a*b;
cd = c*d;
summe = ab+cd;
printf("Die Summe ist:");
printf("%d",summe);

return EXIT_SUCCESS;

}