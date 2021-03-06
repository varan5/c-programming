                //TICKET RESERVATION.

#include<stdio.h>
#include<stdlib.h>

static int a,na,aged,t,a1,a2,a3,gender1,gender2,gender3;
static int cage1,cage2,cage3;cgender1,cgender2,cgender3;
static int aage1,aage2,aage3,agender1,agender2,agender3;
char startloc[20],droploc[20];
static int totalno,seatfair,dist,ch,money,distfair,taxfair,finalfair,discountrs;
    char p1[20];
    char p2[20];
    char p3[20];
    char c1[20];
    char c2[20];
    char c3[20];
    char agedname1[20];
    char agedname2[20];
    char agedname3[20];

void welcome() {
    printf("\n\n\tWELCOME TO INDIAN RAILWAYS...\n");
}

void identity() {
    printf("\nEnter number of Adults\n(Age between 13 to 59)\nNOTE:Only 3 bookings at a time");
    scanf("%d",&a);
    switch(a) {
        case 1: printf("\nEnter name of person 1 ");
                scanf("%s",&p1);
                printf("\nEnter age of person 1 ");
                scanf("%d",&a1);
                printf("\nEnter gender of person 1 (1 for female ,2 for male)");
                scanf("%d",&gender1);
                money+=500;
                printf("\n\nDetails Entered Successfully ");
                break;

        case 2: printf("\nEnter name of person 1 ");
                scanf("%s",&p1);
                printf("\nEnter age of person 1 ");
                scanf("%d",&a1);
                printf("\nEnter gender of person 1 (1 for female ,2 for male)");
                scanf("%d",&gender1);
                printf("\n\nDetails Entered Successfully ");

                printf("\nEnter name of person 2 ");
                scanf("%s",&p2);
                printf("\nEnter age of person 2 ");
                scanf("%d",&a2);
                printf("\nEnter gender of person 2 (1 for female ,2 for male)");
                scanf("%d",&gender2);
                printf("\n\nDetails Entered Successfully ");
                money+=1000;
                break;

        case 3: printf("\nEnter name of person 1 ");
                scanf("%s",&p1);
                printf("\nEnter age of person 1 ");
                scanf("%d",&a1);
                printf("\nEnter gender of person 1 (1 for female ,2 for male)");
                scanf("%d",&gender1);
                printf("\n\nDetails Entered Successfully ");

                printf("\nEnter name of person 2 ");
                scanf("%s",&p2);
                printf("\nEnter age of person 2 ");
                scanf("%d",&a2);
                printf("\nEnter gender of person 2 (1 for female ,2 for male)");
                scanf("%d",&gender2);
                printf("\n\nDetails Entered Successfully ");

                printf("\nEnter name of person 3 ");
                scanf("%s",&p3);
                printf("\nEnter age of person 3 ");
                scanf("%d",&a3);
                printf("\nEnter gender of person 3 (1 for female ,2 for male)");
                scanf("%d",&gender3);
                printf("\n\nDetails Entered Successfully ");
                money+=1500;
                break;

        case 0: printf("\n\nDetails Entered Successfully ");

        default:printf("\n\nPlease enter number (0 or 1 or 2 or3)");
    } //switch(a)

    printf("\nEnter number of Children (Age between 3 to 12)\nNOTE: Only 3 bookings at a time");
    scanf("%d",&na);
    switch(na) {
        case 1: printf("\nEnter name of Children 1 ");
                scanf("%s",&c1);
                printf("\nEnter age of Chilren 1 ");
                scanf("%d",&cage1);
                printf("\nEnter gender of person 1 (1 for female ,2 for male)");
                scanf("%d",&cgender1);
                printf("\n\nDetails Entered Successfully ");
                money+=250;
                break;

        case 2: printf("\nEnter name of Children 1 ");
                scanf("%s",&c1);
                printf("\nEnter age of Children 1 ");
                scanf("%d",&cage1);
                printf("\nEnter gender of Children 1 (1 for female ,2 for male)");
                scanf("%d",&cgender1);
                printf("\n\nDetails Entered Successfully ");

                printf("\nEnter name of Children 2 ");
                scanf("%s",&c2);
                printf("\nEnter age of Children 2 ");
                scanf("%d",&cage2);
                printf("\nEnter gender of Children 2 (1 for female ,2 for male)");
                scanf("%d",&cgender2);
                printf("\n\nDetails Entered Successfully ");
                money+=500;
                break;

        case 3: printf("\nEnter name of Children 1 ");
                scanf("%s",&c1);
                printf("\nEnter age of Chilren 1 ");
                scanf("%d",&cage1);
                printf("\nEnter gender of Children 1 (1 for female ,2 for male)");
                scanf("%d",&cgender1);
                printf("\n\nDetails Entered Successfully ");

                printf("\nEnter name of Children 2 ");
                scanf("%s",&c2);
                printf("\nEnter age of Children 2 ");
                scanf("%d",&cage2);
                printf("\nEnter gender of Children 2 (1 for female ,2 for male)");
                scanf("%d",&cgender2);
                printf("\n\nDetails Entered Successfully ");

                printf("\nEnter name of Children 3 ");
                scanf("%s",&c3);
                printf("\nEnter age of Children 3 ");
                scanf("%d",&cage3);
                printf("\nEnter gender of Children 3 (1 for female ,2 for male)");
                scanf("%d",&cgender3);
                printf("\n\nDetails Entered Successfully ");
                money+=7500;
                break;

        case 0: printf("\n\nDetails Entered Successfully ");

        default:printf("\n\nPlease enter number (0 or 1 or 2 or 3)");
    } //switch(na)

    printf("\nEnter number of Aged (Age 60 and above)");
    scanf("%d",&aged);
    switch(aged) {
        case 1: printf("\nEnter name of Aged 1 ");
                scanf("%s",&agedname1);
                printf("\nEnter age of Aged 1 ");
                scanf("%d",&aage1);
                printf("\nEnter gender of Aged 1 (1 for female ,2 for male)");
                scanf("%d",&agender1);
                printf("\n\nDetails Entered Successfully ");
                money+=250;
                break;

        case 2: printf("\nEnter name of Aged 1 ");
                scanf("%s",&agedname1);
                printf("\nEnter age of Aged 1 ");
                scanf("%d",&aage1);
                printf("\nEnter gender of Aged 1 (1 for female ,2 for male)");
                scanf("%d",&agender1);
                printf("\n\nDetails Entered Successfully ");

                printf("\nEnter name of Aged 2 ");
                scanf("%s",&agedname2);
                printf("\nEnter age of Aged 2 ");
                scanf("%d",&aage2);
                printf("\nEnter gender of Aged 2 (1 for female ,2 for male)");
                scanf("%d",&agender2);
                printf("\n\nDetails Entered Successfully ");
                money+=500;
                break;

        case 3: printf("\nEnter name of Aged 1 ");
                scanf("%s",&agedname1);
                printf("\nEnter age of Aged 1 ");
                scanf("%d",&aage1);
                printf("\nEnter gender of Aged 1 (1 for female ,2 for male)");
                scanf("%d",&agender1);
                printf("\n\nDetails Entered Successfully ");

                printf("\nEnter name of Aged 2 ");
                scanf("%s",&agedname2);
                printf("\nEnter age of Aged 2 ");
                scanf("%d",&aage2);
                printf("\nEnter gender of Aged 2 (1 for female ,2 for male)");
                scanf("%d",&agender2);
                printf("\n\nDetails Entered Successfully ");

                printf("\nEnter name of Aged 3 ");
                scanf("%s",&agedname3);
                printf("\nEnter age of Aged 3 ");
                scanf("%d",&aage3);
                printf("\nEnter gender of Aged 3 (1 for female ,2 for male)");
                scanf("%d",&agender3);
                printf("\n\nDetails Entered Successfully ");
                money+=750;
                break;

        case 0: printf("\n\nDetails Entered Successfully ");

        default:printf("\n\nPlease enter number (0 or 1 or 2 or3)");
    }
    totalno=a+na+aged;
}

void location() {
    printf("\n\nEnter Start location(Station or Junction name) ");
    scanf("%19s",&startloc);
    printf("\nEnter Drop Location(Station or Junction name)");
    scanf("%19s",&droploc);
    printf("\nDetails Entered Successfully ");
}

void seattype() {
    printf("\nEnter 1 for 2nd tier AC class ");
    printf("\nEnter 2 for 3rd tier AC class ");
    printf("\nEnter 3 for Sleeper class ");
    printf("\nEnter 4 for General class ");
    printf("\n\nEnter your choice ");
    scanf("%d",&ch);
    printf("\n\tFair for seat-type Added Successfully ");
    if(ch==1)
        seatfair+=totalno*2000;
    else if(ch==2)
        seatfair+=totalno*1500;
    else if(ch==3)
        seatfair+=totalno*1000;
    else if(ch==4)
        seatfair+=totalno*500;
}

void distance() {
    printf("\n\nEnter Distance in km between your Start and Drop location ");
    scanf("%d",&dist);
    printf("\n\tDistance entered Successfully ");
    if(dist>=1000)
        distfair+=totalno*250;
    else if(dist<1000)
        distfair+=totalno*100;
}

void tax() {
    printf("\n\nTotal Railway Tax = 25 ");
    printf("\nInternet handling charges = 25 ");
    taxfair+=50;
}

void discount() {
    int disc;
    printf("\n\nPlease bring original documents while journey if availing any discount ");
    printf("\n\nEnter 1 if serving in Defence ");
    printf("\nEnter 2 if Pysically challenged ");
    scanf("%d",&disc);
    if(disc==1) {
        printf("CONGRATS , RS 100 Discounted ");
        discountrs=100;
    }
    else if(disc==2) {
        printf("CONGRATS , RS 200 Discounted ");
        discountrs=200;
    }
}

void totalfair() {
    finalfair=(money+seatfair+distfair+taxfair)-discountrs;
    printf("\n\nFair for number of seat reservation = %d",money);
    printf("\nFair for seat type = %d",seatfair);
    printf("\nFair for distance = %d",distfair);
    printf("\nFair for tax = %d",taxfair);
    printf("\nDiscount amount = %d",discountrs);
    printf("\n\n\tFINAL PAYABLE AMOUNT = %d",finalfair);
}

int main() {
    //while(1)
        welcome();
        identity();
        location();
        seattype();
        distance();
        tax();
        discount();
        totalfair();


    //} // while(end)
    return 0;
}

