#include <stdio.h>
#include <stdbool.h>

// 10th bit
typedef unsigned int UINT;

//  
//  0000    0000    0000    0000    0000    0010    0000    0000
//    0       0       0       0       0        2      0       0
//  00000200
//  0X00000200

bool ChkBit(UINT iNo)
{
    UINT iMask = 0X00000200;
    UINT Result = 0;

    Result = iNo & iMask;

    if(Result == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    UINT value = 0; 
    bool bRet = false; 

    printf("Entre number : \n");
    scanf("%d", &value);

    bRet = ChkBit(value);

    if(bRet == true)
    {
        printf("10th bit is ON \n");
    }
    else
    {
        printf("10th bit is OFF\n");
    }

    return 0;
}
