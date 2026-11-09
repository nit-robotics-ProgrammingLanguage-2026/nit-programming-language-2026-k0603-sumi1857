#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    if (n < 0)
    {
        printf("NG");
        return 0;
    }

    long long sum =0;
    
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("%lld", sum);
    return 0;
}
