#include<stdio.h>
    int main(){
        int arr[5];
        for(int i=0; i<5; i++){
            scanf("%d", &arr[i]);
        }
        for(int i=0; i<5; i++){
            if(arr[i]==1999){
                printf("Correct\n");
                break;
            }else{
                printf("Wrong\n");
            }
        }
        return 0;
    }
