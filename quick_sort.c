#include <stdio.h>
void display(int arr[], int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
}
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int quick(int arr[], int low, int high){
    int pivot = arr[high];
    int i = (low-1);
    for(int j=low; j<=high; j++){
        if(arr[j] <= pivot){
            i++;
            swap(&arr[i], &arr[j]);
        }
        swap(&arr[i+1], &arr[high]);
    }
    return (i+1);
}
void quickSort(int arr[], int low, int high){
    if(low < high){
        int pi = quick(arr, low, high);
        quickSort(arr, low, pi-1);
        quickSort(arr, pi+1, high);
    }
}
int main(){
    int arr[100], i, n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements in the array: ");
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("Before sorting: \n");
    display(arr, n);
    quickSort(arr, 0, n-1);
    printf("\nAfter sorting: \n");
    display(arr, n);
    return 1;
}