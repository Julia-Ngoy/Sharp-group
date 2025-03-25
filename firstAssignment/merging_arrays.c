#include<stdio.h>

int main (){

int N, X;


printf("Please enter your number of domestic animals :");
scanf("%d", &N);

char domesticAnimals[N][20];

printf("Please enter your %d domestic animals :\n", N);
int i;
 for (i=0; i<N; i++){
    scanf("%s", domesticAnimals[i]);
 }


printf("Please enter your number of wild animals :");
scanf("%d", &X);

char wildAnimals [X][20];

printf("Please enter your %d wild animals :\n", X);
int j;
 for (j=0; j<X; j++){
    scanf("%s", wildAnimals[j]);
 }

 char Animals[N+X][20];

 for (int i =0; i< N; i++){
    strcpy(Animals[i], domesticAnimals[i]);
 }

  for (int j =0; j < X; j++){
    strcpy(Animals[N+j], wildAnimals[j]);
 }


 printf("You have entered %d animals. Here is the list :\n", N+X);
 for (int m=0; m<N+X; m++) {
    printf("%s\n", Animals[m]);

 }


return 0;
}
