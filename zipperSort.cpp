#include <stdio.h>
#include <stdlib.h>


int compare(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}

void specialSort(int arr[], int n){
    
    qsort(arr, n, sizeof(int), compare);

    int result[n];
    int left = 0, right = n - 1;

    int i = 0, j = n - 1;


    while(i <= j){
        if(i == j){
            result[left] = arr[i];
            break;
        }

        result[left++] = arr[i++];   
        result[right--] = arr[j--];  
    }

    
    printf("Final array:\n");
    for(int k = 0; k < n; k++){
        printf("%d ", result[k]);
    }
}

int main(){
    int arr[] = {5, 2, 9, 1, 7, 3};
    int n = 6;

    specialSort(arr, n);

    return 0;
}