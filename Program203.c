#include <stdio.h>

typedef unsigned int UINT; 

UINT ToggleRange(UINT iNo, UINT iStart, UINT iEnd)
{
    UINT iMask1 = 0XFFFFFFFF, iMask2 = 0XFFFFFFFF, iMask = 0, iResult = 0;

    iMask1 = iMask1 << (iStart - 1);
    iMask2 = iMask2>> (32 - iEnd);
    iMask = iMask1 & iMask2;

    iResult = iNo ^ iMask;
    return iResult;
}

int main()
{
    UINT Value = 0; 
    UINT i = 0, j = 0; 
    UINT iRet = 0;

    printf("Please entre number : \n");
    scanf("%d", &Value);

    printf("Entre starting bit position : \n");
    scanf("%d", &i);

    printf("Entre ending of Bit position : \n");
    scanf("%d", &j);

    iRet = ToggleRange(Value, i, j);
    printf("Upadated number is : %d\n", iRet);
    
    return 0;
}