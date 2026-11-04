#include<stdio.h>
    int main(){
        int T;
        scanf("%d", &T);
        while(T--){
            int M1, M2, D, Dm1, Dm1m2, TW;
            scanf("%d %d %d", &M1, &M2, &D);

            TW =  M1 * D;

            Dm1 = TW / M1;
            Dm1m2 = TW / (M1 + M2);

            int fewDays = Dm1 - Dm1m2;
            printf("%d\n", fewDays);

        }
        return 0;
    }