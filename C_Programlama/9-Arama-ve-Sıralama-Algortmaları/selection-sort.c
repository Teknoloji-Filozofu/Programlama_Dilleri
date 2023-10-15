#include<stdio.h>

void selectionSort(int arr[], int n){
	int i;
	int j;
	int gecici;
	int min_index;
	
	for(i = 0; i < n; i++){
		min_index = i;
		for(j = i; j < n; j++){
			if(arr[j] < arr[min_index])
				min_index = j;
		}
		gecici = arr[i];
		arr[i] = arr[min_index];
		arr[min_index] = gecici;
	}
}
int main(){
	printf("SELECTION SORT\n\n");
	int array[] = {64,18,99,1,9,25};
	int n = sizeof(array) / sizeof(array[0]);
	printf("ilk degerler \n");
	int k;
	for(k = 0; k< n; k++)
		printf("%d ,", array[k]);
		
	selectionSort(array, n);
	
	printf("\n siralanan degerler \n");
	for(k = 0; k< n; k++)
		printf("%d ,", array[k]);
		
	return 0;
}
