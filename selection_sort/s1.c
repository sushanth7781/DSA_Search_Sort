#include<stdio.h>
int main(){
    int array[]={64,34,25,12,22,11,91,5};
    int n=sizeof(array)/sizeof(array[0]);
    for (int i=0;i<n;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++)
        {
            if(array[j]<array[min_index]){
                min_index=j;
            }
        }
        int temp=array[i];
        array[i]=array[min_index];
        array[min_index]=temp;
    }
    printf("sorted array:");
    for(int i=0;i<n;i++){
        printf("%d",array[i]);
     
    }
printf("\n");

    

}