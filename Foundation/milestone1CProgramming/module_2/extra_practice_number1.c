/*
Take a number from user and check if its a even number or odd number.
*/
// solve 1

#include<stdio.h>
    int main(){
        int a;
        scanf("%d", & a);
        if(a%2==0){
            printf("The Number is Even!");
        }else{
            printf("The Number is Odd!");
        }
        return 0;
    }
