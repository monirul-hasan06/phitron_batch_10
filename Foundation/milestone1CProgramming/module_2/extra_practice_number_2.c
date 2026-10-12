/*
Take a number from user and check if its a positive or negative number.
Explain if else ladder.
*/

#include<stdio.h>
    int main(){
        int a;
        scanf("%d", &a);
        if(a>=1){
            printf("The Number is Positive!");
        }
        else if(a==0){
            printf("The Number is Zero!");
        }
        else{
            printf("The Number is Negative!");
        }
        return 0;
    }