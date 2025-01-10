#include<stdio.h>
int main(){
    int arr[]={64,34,12,22,11,90,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++)
    {
        int insertindex=i;
        int currentvalue=arr[i];
        int j=i-1;

        while(j>=0&&arr[j]>currentvalue){
            arr[j+1]=arr[j];
            insertindex=j;
            j--;
        }
        arr[insertindex]=currentvalue;
    }
    printf("sorted array:");
    for (int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}