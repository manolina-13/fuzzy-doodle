#include<stdio.h>
void swap(int *x ,int *y){
    int z;
    z=*x;
    *x=*y;
    *y=z;
}

void Bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }

}

int main (){
    int n;
    printf("Enter the number of elements to be sorted:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    Bubblesort(arr,n);
    printf("The sorted elements are:");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
