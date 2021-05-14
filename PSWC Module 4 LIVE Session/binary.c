#include<stdio.h>
int decimalToBinary(int decimalnum)
{int binarynum = 0;
int rem,temp = 1;
 while (decimalnum!=0)
{ rem = decimalnum%2;
        decimalnum = decimalnum / 2;
        binarynum = binarynum + rem*temp;
        temp = temp * 10;}
    return binarynum;
}
int main()
{    int decimalnum;
    printf("Enter a Decimal Number: ");
    scanf("%d", &decimalnum);
    printf("Equivalent Binary Number is: %d", decimalToBinary(decimalnum));
    return 0;
}