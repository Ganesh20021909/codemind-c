#include<stdio.h>
int main()
{
    float fa,ce;
    scanf("%f",&ce);
    //ce=(fa-32)*5/9;
    fa = ce*1.8+32;
    printf("%.2f",fa);
    return 0;
}