#include<stdio.h>
//จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นรูปผีเสื้อที่มีขนาดของปีกแต่ละข้างเท่ากับตัวเลขที่รับเข้ามา ดังตัวอย่าง (Level 3)

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=(2*n)-1;i++)
    {
        for(int j=1;j<=(2*n)-1;j++)
        {
            if(i>=j&&i+j<=2*n||j>=i&&i+j>=2*n)
            {
                printf("*");
            }
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}