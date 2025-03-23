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

 printf("You have entered %d animals. Here is the list :\n", N+X);
 for (i=0; i<N; i++) {
    printf("%s\n", domesticAnimals[i]);

 }
for (j=0; j<X; j++){
    printf("%s\n", wildAnimals[j]);
}


}
