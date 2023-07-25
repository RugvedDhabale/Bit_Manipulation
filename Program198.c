#include <stdio.h>
#include <stdbool.h>

// 12th bit
typedef unsigned int UINT;

//  
//  0000    0000    0000    0000    0000    0001    1110    0000
//    0       0       0       0       0       1      c       0
// 

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0X00000070;

    return (iNo ^ iMask);
}

int main()
{
    UINT value = 0; 
    UINT iRet = 0; 

    printf("Entre number : \n");
    scanf("%d", &value);

    iRet = ToggleBit(value);

    printf("Updates number is : %d\n", iRet);

    return 0;
}
