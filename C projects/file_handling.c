#include<stdio.h>
#include<stdlib.h>
/* int main(){
    FILE *fp;
    int c;
    int nol=0,not=0,nob=0,noc=0;
    fp=fopen("bonus.c","r");
    if(fp==NULL){
        printf("cant open the file");
        exit(1);
    }
    while((c=fgetc(fp))!=EOF){
        noc++;
        if(c==' '){
            nob++;
        }if(c=='\n'){
            nol++;
        }if(c=='\t'){
            not++;
        }
    }
        printf("no. of charactors = %d\n",noc);
        printf("no. of blank = %d\n",nob);
        printf("no. of tab = %d\n",not);
        printf("no. of line = %d\n",nol);
}

int main(){
    FILE *fs,*ft;
    int c;
    fs=fopen("tpf.txt","r");
    if(fs==NULL){
        printf("cant open the file");
        exit(1);
    }
    ft = fopen("tpf2.txt","w");
     if(ft==NULL){
        printf("cant open target file");
        fclose(fs);
        exit(1);
    }
    while((c=fgetc(fs))!=EOF){
        fputc(c,ft);
    }
    fclose(fs);
    fclose(ft);
    printf("success");
} */

