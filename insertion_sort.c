#include <stdio.h>
void display(int a[], int n){
    for(int i=0;i<n;i++){
        printf("%d ", a[i]);
    }
}
void insertionSort(int a[], int n){
    int i,j,key;
    for(i=1;i<n;i++){
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1] = a[j];
            j=j-1;
        }
        a[j+1] = key;
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
    printf("Before Sorting: ");
    display(a,n);
    insertionSort(a,n);
    printf("After sorting: ");
    display(a,n);
    return 1;
}