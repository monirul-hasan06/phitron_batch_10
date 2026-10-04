/*
Extra Practice Problem:
1. Explain why we need long long int data type? 
2. Write all the rules for naming a variable in C programming.
3. Write a C program that will take 2 numbers from the user and then print the 2nd number first and then first number.  

Note: এই এক্সট্রা প্রাকটিস প্রব্লেম সাবমিট করতে হবে না। আপনারা নিজেরা প্রাকটিস করবেন। যদি প্রব্লেম গুলো বুঝতে না পারেন, তাহলে সাপোর্ট সেশন জয়েন করে ক্লিয়ার হয়ে নিবেন।
*/

/*
Solve:
1.
We need long long integer data type because,
    We know,
    1 byte = 8 bit;
    integer data type can hold 4 bytes data which is 4 * 8 = 32 bit;
    if our data is more than 32 bit. integer data type can't take it. But
    long long integer can take more than integer data type. So to solve this
    we need long long integer data type.

2.  Rules for naming variable in C programming:
        i. variable name can start with letter or _
        ii. variable name can't start spacial charecter like #, @ or numbers.
        iii. In variable name there dont use space.
*/
// 3.
#include<stdio.h>
        int main(){
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d %d\n", a,b);
        printf("%d", a);
        return 0;
        }