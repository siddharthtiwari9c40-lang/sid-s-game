#include <stdio.h>
#include<string.h>
/*int display(b[i].bame,b1[i].price,b[i].pages);
int main(){
    struct book{
        char name[100];
        int pages;
        float price;
    };
    struct book b1 ={"let us c",500,349.99};
    printf("book name is %s , book pages is %d , price is %f",b1.name,b1.pages,b1.price);
    printf("\n address of name is %p \n address of pages is %p \n address of price is %p",&b1.name,&b1.pages,&b1.price);
    struct book b[23]; //here b can hold the info of 13 books
    for(int i=0;i<3;i++){
        printf("\nenter the name of book %d ",i+1);
        fgets(b[i].name,sizeof(b[i].name),stdin);
        printf("enter the number of pages %d ",i+1);
        scanf("%d",&b[i].pages);
        printf("\n enter the price of the  book %d ",i+1);
        scanf("%f",&b[i].price);
        int c=getchar();
    }
    printf("\n book detailes");
    for(int i=0;i<3;i++){
        printf("\nbook %d name is %s",i+1,b[i].name);
        printf("\nbook %d pages is %d",i+1,b[i].pages);
        printf("\nbook %d price is %f",i+1,b[i].price);
    }
    display(b[i].name,b[i].price,b[i].pages);

    return 0;
}    

int display(char *s, float p,int pg){
    printf("%s\n%f\n%d",s,p,pg);
}


/*int disp(char*s,char*t,int e){
    printf("\n%s %s %d",s,t,e);
}

int main() {
    struct book{
        char name[100];
        char author[100];
        int page;
    };
    struct book b1={"let us c","sid",100};
    disp(b1.name,b1.author,b1.page);
}

struct book{
     char name[100];
    char author[100];
    int page;
    
};
int disp(struct book b){
    printf("\n%s %s %d  ",b.name,b.author,b.page);
    return 0;
}
int main(){
    struct book b={"let us c","sid",100};
    disp(b);
}

int main(){
    struct book{
    char name[100];
    char author[100];
    int page;
    };
    struct book b1={"let us c","sid",100};
    struct book *ptr;
    ptr=&b1;
    printf("\n %s %s %d",b1.name,b1.author,b1.page);
    printf("\n %s %s %d",ptr->name,ptr->author,ptr->page);
    

}       

struct book{
    char name[100];
    char author[100];
    int page;
};
int disp(struct book *b){
    printf("\n %s %s %d",b->name,b->author,b->page);
}
int main(){
    struct book b={"let us c","sid",100};
    disp(&b);
} */