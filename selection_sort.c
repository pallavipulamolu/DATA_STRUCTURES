#include <stdio.h>
void display(int a[], int n){
    for(int i=0;i<n;i++){
        printf("%d ", a[i]);
    }
}
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selectionSort(int a[], int size){
    for(int step=0; step<size-1; step++){
        int min_idx = step;
        for(int i=step+1; i<size; i++){
            if(a[i] < a[min_idx]){
                min_idx = i;
            }
        }
        swap(&a[min_idx], &a[step]);
    }
}
int main(){
    int a[100], n, key, flag;
    printf("Enter no of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(int i=0;i<n;i++){
        scanf("%d ", &a[i]);
    }
    printf("Before sorting: ");
    display(a,n);
    selectionSort(a,n);
    printf("After sorting: ");
    display(a,n);
    return 1;
}