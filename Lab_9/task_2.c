/*-------------------------------------------------------------------------------- 
  Author        :  Haseeb-ul-hassan
  Roll No       :  2022MC58
  Dated         :  16/10/23
  Purpose       :  Task 9_1 to get know about the loops
                    and print the table of given number
  Disclaimer    :  open source Code has been writen for educational purpose only 
  -------------------------------------------------------------------------------*/
#include<stdio.h>
void table(int);
void main()
{
    int a=0;
    printf("enter a number >>");
    scanf("%d",&a);
    table(a);
}
void table(int d)
{
    int c=1,f=0;
    while (c<11)
    {
        f=d*c;
        printf("%d*%d=%d\n",d,c-1,f,++c);
    }
}