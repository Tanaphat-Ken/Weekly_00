//จงเขียนฟังก์ชั่นเพื่อหาว่าตัวเลขที่รับเข้ามาเป็นจำนวนเฉพาะหรือไม่ (Level 3)
#include <stdio.h>
int isPrime(int x)
{
    int i = 2, j = 0;
    if (x == 0 || x == 1)
        return 0;
    while (i < x/2)
    {
        if (x % i == 0)
        {
            j++;
        }
        i++;
    }
    if (j == 0)
        return 1;
    else
        return 0;
}
int main()
{
    int x;
    scanf("%d", &x);
    if (isPrime(x) == 1) printf("Prime Number");
    else printf("Not Prime Number");
    return 0;
}