#include<stdio.h>

char pair(char name1,char name2);

void main(){
    char name1,name2,together;
    printf("Enter a girl a and a boy's name");
    scanf("%c %c",&name1,&name2);
    together=pair(name1,name2);


printf("The together name is %c ",&together);
}


char pair(char name1,char name2)
{
    char pair;
    pair=name1+name2;
    return (0);
}
