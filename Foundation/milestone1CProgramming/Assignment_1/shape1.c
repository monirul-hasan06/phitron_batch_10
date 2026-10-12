/**
 * memory limit per test256 megabytes
Given a number N. Print a face down right angled triangle that has N rows.

For more clarification see the example below.

Input
Only one line containing a number N (1 ≤ N ≤ 99).

Output
Print the answer according to the required above.

Example
InputCopy
4
OutputCopy
****
***
**
*
Note
Don't print any extra spaces after symbol " * ".
 */

#include <stdio.h>
    int main(){
        int N;
        scanf("%d", &N);
        for(int i = 0; i<N; i++){
            for(int j=i+1; j<N; j++){
                printf("*");
                printf("\n");
            }
        }
        return 0;
    }