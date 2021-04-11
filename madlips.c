#include <stdio.h>
#include <stdlib.h>

int main()
{
    char color[20];
    char pluralnoun[20];
    char celebrityF[20];
    char celebrityL[20];

    printf("Enter a Color: ");
    scanf("%s", color);
    printf("Enter a plural noun: ");
    scanf("%s", pluralnoun);
    printf("Enter a celebrity name:");
    scanf("%s%s", celebrityF,celebrityL);

    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralnoun);
    printf("My heart is dead,\n");
    printf("I am such a fool \n");
    printf("I love %s %s", celebrityF,celebrityL);

    return 0;
}
