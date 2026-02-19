#ifndef RAND_H
#define RAND_H
#include <stddef.h>
#include <stdlib.h>
#include <time.h>

#define SEED()\
do{\
	srand((unsigned)time(NULL));\
}while(0)

int rand_num(int lower, int upper);
void fy_rand(int *arr, size_t n); /*fisher-yates shuffle algorithm*/

static inline void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

#endif
