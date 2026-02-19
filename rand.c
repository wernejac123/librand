#include <stdio.h>
#include "rand.h"

int rand_num(int lower, int upper){
        return ((rand() % (upper - lower + 1)) + lower);
}

void fy_rand(int *arr, size_t n){
        /*fisher-yates shuffle algorithm*/
        srand((unsigned)time(NULL));

        for(size_t i = n-1; i > 0; i--){
                size_t j = (size_t)rand() % (i+1); /*random index from 0 to i*/
                swap(&arr[i], &arr[j]);
        }
}
