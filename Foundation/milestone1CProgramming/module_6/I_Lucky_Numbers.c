#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int last_Digit = n%10;
    int first_Digit = n/10;

    if(last_Digit%first_Digit==0 || first_Digit%last_Digit==0){
        printf("YES");
    }else{
        printf("NO");
    }

    return 0;
}