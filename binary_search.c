#include <stdio.h>
int binarySearch(int arr[], int left, int right, int x)
{
    while(left <= right){
        int mid = (left+right)/2;
        if(arr[mid] == x){
            return mid;
        }
        if(arr[mid] < x){
            left = mid+1;
        }else{
            right = mid-1;
        }
    }
    return -1;
}
int main()
{
    int arr[100];
    int n,i,key,index;
    printf("Size: ");
    scanf("%d", &n);
    printf("Elements: ");
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("Search Element: ");
    scanf("%d", &key);
    index = binarySearch(arr, 0, n-1, key);
    if(index == -1){
        printf("Not found");
    }else{
        printf("Found at %d", index+1);
    }
}