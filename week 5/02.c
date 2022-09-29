//จงเขียนฟังก์ชั่นเพื่อหาว่าตัวเลขที่รับเข้ามาเป็นจำนวนเฉพาะหรือไม่ (Level 3)
#include <stdio.h>
int isPrime(int x)
{
    int j = 0;
    if (x == 0 || x == 1)
        return 0;
    for (int i=2 ; i <= x/2 ; i++)
    {
        if (x % i == 0)
        {
            j=1;
            break;
        }
        if (j == 0)
            return 1;
    }
}
int main()
{
    int x;
    scanf("%d", &x);
    if (isPrime(x) == 0) printf("Not Prime Number");
    else printf("Prime Number");
    return 0;
}