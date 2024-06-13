#include <stdio.h>
#include <stdlib.h>

int main()
{
int a = 10;
long int result =1;
if(a < 0){
    printf("Error");
}
else{
    for(int i=2;i<=a;i++){
        result *= i;
        printf("Factorial of %d = %li", a,result);
        printf("\n");
    }
}



    return 0;
}
