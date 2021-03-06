                //Burger shop.


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

static int bill,tbill,b,tb,p,tp,d,td,c,tc,s,ts,help,thelp,tno,ttno,q;
int billno=1;

void reset() {
     bill=0,b=0,p=0,d=0,c=0,s=0,help=0,tno=0,q=0,billno+=1;
}

void earning() {
    int pass;
    printf("\nEnter Owner password ");
    scanf("%d",&pass);
    if(pass==1234) {
        printf("\n\t\tWelcome.....");
        printf("\n\nDate = 16/11/2019\tDay = Saturday\n");
        printf("\nThis data is for Today ");
        printf("\nTotal Earning = %d",tbill);
        printf("\nTotal Items sold = %d",ttno);
        printf("\nTotal burger sold = %d",tb);
        printf("\nTotal pizza sold = %d",tp);
        printf("\nTotal drinks sold = %d",td);
        printf("\nTotal sweets sold = %d",ts);
        printf("\nTotal cheese sold %d",tc);
        printf("\nTotal help done = %d",thelp);
    }
    else
        printf("\nWrong password.....");

}

void finalbill() {
    printf("\n\nThank you Guest ");
    printf("\n\n\nBill Generating...");
    printf("\nBill number = %d",billno);
    printf("\nTotal Bill = %d",bill);
    printf("\nTotal Items = %d",tno);
    printf("\nTotal Burger = %d",b);
    printf("\nTotal Pizza = %d",p);
    printf("\nTotal Drinks = %d",d);
    printf("\nTotal Extra cheese = %d",c);
    printf("\nTotal Sweets = %d",s);
    printf("\nTotal Amount Donated = %d",help);
    printf("\n\n\n\tTOTAL BILL = %d",bill);
}
int menu_veg() {
    int ch;
    printf("\n\t\tWELCOME TO 'FOOD ZONE' .......\n");
    printf("\n1 for Burger ");
    printf("\n2 for Pizza ");
    printf("\n3 for Drinks and French fries ");
    printf("\n4 for Extra cheese ");
    printf("\n5 for Sweet ");
    printf("\n6 for Providing meal to poor\n ");
    printf("\n7 for Exit ");
    scanf("%d",&ch);
    return ch;
}

int menu_nonveg() {
    int ch;
    printf("\n\t\tWELCOME TO 'FOOD ZONE' .......\n");
    printf("\n1 for Burger ");
    printf("\n2 for Pizza ");
    printf("\n3 for Drinks and French fries ");
    printf("\n4 for Extra cheese ");
    printf("\n5 for Sweet ");
    printf("\n6 for Providing meal to poor\n ");
    printf("\n7 for Exit ");
    scanf("%d",&ch);
    return ch;
}

int main() {
    int choice;
    char name;
    printf("\t\t\t\tWELCOME...");
    printf("\n\t\tBILL NUMBER = %d",billno);
    printf("\nEnter name ");
    scanf("%s",&name);
    while(1) {
        printf("\n\nEnter 1 for veg and 2 for non-veg \nAnd 9 to check Total Earning for today ");
        scanf("%d",&choice);
        if(choice==1) {
            switch(menu_veg()) {
                int ch;
                case 1: printf("\nEnter 1 for Veg-Aloo burger");
                        printf("\nEnter 2 for Veg-Jumbo burger");
                        printf("\nEnter 3 for Veg-Cheese burger");
                        printf("\nEnter 4 for Veg-Jumbo cheese burger");
                        scanf("%d",&ch);
                        if(ch==1) {
                            printf("Enter Quantity (1,2,3...)");
                            scanf("%d",&q);
                            printf("\nItem added ");
                            printf("Quantity = %d",q);
                            bill+=50*q;
                            b+=1*q;
                            tno+=1*q;
                            tbill+=bill;
                            ttno+=tno;
                            tb+=b;
                            finalbill();
                        }
                        else if(ch==2) {
                            printf("Enter Quantity (1,2,3... )");
                            scanf("%d",&q);
                            printf("\nItem added ");
                            printf("Quantity = %d",q);
                            bill+=80*q;
                            b+=1*q;
                            tno+=1*q;
                            tbill+=bill;
                            ttno+=tno;
                            tb+=b;
                            finalbill();
                        }
                        else if(ch==3) {
                            printf("Enter Quantity (1,2,3... )");
                            scanf("%d",&q);
                            printf("\nItem added ");
                            printf("Quantity = %d",q);
                            bill+=60*q;
                            b+=1*q;
                            tno+=1*q;
                            tbill+=bill;
                            ttno+=tno;
                            tb+=b;
                            finalbill();
                        }
                        else if(ch==4) {
                            printf("Enter Quantity (1,2,3... )");
                            scanf("%d",&q);
                            printf("\nItem added ");
                            printf("Quantity = %d",q);
                            bill+=100*q;
                            b+=1*q;
                            tno+=1*q;
                            tbill+=bill;
                            ttno+=tno;
                            tb+=b;
                            finalbill();
                        }
                        break;

                case 2: printf("\nEnter 1 for Veg-Corn Pizza");
                        printf("\nEnter 2 for Veg-Corn Cheese Pizza");
                        printf("\nEnter 3 for Veg-Fresh Pan Pizza");
                        printf("\nEnter 4 for Veg-Garlic bread + cheesy-dip");
                        scanf("%d",&ch);
                        if(ch==1) {
                            printf("Enter Quantity (1,2,3...)");
                            scanf("%d",&q);
                            printf("\nItem added ");
                            printf("Quantity = %d",q);
                            bill+=80*q;
                            p+=1*q;
                            tno+=1*q;
                            tbill+=bill;
                            ttno+=tno;
                            tp+=p;
                            finalbill();
                        }
                        else if(ch==2) {
                            printf("Enter Quantity (1,2,3... )");
                            scanf("%d",&q);
                            printf("\nItem added ");
                            printf("Quantity = %d",q);
                            bill+=100*q;
                            p+=1*q;
                            tno+=1*q;
                            tbill+=bill;
                            ttno+=tno;
                            tp+=p;
                            finalbill();
                        }
                        else if(ch==3) {
                            printf("Enter Quantity (1,2,3... )");
                            scanf("%d",&q);
                            printf("\nItem added ");
                            printf("Quantity = %d",q);
                            bill+=90*q;
                            p+=1*q;
                            tno+=1*q;
                            tbill+=bill;
                            ttno+=tno;
                            tp+=p;
                            finalbill();
                        }
                        else if(ch==4) {
                            printf("Enter Quantity (1,2,3... )");
                            scanf("%d",&q);
                            printf("\nItem added ");
                            printf("Quantity = %d",q);
                            bill+=100*q;
                            p+=1*q;
                            tno+=1*q;
                            tbill+=bill;
                            ttno+=tno;
                            tp+=p;
                            finalbill();
                        }
                        break;

                case 3: printf("\nEnter 1 for Pepsi");
                        printf("\nEnter 2 for Slice");
                        printf("\nEnter 3 for Sprite");
                        printf("\nEnter 4 for Cold-coffee");
                        printf("\nEnter 5 for Coffee");
                        printf("\nEnter 6 for Tea");
                        printf("\n\nEnter 7 for French fries");
                        scanf("%d",&ch);
                        if(ch==1||ch==2||ch==3||ch==4||ch==5) {
                            printf("\nEnter Quantity (1,2,3...)");
                            scanf("%d",&q);
                            printf("\nItem added");
                            d+=q;
                            tno+=q;
                            bill+=q*20;
                            finalbill();
                            tbill+=bill;
                            ttno+=tno;
                            td+=d;
                        }
                         else if(ch==6) {
                            printf("\nEnter Quantity (1,2,3...)");
                            scanf("%d",&q);
                            printf("\nItem added");
                            d+=q;
                            tno+=q;
                            bill+=q*10;
                            tbill+=bill;
                            ttno+=tno;
                            td+=d;
                            finalbill();
                        }
                         else if(ch==7) {
                            printf("\nEnter Quantity (1,2,3...)");
                            scanf("%d",&q);
                            printf("\nItem added");
                            d+=q;
                            tno+=q;
                            bill+=q*40;
                            tbill+=bill;
                            ttno+=tno;
                            td+=d;
                            finalbill();
                        }
                        break;

                case 4: printf("\nEnter Quantity of Cheese ");
                        scanf("%d",&q);
                        bill+=20*q;
                        c+=q;
                        tno+=q;
                        tbill+=bill;
                        ttno+=tno;
                        tc+=c;
                        finalbill();
                        break;

                case 5: printf("\Enter Quantity for Choco-lava Cake ");
                        scanf("%d",&q);
                        bill+=45*q;
                        s+=q;
                        tno+=q;
                        tbill+=bill;
                        ttno+=tno;
                        ts+=s;
                        finalbill();
                        break;

                case 6: printf("\n\nThank you for the noble cause");
                        printf("\nPlease enter an amount to help a meal the needy");
                        scanf("%d",&help);
                        printf("Thank you , your contibution Added");
                        bill+=help;
                        tbill+=bill;
                        thelp+=help;
                        finalbill();
                        break;

                case 7: printf("\n\nThank you ");
                        finalbill();
                        reset();
                        exit(0);

            } // switch end (veg)
        finalbill();
        } // if (end)
        else if(choice==2) {
            switch(menu_nonveg()) {
                int ch;
                case 1: printf("\nEnter 1 for Non-Veg-Aloo burger");
                        printf("\nEnter 2 for Non-Veg-Jumbo burger");
                        printf("\nEnter 3 for Non-Veg-Cheese burger");
                        printf("\nEnter 4 for Non-Veg-Jumbo cheese burger");
                        scanf("%d",&ch);
                        if(ch==1) {
                            printf("Enter Quantity (1,2,3...)");
                            scanf("%d",&q);
                            printf("\nItem added ");
                            printf("Quantity = %d",q);
                            bill+=60*q;
                            b+=1*q;
                            tno+=1*q;
                            tbill+=bill;
                            ttno+=tno;
                            tb+=b;
                            finalbill();
                        }
                        else if(ch==2) {
                            printf("Enter Quantity (1,2,3... )");
                            scanf("%d",&q);
                            printf("\nItem added ");
                            printf("Quantity = %d",q);
                            bill+=100*q;
                            b+=1*q;
                            tno+=1*q;
                            tbill+=bill;
                            ttno+=tno;
                            tb+=b;
                            finalbill();
                        }
                        else if(ch==3) {
                            printf("Enter Quantity (1,2,3... )");
                            scanf("%d",&q);
                            printf("\nItem added ");
                            printf("Quantity = %d",q);
                            bill+=70*q;
                            b+=1*q;
                            tno+=1*q;
                            tbill+=bill;
                            ttno+=tno;
                            tb+=b;
                            finalbill();
                        }
                        else if(ch==4) {
                            printf("Enter Quantity (1,2,3... )");
                            scanf("%d",&q);
                            printf("\nItem added ");
                            printf("Quantity = %d",q);
                            bill+=120*q;
                            b+=1*q;
                            tno+=1*q;
                            tbill+=bill;
                            ttno+=tno;
                            tb+=b;
                            finalbill();
                        }
                        break;

                case 2: printf("\nEnter 1 for Non-Veg-Corn Pizza");
                        printf("\nEnter 2 for Non-Veg-Corn Cheese Pizza");
                        printf("\nEnter 3 for Non-Veg-Fresh Pan Pizza");
                        printf("\nEnter 4 for Non-Veg-Garlic bread + cheesy-dip");
                        scanf("%d",&ch);
                        if(ch==1) {
                            printf("Enter Quantity (1,2,3...)");
                            scanf("%d",&q);
                            printf("\nItem added ");
                            printf("Quantity = %d",q);
                            bill+=100*q;
                            p+=1*q;
                            tno+=1*q;
                            tbill+=bill;
                            ttno+=tno;
                            tp+=p;
                            finalbill();
                        }
                        else if(ch==2) {
                            printf("Enter Quantity (1,2,3... )");
                            scanf("%d",&q);
                            printf("\nItem added ");
                            printf("Quantity = %d",q);
                            bill+=120*q;
                            p+=1*q;
                            tno+=1*q;
                            tbill+=bill;
                            ttno+=tno;
                            tp+=p;
                            finalbill();
                        }
                        else if(ch==3) {
                            printf("Enter Quantity (1,2,3... )");
                            scanf("%d",&q);
                            printf("\nItem added ");
                            printf("Quantity = %d",q);
                            bill+=110*q;
                            p+=1*q;
                            tno+=1*q;
                            tbill+=bill;
                            ttno+=tno;
                            tp+=p;
                            finalbill();
                        }
                        else if(ch==4) {
                            printf("Enter Quantity (1,2,3... )");
                            scanf("%d",&q);
                            printf("\nItem added ");
                            printf("Quantity = %d",q);
                            bill+=120*q;
                            p+=1*q;
                            tno+=1*q;
                            tbill+=bill;
                            ttno+=tno;
                            tp+=p;
                            finalbill();
                        }
                        break;

                case 3: printf("\nEnter 1 for Pepsi");
                        printf("\nEnter 2 for Slice");
                        printf("\nEnter 3 for Sprite");
                        printf("\nEnter 4 for Cold-coffee");
                        printf("\nEnter 5 for Coffee");
                        printf("\nEnter 6 for Tea");
                        printf("\n\nEnter 7 for French fries");
                        scanf("%d",&ch);
                        if(ch==1||ch==2||ch==3||ch==4||ch==5) {
                            printf("\nEnter Quantity (1,2,3...)");
                            scanf("%d",&q);
                            printf("\nItem added");
                            d+=q;
                            tno+=q;
                            bill+=q*20;
                            tbill+=bill;
                            ttno+=tno;
                            td+=d;
                            finalbill();
                        }
                         else if(ch==6) {
                            printf("\nEnter Quantity (1,2,3...)");
                            scanf("%d",&q);
                            printf("\nItem added");
                            d+=q;
                            tno+=q;
                            bill+=q*10;
                            tbill+=bill;
                            ttno+=tno;
                            td+=d;
                            finalbill();
                        }
                         else if(ch==7) {
                            printf("\nEnter Quantity (1,2,3...)");
                            scanf("%d",&q);
                            printf("\nItem added");
                            d+=q;
                            tno+=q;
                            bill+=q*40;
                            tbill+=bill;
                            ttno+=tno;
                            td+=d;
                            finalbill();
                         }
                        break;

                case 4: printf("\nEnter Quantity of Cheese ");
                        scanf("%d",&q);
                        bill+=20*q;
                        c+=q;
                        tno+=q;
                        tbill+=bill;
                        ttno+=tno;
                        tc+=c;
                        finalbill();
                        break;

                case 5: printf("\Enter Quantity for Choco-lava Cake ");
                        scanf("%d",&q);
                        bill+=45*q;
                        s+=q;
                        tno+=q;
                        tbill+=bill;
                        ttno+=tno;
                        ts+=s;
                        finalbill();
                        break;

                case 6: printf("\n\nThank you for the noble cause");
                        printf("\nPlease enter an amount to help a meal the needy");
                        scanf("%d",&help);
                        printf("Thank you , your contibution Added");
                        bill+=help;
                        tbill+=bill;
                        thelp+=help;
                        finalbill();
                        break;

                case 7: printf("\n\nThank you ");
                        finalbill();
                        reset();
                        exit(0);
            } //switch end (non-veg)
        } //else if (end)

        else if(choice==9) {
            earning();
        } // else if for choice==9 (end)

    } //while end
    return 0;
}
