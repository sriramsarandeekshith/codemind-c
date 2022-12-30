#include<stdio.h>
int main()
{
    int phy,bio,math,chem,comp,total;
    scanf("%d%d%d%d%d",&phy,&chem,&bio,&math,&comp);
    total=(phy+chem+bio+math+comp)/5;
    if(total>=90)
    {
        printf("Grade A");
    }
    else if(total>=80 && total<90)
    {
        printf("Grade B");
    }
    else if(total>=70 && total<80)
    {
        printf("Grade C");
    }
    else if(total>=60)
    {
        printf("Grade D");
    }
    else if(total>=40 && total<60)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
}