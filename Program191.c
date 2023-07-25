#include <stdio.h>

void DisplayBinary(unsigned int iNo)
{
    int Digit = 0; 

    while(iNo != 0)
    {
        Digit = iNo % 2;
        printf("%d", Digit);
        iNo = iNo / 2;
    }
    printf("\n");
}

int main()
{
    unsigned int value = 11; 

    printf("Value in Decimal format is : %d\n", value);
    printf("Value in octal format is : %o\n", value);
    printf("Value in Hexadecimal format is : %x\n", value);

    DisplayBinary(value);

    return 0;
}
