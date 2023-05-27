#include<stdio.h>

void fun(int n)
{
    for(int i=1; i<n; i++)
    {
        printf("%d\n", i);
    }
}

int main()
{
    int n=11;
    scanf("%d", &n);
    fun(n);
    return 0;
}