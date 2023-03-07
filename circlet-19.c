#include<stdio.h>
int main (){
    int a,b,s;
    for(a=5;a>=1;a--)
    {
        for(b=1;b<=a;b++)
        {
            printf("%d",b);
        }
        for(s=a;s<5;s++)
        {
            printf(" ");
        }
        for(s=a;s<5;s++)
        {
            printf(" ");
        }
        for(b=a;b>=1;b--)
        {
            printf("%d",b);
        }
        printf("\n");
    }
    for(a=2;a<=5;a++)
    {
      for(b=1;b<=a;b++)
      {
          printf("%d",b);
      }
      for(s=a;s<5;s++)
      {
          printf(" ");
      }
      for(s=a;s<5;s++)
      {
          printf(" ");
      }
      for(b=a;b>=1;b--)
      {
          printf("%d",b);
      }
      printf("\n");
    }
    return 0;
}
