#include <stdio.h>
#include "/usr/local/include/rand.h"

int main(){
	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	fy_rand(arr, 10);

	for(unsigned i = 0; i < 10; i++)
		printf("%d ", arr[i]);

	return 0;
}
