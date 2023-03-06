#include <stdio.h>
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if(num % 2 == 0)
        printf("%d is evrn",num);
    else
        printf("%d is odd",num);
    
    return 0;
}
