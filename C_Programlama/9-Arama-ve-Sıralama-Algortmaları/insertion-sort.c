#include<stdio.h>

void insertionSort(int arr[], int n){
	int i;
	int j;
	int key;
	
	for(i = 1; i < n; i++){
		key = arr[i];
		j = i - 1;
		
		while ( j >= 0 && arr[j] > key)
		{
			arr[j +1] = arr[j];
			j -= 1;
		}
		
		arr[j+1] = key;
	}
	
	
}
int main(){
	printf("INSERTION SORT\n\n");
	int array[] = {64,18,99,1,9,25};
	int n = sizeof(array) / sizeof(array[0]);
	printf("ilk degerler \n");
	int k;
	for(k = 0; k< n; k++)
		printf("%d ,", array[k]);
		
	insertionSort(array, n);
	
	printf("\n siralanan degerler \n");
	for(k = 0; k< n; k++)
		printf("%d ,", array[k]);
		
	return 0;
}
