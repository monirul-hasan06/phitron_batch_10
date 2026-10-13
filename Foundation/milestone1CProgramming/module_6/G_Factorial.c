#include<stdio.h>
    int main(){
        int t;
        scanf("%d", &t);
        while(t--){
            int n;
            long long int fac;
            scanf("%d", &n);
            if(n==0){
                fac=1;
                printf("%lld", fac);
                printf("\n");
            }else{
                fac =1;
                for(int i=1; i<=n; i++){
                fac = fac*i;
            }
            printf("%lld", fac);
            printf("\n");
            }
        }
        return 0;
    }