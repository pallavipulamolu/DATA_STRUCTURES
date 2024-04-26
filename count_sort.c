#include <stdio.h>
void display(int a[], int n){
    for(int i=0;i<n;i++){
        printf("%d", a[i]);
    }
}
void countSort(int a[], int n){
    int output[20];
    int max=a[0];
    for(int i=1; i<n; i++){
        if(a[i] > max){
            max = a[i];
        }
    }
    int count[10];
    for(int i=0; i<= max; i++){
        count[i]=0;
    }
    for(int i=0;i<n;i++){
        count[a[i]]++;
    }
    for(int i=1;i<=max;i++){
        count[i] += count[i-1];
    }
    for(int i=n-1; i>=0; i++){
        output[count[a[i]]-1] = a[i];
        count[a[i]]--;
    }
    for(int i=0;i<n;i++){
        a[i] = output[i];
    }
}
int main(){
    int a[100], i, n;
    printf("Enter no of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d ", &a[i]);
    }
    printf("Before sorting: ");
    display(a,n);
    countSort(a,n);
    printf("After sorting: ");
    display(a,n);
}