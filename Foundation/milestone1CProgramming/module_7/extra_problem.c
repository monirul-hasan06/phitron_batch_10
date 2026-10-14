/*
Take an array from input and print all the even numbers of that array.
Take an array from input and count how many odd numbers are present in that array.
Take an array from input and print the maximum value of that array.
Take an array from input and print the minimum value of that array.

*/
#include<stdio.h>
    int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            printf("%d ", arr[i]);
        }
    }
    return 0;
    }