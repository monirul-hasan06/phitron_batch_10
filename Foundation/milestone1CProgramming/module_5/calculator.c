#include<stdio.h>
int main()
{
    int A, B, result;
    char S;
    scanf("%d %c %d", &A, &S, &B);
    if(S=='+')
    {
        result = A + B;
    }
    else if(S=='-')
    {
        result = A - B;
    }
    else if(S=='*')
    {
        result = A * B;
    }
    else if(S== '/')
    {
        result = A/B;
    }

    printf("%d", result);
    return 0;
}
