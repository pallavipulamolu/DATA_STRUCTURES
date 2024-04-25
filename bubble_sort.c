#include <stdio.h>
void display(int a[], int n)
{
    for(int i=0;i<n;i++){
        printf("%d ", a[i]);
    }
}
void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubbleSort(int a[], int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j] > a[j+1]){
                swap(&a[j], &a[j+1]);
            }
        }
    }
}
int main(){
    int a[100], n;
    printf("n: ");
    scanf("%d", &n);
    printf("Elements: ");
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    printf("Before sorting: ");
    display(a,n);
    bubbleSort(a,n);
    printf("After sorting: ");
    display(a,n);
    printf("\n");
    return 1;
}