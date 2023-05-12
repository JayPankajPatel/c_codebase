#include <stdio.h>
#include <stdlib.h> //malloc, free
#include "utils.h"
#include <assert.h>
int main(){
    double *x= malloc(10);
    double *y= malloc(100);
    double *z= malloc(1000);
    int* ptr = calloc(sizeof(int), 10); 
    double chance[] = {1.0, 2.0}; 
     FOR_EACH_ITR(double, chance, 2){
        printf("%0.2f ", *ITR); 
    }


    FOR_EACH_ITR(int, ptr, 10){
        printf("%d ", *ITR); 
    }

    int cap = 0;
    int ball = 2;
    double a = 0.1;
    double b = 0.2;
    char alph = 'A'; 
    char beta = 'B';

    assert(MAX(cap, ball) == ball);
    assert(MAX(ball, cap) == ball);
    assert(MAX(b, a) == b);
    assert(MAX(a, b) == b);
    assert(MAX(alph, beta) == 'B');
    
    FREE_ALL(x, y, z, ptr); 
}
