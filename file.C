#include <stdio.h>
#include<conio.h>
 

int reversDigits(int num)
{
    int rev_num = 0;
    while(num > 0)
    {
        rev_num = rev_num*10 + num%10;
        num = num/1
        int(i=0;i++;i<9);
    }
    return rev_num;
}

int main()
{
    int num = 4562;
    printf("Reverse of no. is %d", reversDigits(num));
 
    getchar();
    return 0;
}
