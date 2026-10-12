/*Given a number N. Print a pyramid that has N rows.
For more clarification see the example below.
Input
Only one line containing a number N (1≤N≤99).
Output
Print the answer according to the required above.
Example
InputCopy
4
OutputCopy
   *
  ***
 *****
*******
Note
Don't print any extra spaces after symbol "*".
*/
#include<stdio.h>
    int main(){
    int N,i,j;
    scanf("%d", &N);
    for(i=N; i<0; i--){
        for(j=0; j<N; j++){
            printf("*");
        }
            printf("\n");
    }
    return 0;
    }
