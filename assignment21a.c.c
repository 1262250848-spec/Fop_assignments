#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp;
    char text[100];
    char buffer [100];
    fp=fopen("sample.txt","w");
    if(fp==NULL){
        printf("error opening file .\n");
        exit(1);
    }
    
    fputs("Hello students \n",fp);
    fputs("welcome to file handling in c . \n",fp);
    
    strcpy(text,"this line is written using fwrite. \n");
    fwrite(text,sizeof(char),sizeof(text),fp);
    fclose(fp);
    
    fp=fopen("sample.txt","r");
    if(fp==NULL){
        printf("error opening file .\n");
        exit(1);
    }
    printf("reading file using fgets()\n");
    
    while(fgets(buffer,sizeof(buffer),fp)!= NULL){
        printf("%s",buffer);
    }
    
    fseek(fp,O,SEEK_SET);
    printf("reading file using fread()\n");
    fread(buffer,sizeof(char),sizeof(buffer),fp);
    printf("%s",buffer);
    
    if(feof(fp)){
        printf("\nEnd of file reached.\n");
    }
    
    fclose(fp);
    
    return 0;
}