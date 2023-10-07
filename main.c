/*Text editor */

/*Whole code in C*/

#include"header.h"

int main(int argc , char* argv[])
{
    // printf("Usage: please give file name after the command.\nExample: %s abcd.txt\n argc = %d",argv[0],argc);
    if(argc <= 1){
        printf("Usage: please give file name after the command.\nExample: %s sample.txt\n",argv[0]);
        exit(0);
    }

    system("clear");
    printf("happy editing/creating your file...\n");
    sleep(2);
    system("clear");
    char buf[1024] = "";
    char ch = EOF;
    char oldch = EOF;
    int i=0;
    FILE *fp = NULL;
    if((fp = fopen(argv[1],"a+")) == NULL){
        printf("File unable to open %s something went wrong...\n",argv[0]);
        exit(0);
    }
    if(fork()==0){
        printf("inside a child\n");
        while(1){
            fgets(buf,10,stdin);
        }
    }
    else{
        printf("we are in parent\n");
        while(fp){
            // if(ch != oldch){
            //     oldch = ch;
                fprintf(stdout,"%s",buf);
                fflush(stdout);
            // }
        }
    }
    // printf("file_pointer = %llu\n",fp);
    // char word[10];
    // while(fp)
    
    // start:
    // system("clear");
    // printf("i = edit\n");
    // printf("e = exit\n");

    // ch = getchar();
    // if(ch=='i')
    // {
    //     system("clear");
    //     fp=fopen("Text_Editor","w");
    //     for(i=0;i<5;i++)
    //     {
    //         fgets(word,10,stdin);
    //         word[strlen(word)-1]='\0';
    //         fprintf(fp,"%s\n",word);
    //         fflush(fp);
    //     }
    // }
    // else if(ch=='e')
    // {
    //     system("clear");
    //     return 0;
    // }
    // else
    // {
    //     system("clear");
    //     printf("Enter valid option\n");
    //     goto start;
    // }      

}