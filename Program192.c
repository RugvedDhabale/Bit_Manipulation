#include <stdio.h>

typedef unsigned int UINT;

int Count0nBits(UINT iNo)
{
    int iCnt = 0; 
    int iDigit = 0; 

    while(iNo != 0)
    {
        iDigit = iNo % 2; 
        iCnt = iCnt + iDigit;
        iNo = iNo / 2;
    }
    return iCnt;
}

int main()
{
    UINT value = 11; 
    int iRet = 0; 

    printf("Entre number : \n");
    scanf("%d", &value);

    iRet = Count0nBits(value);

    printf("Number of bits which are ON are : %d\n", iRet);

    return 0;
}
