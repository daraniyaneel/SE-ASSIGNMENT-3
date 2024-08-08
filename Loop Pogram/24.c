// 1 + 2 + 3 + 4 + 5 + ... + n

#include<stdio.h>
int main(){
    int n,a = 0,i;
    printf("Enter the value n : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        a += i;
    }
        printf("1+2+3+4....n = %d",a);
    
}
