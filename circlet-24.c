#include <stdio.h>

int main()
{
    int r,c,s;
    
    for(r=5;r>=1;r--){
        for(s=r;s>1;s--){
            printf(" ");
        }
        for(c=5;c>=r;c--){            
            printf("%d",c);
        }
        for(c=r+1;c<=5;c++){
            printf("%d",c);
        }
        printf("\n");
    }
    return 0;
}
