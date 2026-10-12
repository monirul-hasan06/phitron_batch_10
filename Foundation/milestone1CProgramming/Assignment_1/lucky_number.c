/*
Given two numbers A
 and B
. Print all lucky numbers between A
 and B
 inclusive.

Note:

The Lucky number is any positive number that its decimal representation contains only 4 and 7.

For example: numbers 4, 7, 47 and 744 are lucky and numbers 5, 17 and 174 are not.

Input
Only one line containing two numbers A
and B
(1≤A≤B≤105)
.

Output
Print all lucky numbers between A
 and B
 inclusive separated by a space. If there is no lucky number print -1.

Examples
InputCopy
4 20
OutputCopy
4 7 
InputCopy
8 15
OutputCopy
-1
*/

#include<stdio.h>
    int main(){
        int A, B;
        scanf("%d %d", &A, &B);
            for(int i=A; i<=B; i++){
                if(i==4 || i==7){
                    printf("%d", i);
                }else{
                    printf("-1");
                }
            }
        return 0;
    }