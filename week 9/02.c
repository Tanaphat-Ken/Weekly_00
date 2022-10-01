#include<stdio.h>
//จงเขียนโปรแกรมเพื่อรับทิศทางการหมุนของลูกเต๋า แล้วคำนวนหาตำแหน่งสุดท้ายของลูกเต๋าและแสดงแต้มด้านบนของลูกเต๋า (Level 5)

int main()
{
    char move[100];
    int i=0,t=1,f=2,l=3,b=5,r=4,d=6;
    printf("ENTER YOUR MOVE : ");
    scanf("%s",move);
    while(move[i]!='\0')
    {
        if(move[i]=='F')
        {
            f = f*t*b*d;
            d = f/t/b/d;
            b = f/t/b/d;
            t = f/t/b/d;
            f = f/t/b/d;
        }
        if(move[i]=='B')
        {
            f = f*t*b*d;
            t = f/t/b/d;
            b = f/t/b/d;
            d = f/t/b/d;
            f = f/t/b/d;
        }
        if(move[i]=='L')
        {
            f = f*r*b*l;
            l = f/r/b/l;
            b = f/r/b/l;
            r = f/r/b/l;
            f = f/r/b/l;
        }
        if(move[i]=='R')
        {
            f = f*r*b*l;
            r = f/r/b/l;
            b = f/r/b/l;
            l = f/r/b/l;
            f = f/r/b/l;
        }
        if(move[i]=='C')
        {
            t = t*r*d*l;
            r = t/r/d/l;
            d = t/r/d/l;
            l = t/r/d/l;
            t = t/r/d/l;
        }
        if(move[i]=='D')
        {
            t = t*r*d*l;
            l = t/r/d/l;
            d = t/r/d/l;
            r = t/r/d/l;
            t = t/r/d/l;
        }
        i++;
    }
    printf("Top = %d",t);
    return 0;
}