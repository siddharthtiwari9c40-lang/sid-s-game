#include <stdio.h>
int main() {
    struct address{
        char phone[10];
        char city[25];
        int pin;
    };
    struct emp{
        char name[20];
        struct address a;
    };
    struct emp e={"sid","981111","delhi",10};
    printf("name = %s , phone no = %d",e.name,e.a.phone);
    printf("\n city =%s , pin = %d",e.a.city,e.a.pin);

}