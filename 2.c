#include <stdio.h>
#include <conio.h> 
int main()
{
    int num;
    printf("Enter a positive integer number: ");
    scanf("%d",&num);
    switch(num%2)
    {
        case 0:
            printf("%d is an EVEN number.\n",num);
            break;
        case 1:
            printf("%d is an ODD number.\n",num);
            break;
    }
    return 0;
}
