#include<stdio.h>
#include<math.h>

int main(){
    char phrase[1000];
    printf("Enter a phrase : ");
    gets(phrase);
    char word[100];
    printf("\nEnter a word you want to search : ");
    gets(word);
    int i,flag=0,j;
    for(i=0;phrase[i]!='\0';i++){

        if(phrase[i] == word[0])
        {
            for(j=0;word[j]!='\0';j++)
            {
                if(phrase[i+j]==word[j])
                {
                    flag = 1;
                }
                else
                    flag = 0;
            }
        }
    }
    if(flag==1){printf("\nFOUND The Word!!! \n");}
    if(flag==0){printf("\nWord Not Found!!! \n");}
}
