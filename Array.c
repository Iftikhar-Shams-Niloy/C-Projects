#include <stdio.h>
#include <stdlib.h>
///This is a single dimension array///
int main()
{
    int n=0;
    while(n==0){
    ///First I have to decide the size of the array///
    int lucky_numbers[11];
    ///Then I can add value as much as the size of the array///
    lucky_numbers[1]=169;
    lucky_numbers[2]=888;
    lucky_numbers[3]=150;
    lucky_numbers[4]=250;
    lucky_numbers[5]=125;
    lucky_numbers[6]=121;
    lucky_numbers[7]=225;
    lucky_numbers[8]=969;
    lucky_numbers[9]=007;
    lucky_numbers[10]=420;

    int number;
    printf("\nEnter a number:");
    scanf("%d", &number);

    printf("Your Lucky number is %d", lucky_numbers[("%d",number)]);
}
    return 0;
}
