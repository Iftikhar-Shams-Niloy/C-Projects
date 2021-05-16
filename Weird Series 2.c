#include<stdio.h>
#include<math.h>

///Series : 1-2+3-4+5.......

int main(){
    int n,a=1,i,sign=-1, sum=0;
    printf("Enter A Number:");
    scanf("%d",&n);
    for (i=1 ; i<=n ; i++){
        sum = sum+a;
        a++;
        a = a * sign;
    }
    printf("%d",sum);
}

