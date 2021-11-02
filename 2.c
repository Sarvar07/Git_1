#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// катта ва кичикни аниклаш функцияси

int kattasi(int son1, int son2);
int kichkinasi(int son1, int son2);

int main(){

    int natija_katta, natija_kichik;

    natija_katta = kattasi(1, 2);
    natija_kichik = kichkinasi(1, 2);

    printf("Natija katta: %d\n", natija_katta);
    printf("Natija kichik: %d\n", natija_kichik);

    return 0;
}

int kattasi(int son1, int son2){
    if(son1>son2){
        return son1;
    } else {
        return son2;
    }
}

int kichkinasi(int son1, int son2){
    if(son1<son2){
        return son1;
    } else {
        return son2;
    }
}