#include<stdio.h>
//จงเขียนโปรแกรม Copy ไฟล์ข้อมูลโดยให้นักศึกษาป้อนข้อมูลของไฟล์ต้นทาง และข้อมูลไฟล์ปลายทาง (Level 4)

int main()
{
    FILE *fp1,*fp2;
    char filename[100], ch;
    printf("Enter the filename (READ) : ");
    scanf("%s", filename);
    fp1 = fopen(filename,"r");
    printf("Enter the filename (WRITE) : ");
    scanf("%s", filename);
    fp2 = fopen(filename,"w");
    while((ch=fgetc(fp1))!=EOF)
    {
        fputc(ch,fp2);
    }
    printf("COPIED");
    return 0;
}