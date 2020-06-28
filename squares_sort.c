#include<stdio.h>
#include<time.h>
#include<math.h>

//You have a sorted array of integers. 
//Write a function that returns a sorted array containing the squares of those integers.

int main(){
	
	time_t t;
	int size;
	printf("Enter size of array:");
	scanf("%d",&size);
	int array[size];
	srand((unsigned) time(&t));
	int i;
	
	for(i=0;i<size;i++){
       array[i]=(rand()%15);
	}
	printf("Array=[");
	for(i=0;i<size;i++){
		printf("%d",array[i]);
		if(i<size-1){
			printf(",");
		}
	}
	printf("]\n");
	
	int k,l;
	for(k=0;k<size-1;k++){
		for(l=k+1;l<size;l++){
			if(array[k]>array[l]){
				int temp=array[l];
				array[l]=array[k];
				array[k]=temp;
			}
		}
	}
	
	int n;
	printf("Sorted=[");
	for(n=0;n<size;n++){
		printf("%d",array[n]);
		if(n<size-1){
			printf(",");
		}
	}
	printf("]");
	
	int m;
	for(m=0;m<size;m++){
		array[m]=array[m]*array[m];
	}
	printf("\nSquared array=[");
	for(m=0;m<size;m++){
		printf("%d",array[m]);
		if(m<size-1){
			printf(",");
		}
	}
	printf("]");
	
	return 0;
}
