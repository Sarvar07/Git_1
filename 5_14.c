#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

   int B=1, K=0, massiv[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    for(int i=K; i<13; i+=2){
        printf("massiv[%d] = ", i);
        printf("%d\n", massiv[i]);
    }
    printf("\n");
    for(int i=B; i<13; i+=2){
        printf("massiv[%d] = ", i);
        printf("%d\n", massiv[i]);
    }

    return 0;
}


