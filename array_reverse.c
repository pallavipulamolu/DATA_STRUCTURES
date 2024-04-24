#include <stdio.h>
void reverseArray(int arr[], int start, int end)
{
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp; 
        start++;
        end--;
    }
}
void display(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d", arr[i]);
    }
}
int main(){
    int i, n, temp, arr[100];
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    reverseArray(arr, 0, n-1);
    display(arr,n);
    return 1;
}