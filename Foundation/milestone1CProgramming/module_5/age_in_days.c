#include<stdio.h>
int main()
{
    int N,days,months,years;
    scanf("%d", &N);

    years = N / 365;
    months = (N - years * 365) / 30;
    days = N - (years * 365 + months * 30);

    printf("%d years\n", years);
    printf("%d months\n", months);
    printf("%d days\n", days);

    return 0;
}
