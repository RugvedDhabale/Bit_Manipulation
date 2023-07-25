#include <stdio.h>
#include <stdbool.h>

// 12th bit
typedef unsigned int UINT;

//  
//  0000    0000    0000    0000    0000    1000    0000    0000
//    0       0       0       0       0       8      0       0
//  00000800
//  0X00000800

bool ChkBit(UINT iNo)
{
    UINT iMask = 0X00000800;
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
        printf("12th bit is ON \n");
    }
    else
    {
        printf("12th bit is OFF\n");
    }

    return 0;
}
