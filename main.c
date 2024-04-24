#include <stdio.h>
int linearSearch( int arr[], int n, int key){
    int i, flag=0;
    for(i=0;i<n;i++){
        if(arr[i] == key){
            flag = 1;
            printf("%d is found", key);
            break;
        }
    }
    if(flag == 0){
        printf("%d is not found", key);
    }
}

int main(){
    int a[100], i, n, key;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the %d elements: ", n);
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the search element: ");
    scanf("%d", &key);
    linearSearch(a,n,key);
}
