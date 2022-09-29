#include<stdio.h>
//จงเขียนฟังก์ชั่นเพื่อหาตัวเลขที่มีค่ามากที่สุดจากอินพุทตัวเลข 2 ตัว (Level 3)
int max(int a ,int b)
{
    a>b ? printf("%d",a): printf("%d",b);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    max(a,b);
    return 0;
}