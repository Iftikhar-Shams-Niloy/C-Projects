#include<stdio.h>
#include<math.h>
int main(){
    int n,i,first, second, result;
    printf("Enter  a number:");
    scanf("%d", &n);
    printf("0 1 1 ");

    first = 1;
    second = 1;
    for(i=1;i<n-2 ;i++)
    {

        result = first+second;
        printf("%d ",result);

        first = second;
        second = result;
    }

}
