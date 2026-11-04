// #include<stdio.h>
// #include<limits.h>
//     int main(){
//         int n;
//         scanf("%d", &n);
//         int arr[n];
//         for(int i=0; i<n; i++){
//             scanf("%d", &arr[i]);
//         }

//         int low = INT_MAX;
//         int pos;
//         for(int i=0; i<n; i++){
//                 if(arr[i] < low){
//                 low = arr[i];
//                 pos = i+1;
//             }
//         }
//             printf("%d ", low);
//             printf("%d ", pos);
//         return 0;
//     }

#include<stdio.h>

    int main(){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i=0; i<n; i++){
            scanf("%d", &arr[i]);
        }

        int low = arr[0];
        int pos = 1;
        for(int i=1; i<n; i++){
                if(arr[i] < low){
                low = arr[i];
                pos = i+1;
            }
        }
            printf("%d ", low);
            printf("%d\n", pos);
        return 0;
    }