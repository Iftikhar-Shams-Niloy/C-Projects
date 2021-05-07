#include<stdio.h>
#include<math.h>

//The series is : (1) + (2+3) + (4+5+6) + .....

int main(){
    printf("#This program will print a sum of series like, (1) + (2+3) + (4+5+6) + ..... \n");
    printf("***Like, if you put 3, the sum will be : 22***\n");
    int n,sum=0,num,i,j,flag=1;
    printf("\nEnter A Number: ");
    scanf("%d",&n);
    //the first loop will run n times
    for (i=1;i<=n;i++){
            //inside that loop, the 2nd loop will run i times
        for(j=1;j<=i;j++){
            sum = sum + flag;
            flag++;
        }   // every time the loop pass, this 2nd loop will run +1 more time.
    }
    printf("The sum is : %d",sum);

    return 0;
}

