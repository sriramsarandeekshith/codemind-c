#include<stdio.h>
int main()
{
    int units;
    scanf("%d",&units);
    float bill,tb;
    if(units<200)
    {
        bill=units*1.20;
        
    }
    else if(units>=200 && units<400)
    {
        bill=units*1.50;
    }
    else if(units>=400 && units<600)
    {
        bill=units*1.80;
    }
    else if(units>=600)
    {
        bill=units*2.00;
    }
     if(bill>400)
     {
         tb=bill+bill*0.15;
     }
     else
     {
         tb=bill+ 100; 
     }
     printf("%0.2f",tb);
}