#include <stdio.h>
#include "sorting_alg.h"

int main(){
	printf("Hello, World!\n");

	int a[] = {5, 2, 10, 1, 8};
	int array_size = sizeof(a) / sizeof(a[0]);

	for(int i = 0; i < array_size; i++){
		printf("%d ", a[i]);
	}

	printf("\n\n");

	insertionSort(a, array_size);

	for(int i = 0; i < array_size; i++){
		printf("%d ", a[i]);
	}
}

//Functions
void insertionSort(int a[10], int array_size){
	for(int i = 0; i < array_size; i++){
		int key = a[i];
		int j = i - 1;
		while(j >= 0 && a[j] > key){
			a[j + 1] = a[j];
			j = j - 1;
		}
		a[j + 1] = key;
	}
}