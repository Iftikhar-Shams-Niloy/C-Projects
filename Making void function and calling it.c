#include<stdio.h>

int numSquare(int a);
void numCube(int a);

int main(){
    int b,c,d,x ;
    printf("***Enter 1st Number***: ");
    scanf("%d",&b);
    c = numSquare(b);
    printf("***Enter 2nd Number***: ");
    scanf("%d",&x);
    printf("**Enter A Number(To cube)**: ");
    scanf("%d",&d);
    //When I call numSquare() function, it executes the funtion made below inside the main function.
    printf("\nSum is(both squared):%d \n", c + (numSquare(x)));
    printf("Sum is (2nd num not squared) :%d", c+ x);
    numCube(d);
}
///Making another int function
int numSquare(int a){
    int res;
    res = a*a;
    return res;
}
///Making a Void function
void numCube(int a){
     int res;
     res = a*a*a;
     printf("\nResult(Cubed) :%d\n", res);
}
