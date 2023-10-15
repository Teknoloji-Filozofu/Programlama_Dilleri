#include<stdio.h>

void bubbleSort(int arr[], int n){
	int i;
	int j;
	int gecici;
	
	for(i = 1; i < n; i++){
		for(j = 0; j < n - i; j++){
			if(arr[j] > arr[j+1]){
				gecici = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = gecici;
			}
		}
	}
}
int main(){
	printf("BUBBLE SORT\n\n");
	int array[] = {64,18,99,1,9,25};
	int n = sizeof(array) / sizeof(array[0]);
	printf("ilk degerler \n");
	int k;
	for(k = 0; k< n; k++)
		printf("%d ,", array[k]);
		
	bubbleSort(array, n);
	
	printf("\n siralanan degerler \n");
	for(k = 0; k< n; k++)
		printf("%d ,", array[k]);
		
	return 0;
}
