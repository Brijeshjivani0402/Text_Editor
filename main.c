/*Text editor */

/*Whole code in C*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
    int i=0;
    FILE *fp;
    char word[10];

    fp=fopen("Text_Editor","w");

    for(i=0;i<10;i++)
    {
        fgets(word,10,stdin);
        word[strlen(word)-1]='\0';
        fprintf(fp,"%s\n",word);
        fflush(fp);
    }
}