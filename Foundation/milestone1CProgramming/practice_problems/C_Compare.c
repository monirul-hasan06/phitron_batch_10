#include <stdio.h>
#include <string.h>

int main(){
    char x[21], y[21];

    scanf("%20s %20s", x, y);

    if(strcmp(x, y) <= 0){
        printf("%s\n", x);
    }
    else{
        printf("%s\n", y);
    }

    return 0;
}
