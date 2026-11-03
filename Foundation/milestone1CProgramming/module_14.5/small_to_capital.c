#include<stdio.h>
    char small_to_capital(char val){
        
        char capital = val - 32;
        
        return capital;
    }
    int main(){
        char a;
        scanf("%c", &a);
        
        printf("%c", small_to_capital(a));

        return 0;
    }

/*Question: Make a function named small_to_capital() which 
will take a small alphabet as a parameter (which is a 
character) and it will convert that small alphabet to 
capital alphabet and return through that function. So, 
the return type will be char. Now in the main function 
take a character input which will be small alphabets and 
call that function to get the capital alphabet and print 
that in the main function.
Bonus: You can also try this with 4 different types of 
function use cases.
*/