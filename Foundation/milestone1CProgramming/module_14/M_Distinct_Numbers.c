// #include <stdio.h>
// int countDistinct(int arr[], int n) {
//     int count = 0;
//     int fre[2001] = {0};
//     for(int i=0; i<n; i++){
//         fre[arr[i]]++;
//     }

//     for(int i=0; i<=2000; i++){
//         if(fre[i]!=0){
//             count++;
//         }
//     }
//     return count; 
// }

// int main() {
//     int n, i;
//     scanf("%d", &n);

//     int arr[1001];
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     printf("%d", countDistinct(arr, n));
//     return 0;
// }

#include <stdio.h>

void unick_number(int a[], int n)
{
    int distinct = 0;
    for (int i = 0; i < n; i++)
    {
        int unick = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                unick = 0;
                break;
            }
        }
        if (unick == 1)
        {
            distinct++;
        }
    }
    printf("%d", distinct);
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    unick_number(a, n);

    return 0;
}

// #include <stdio.h>

// void distinct(int n, int a[])
// {
//     int count = 1;
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (a[i] > a[j])
//             {
//                 int temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }
//     for (int i = 1; i < n; i++)
//     {
//         if (a[i] != a[i - 1])
//         {
//             count++;
//         }
//     }

//     if (n == 0)
//     {
//         printf("0");
//     }
//     else
//     {
//         printf("%d\n", count);
//     }
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     distinct(n, a);
//     return 0;
// }
// // void printArray(int arr[], int n)
// // {
// //     for(int i = 0; i < n; i++)
// //     {
// //         printf("%d ", arr[i]);
// //     }
// // }

// // int main()
// // {
// //     int arr[] = {10, 20, 30, 40, 50};

// //     printArray(arr, 5);

// //     return 0;
// // }