/*#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    for(int i=65; i<=65+N; i++)
    {
        for(int j=i; j<=i; j++)
        {
            printf("%c", j);
        }
        printf("\n");
    }


    return 0;
}*/

#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%c ", 65 + i);
        }
        printf("\n");
    }

    return 0;
}
