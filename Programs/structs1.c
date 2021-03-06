#include<stdio.h>
#include<conio.h>

struct identity {
    int id;
    char name;
    char c_name;
    char address;
    char b_name;
};
    typedef struct identity identity;

int main() {
    identity i;
    int ch;
    printf("\nEnter your ID ");
    scanf("%d",&i.id);
    printf("\nEnter your name ");
    scanf("%19s",&i.name);
    printf("\nEnter your class name" );
    scanf("%s",&i.c_name);
    printf("\nEnter your address ");
    scanf("%s",&i.address);
    printf("\nEnter the issued book name ");
    scanf("%s",&i.b_name);
    printf("\n\n\nDATA STORED !!!");
    printf("\nEnter 'y' to view your entered data \nelse enter 'n' to go to menu ");
    scanf("%s",&ch);
    if(ch=='y'||ch=='Y') {
        printf("\nYour ID is %d ",i.id);
        printf("\nyour name is %s ",i.name);
        printf("\nyour class name is %s ",i.c_name);
        printf("\nyour address is %s ",i.address);
        printf("\nIssued book name is %s ",i.b_name);
    }
    else if(ch=='n'||ch=='N')
        exit(0);
    return 0;
}
