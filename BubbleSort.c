#include <stdio.h>

int main(){
    int n,temp=0;
    int data[100];
    printf("len:(<100)");
    scanf("%d",&n);
    printf("Please input %d numbers:",n);
    for(int i=0;i<n;i++){
        scanf("%d",&data[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(data[j]>data[j+1]){
                temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
            }
        }
    }
    printf("After sorting: ");
    for(int i=0;i<n;i++){
        printf("%d ",data[i]);
    }
    
    
    
    return 0;
}