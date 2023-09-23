/*Text editor */

/*Whole code in C*/

#include"header.h"

int main()
{
    char ch;
    int i=0;
    FILE *fp;
    char word[10];

    start:
    system("clear");
    printf("i = edit\n");
    printf("e = exit\n");

    ch = getchar();
    if(ch=='i')
    {
        system("clear");
        fp=fopen("Text_Editor","w");
        for(i=0;i<5;i++)
        {
            fgets(word,10,stdin);
            word[strlen(word)-1]='\0';
            fprintf(fp,"%s\n",word);
            fflush(fp);
        }
    }
    else if(ch=='e')
    {
        system("clear");
        return 0;
    }
    else
    {
        system("clear");
        printf("Enter valid option\n");
        goto start;
    }      

}