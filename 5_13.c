#include <stdio.h>
#include <math.h>
#include <time.h>

int main(){

    int n;
    
    printf("toq son kiriting ");
    scanf("%d",&n);

    

    for(int i=n-1; i>=0; i--){
        printf("\n[%d] = %d\n", i, (i--));
    }


    return 0;
}