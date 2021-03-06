                //TICKET RESERVATION.

#include<stdio.h>
#include<stdlib.h>

char end;
int bookingno=1;
int flag, cflag, aflag;
static int a, na, aged, t, a1, a2, a3;
char gender1, gender2, gender3;
static int cage1, cage2, cage3;
char cgender1, cgender2, cgender3;
static int aage1, aage2, aage3;
char agender1, agender2, agender3;
char startloc[20], droploc[20];
static int totalno, seatfair, dist, ch, money, distfair, taxfair, finalfair, discountrs;
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
    int ans;
    int check;
    int confirm;
    FILE *fp;
    fp=fopen("F:/C Programming/Notepad saved C programs/C_PROJECTS/file_for_ticket_reservation.txt", "a");
    printf("\n\n\n\nPress Enter key to Start your bookings\n");
    printf("\n\t\t\t\t\t\t\t\tEnter 'E' to Exit from the Website\n");
    fflush(stdin);
    scanf("%c", &end);
    if(end=='e' || end=='E')
        exit(0);
    fprintf(fp, "\n\tBOOKING ID = %d ", bookingno);
    printf("\n\n\t\t\t\t\t\t\t\tBOOKING ID = %d ", bookingno);
    do {
        printf("\nEnter number of Adults\n(Age between 13 to 59)\nNOTE:Only 3 bookings at a time\t");
        printf("\n\t\t\t\t\t\tTicket price for 1 adult = RS 500\n");
        fflush(stdin);
        scanf("%d", &a);
    } while(!(a==0 || a==1 || a==2 || a==3));
    switch(a) {
        case 1: flag=1;
                printf("\nEnter name of person 1 ");
                fflush(stdin);
                gets(p1);
                do {
                    printf("\nEnter age of person 1 ");
                    fflush(stdin);
                    scanf("%d", &a1);
                    check=a1>=13&&a1<=59;
                } while(!check);

                do {
                    printf("\nEnter gender of person 1 (f for female , m for male) ");
                    fflush(stdin);
                    scanf("%c", &gender1);
                    ans=(gender1=='f' || gender1=='F' || gender1=='m' || gender1=='M');
                } while(!ans);
                money+=500;
                printf("\n\n\tBOOKING ID = %d ", bookingno);
                printf("\nTotal Adult = 1");
                printf("\nTicket Price = 500");
                fprintf(fp, "\nTotal Adult = 1");
                fprintf(fp, "\nTicket Price = 500");
                fprintf(fp, "\n\nAdult Person 1");
                fprintf(fp, "\nName = %s", p1);
                fprintf(fp, "\nAge = %d", a1);
                fprintf(fp, "\nGender = %c", gender1);
                break;


        case 2: flag=2;
                printf("\nEnter name of person 1 ");
                fflush(stdin);
                gets(p1);
                    do {
                    printf("\nEnter age of person 1 ");
                    fflush(stdin);
                    scanf("%d", &a1);
                    check=a1>=13&&a1<=59;
                } while(!check);

                 do {
                    printf("\nEnter gender of person 1 (f for female , m for male) ");
                    fflush(stdin);
                    scanf("%c", &gender1);
                    ans=(gender1=='f' || gender1=='F' || gender1=='m' || gender1=='M');
                } while(!ans);
                fprintf(fp, "\n\nAdult Person 1");
                fprintf(fp, "\nName = %s", p1);
                fprintf(fp, "\nAge = %d", a1);
                fprintf(fp, "\nGender = %c", gender1);
                printf("\n\nDetails Entered Successfully ");


                printf("\nEnter name of person 2 ");
                fflush(stdin);
                gets(p2);
                    do {
                    printf("\nEnter age of person 2 ");
                    fflush(stdin);
                    scanf("%d", &a2);
                    check=a2>=13&&a2<=59;
                } while(!check);
                do {
                    printf("\nEnter gender of person 2 (f for female , m for male) ");
                    fflush(stdin);
                    scanf("%c", &gender2);
                    ans=(gender2=='f' || gender2=='F' || gender2=='m' || gender2=='M');
                } while(!ans);
                fprintf(fp, "\n\nAdult Person 2");
                fprintf(fp, "\nName = %s", p2);
                fprintf(fp, "\nAge = %d", a2);
                fprintf(fp, "\nGender = %c", gender2);
                printf("\n\nDetails Entered Successfully ");
                printf("\nTotal Adult = 2");
                printf("\nTicket Price = 1000");
                fprintf(fp, "\nTotal Adult = 2");
                fprintf(fp, "\nTicket Price = 1000");
                money+=1000;
                break;

        case 3: flag=3;
                printf("\nEnter name of person 1 ");
                fflush(stdin);
                gets(p1);
                    do {
                    printf("\nEnter age of person 1 ");
                    fflush(stdin);
                    scanf("%d", &a1);
                    check=a1>=13&&a1<=59;
                } while(!check);

                 do {
                    printf("\nEnter gender of person 1 (f for female , m for male) ");
                    fflush(stdin);
                    scanf("%c", &gender1);
                    ans=(gender1=='f' || gender1=='F' || gender1=='m' || gender1=='M');
                } while(!ans);
                fprintf(fp, "\n\nAdult Person 1");
                fprintf(fp, "\nName = %s", p1);
                fprintf(fp, "\nAge = %d", a1);
                fprintf(fp, "\nGender = %c", gender1);
                printf("\n\nDetails Entered Successfully ");

                printf("\nEnter name of person 2 ");
                fflush(stdin);
                gets(p2);
                    do {
                    printf("\nEnter age of person 2 ");
                    fflush(stdin);
                    scanf("%d", &a2);
                    check=a2>=13&&a2<=59;
                } while(!check);

                 do {
                    printf("\nEnter gender of person 2 (f for female , m for male) ");
                    fflush(stdin);
                    scanf("%c", &gender2);
                    ans=(gender2=='f' || gender2=='F' || gender2=='m' || gender2=='M');
                } while(!ans);
                fprintf(fp, "\n\nAdult Person 2");
                fprintf(fp, "\nName = %s", p2);
                fprintf(fp, "\nAge = %d", a2);
                fprintf(fp, "\nGender = %c", gender2);
                printf("\n\nDetails Entered Successfully ");

                printf("\nEnter name of person 3 ");
                fflush(stdin);
                gets(p3);
                   do {
                    printf("\nEnter age of person 3 ");
                    fflush(stdin);
                    scanf("%d", &a3);
                    check=a3>=13&&a3<=59;
                } while(!check);

                 do {
                    printf("\nEnter gender of person 3 (f for female , m for male) ");
                    fflush(stdin);
                    scanf("%c", &gender3);
                    ans=(gender3=='f' || gender3=='F' || gender3=='m' || gender3=='M');
                } while(!ans);
                fprintf(fp, "\n\nAdult Person 2");
                fprintf(fp, "\nName = %s", p3);
                fprintf(fp, "\nAge = %d", a3);
                fprintf(fp, "\nGender = %c", gender3);
                printf("\n\nDetails Entered Successfully ");
                printf("\nTotal Adult = 3");
                printf("\nTicket Price = 1500");
                fprintf(fp, "\nTotal Adult = 3");
                fprintf(fp, "\nTicket Price = 1500");
                money+=1500;
                break;
        case 0: printf("\n\nDetails Entered Successfully ");

        default:printf("\n\nPlease enter number (0 or 1 or 2 or3) ");

    } //switch(a)
    do {
        printf("\n\n\n\n\n\nEnter number of Children (Age between 3 to 12)\nNOTE: Only 3 bookings at a time\t");
        printf("\n\t\t\t\t\t\tTicket price for 1 children = RS 250\n");
        fflush(stdin);
        scanf("%d", &na);
    } while(!(na==1 || na==2 || na==3 || na==0));
    switch(na) {
        case 1: printf("\nEnter name of Children 1 ");
                fflush(stdin);
                gets(c1);
                do {
                    printf("\nEnter age of Chilren 1 ");
                    fflush(stdin);
                    scanf("%d", &cage1);
                    check=cage1>=3 && cage1<=12;
                } while(!check);

                 do {
                    printf("\nEnter gender of Child 1 (f for female , m for male) ");
                    fflush(stdin);
                    scanf("%c", &cgender1);
                    ans=(cgender1=='f' || cgender1=='F' || cgender1=='m' || cgender1=='M');
                } while(!ans);
                fprintf(fp, "\n\nChildren 1");
                fprintf(fp, "\nName = %s", c1);
                fprintf(fp, "\nAge = %d", cage1);
                fprintf(fp, "\nGender = %c", cgender1);
                printf("\n\nDetails Entered Successfully ");
                printf("\nTotal Children = 1");
                printf("\nTicket Price = 250");
                fprintf(fp, "\nTotal Children = 1");
                fprintf(fp, "\nTicket Price = 250");


                money+=250;
                break;

        case 2: printf("\nEnter name of Children 1 ");
                fflush(stdin);
                gets(c1);
                do {
                    printf("\nEnter age of Chilren 1 ");
                    fflush(stdin);
                    scanf("%d", &cage1);
                    check=cage1>=3 && cage1<=12;
                } while(!check);


                 do {
                    printf("\nEnter gender of Child 1 (f for female , m for male) ");
                    fflush(stdin);
                    scanf("%c", &cgender1);
                    ans=(cgender1=='f' || cgender1=='F' || cgender1=='m' || cgender1=='M');
                } while(!ans);
                printf("\n\nDetails Entered Successfully ");
                fprintf(fp, "\n\nChildren 1");
                fprintf(fp, "\nName = %s", c1);
                fprintf(fp, "\nAge = %d", cage1);
                fprintf(fp, "\nGender = %c", cgender1);

                printf("\nEnter name of Children 2 ");
                fflush(stdin);
                gets(c2);
                do {
                    printf("\nEnter age of Chilren 2 ");
                    fflush(stdin);
                    scanf("%d", &cage2);
                    check=cage2>=3 && cage2<=12;
                } while(!check);

                 do {
                    printf("\nEnter gender of Child 2 (f for female , m for male) ");
                    fflush(stdin);
                    scanf("%c", &cgender2);
                    ans=(cgender2=='f' || cgender2=='F' || cgender2=='m' || cgender2=='M');
                } while(!ans);
                fprintf(fp, "\n\nChildren 2");
                fprintf(fp, "\nName = %s", c2);
                fprintf(fp, "\nAge = %d", cage2);
                fprintf(fp, "\nGender = %c", cgender2);

                printf("\n\nDetails Entered Successfully ");
                printf("\nTotal Children = 2");
                printf("\nTicket Price = 500");
                fprintf(fp, "\nTotal Children = 2");
                fprintf(fp, "\nTicket Price = 500");

                money+=500;
                break;

        case 3: printf("\nEnter name of Children 1 ");
                fflush(stdin);
                gets(c1);
                do {
                    printf("\nEnter age of Chilren 1 ");
                    fflush(stdin);
                    scanf("%d", &cage1);
                    check=cage1>=3 && cage1<=12;
                } while(!check);


                 do {
                    printf("\nEnter gender of Child 1 (f for female , m for male) ");
                    fflush(stdin);
                    scanf("%c", &cgender1);
                    ans=(cgender1=='f' || cgender1=='F' || cgender1=='m' || cgender1=='M');
                } while(!ans);
                fprintf(fp, "\n\nChildren 1");
                fprintf(fp, "\nName = %s", c1);
                fprintf(fp, "\nAge = %d", cage1);
                fprintf(fp, "\nGender = %c", cgender1);
                printf("\n\nDetails Entered Successfully ");

                printf("\nEnter name of Children 2 ");
                fflush(stdin);
                gets(c2);
                do {
                    printf("\nEnter age of Chilren 2 ");
                    fflush(stdin);
                    scanf("%d", &cage2);
                    check=cage2>=3 && cage2<=12;
                } while(!check);

                 do {
                    printf("\nEnter gender of Child 2 (f for female , m for male) ");
                    fflush(stdin);
                    scanf("%c", &cgender2);
                    ans=(cgender2=='f' || cgender2=='F' || cgender2=='m' || cgender2=='M');
                } while(!ans);
                fprintf(fp, "\n\nChildren 2");
                fprintf(fp, "\nName = %s", c2);
                fprintf(fp, "\nAge = %d", cage2);
                fprintf(fp, "\nGender = %c", cgender2);
                printf("\n\nDetails Entered Successfully ");

                printf("\nEnter name of Children 3 ");
                fflush(stdin);
                gets(c3);
                do {
                    printf("\nEnter age of Children 3 ");
                    fflush(stdin);
                    scanf("%d", &cage3);
                    check=cage3>=3 && cage3<=12;
                } while(!check);

                 do {
                    printf("\nEnter gender of Child 3 (f for female , m for male) ");
                    fflush(stdin);
                    scanf("%c", &cgender3);
                    ans=(cgender3=='f' || cgender3=='F' || cgender3=='m' || cgender3=='M');
                } while(!ans);
                fprintf(fp, "\n\nChildren 3");
                fprintf(fp, "\nName = %s", c3);
                fprintf(fp, "\nAge = %d", cage3);
                fprintf(fp, "\nGender = %c", cgender3);
                printf("\n\nDetails Entered Successfully ");
                printf("\nTotal Children = 3");
                printf("\nTicket Price = 750");
                fprintf(fp, "\nTotal Children = 3");
                fprintf(fp, "\nTicket Price = 750");

                money+=750;
                break;

        case 0: printf("\n\nDetails Entered Successfully ");

        default:printf("\n\nPlease enter number (0 or 1 or 2 or 3) ");
    } //switch(na)
    printf("\n\t\t\t\t\t\t\t\tEnter 'E' to Exit from the Website else Press Enter key to proceed\n");
    fflush(stdin);
    scanf("%c", &end);
    if(end=='e' || end=='E')
        exit(0);
    do {
        printf("\n\n\n\n\n\nEnter number of Aged (Age 60 and above)\t");
        printf("\n\t\t\t\t\t\tTicket price for 1 aged = RS 250\n");
        fflush(stdin);
        scanf("%d", &aged);
    } while(!(aged==0 || aged==1 || aged==2 || aged==3));
    switch(aged) {
        case 1: printf("\nEnter name of Aged 1 ");
                fflush(stdin);
                gets(agedname1);
                do {
                    printf("\nEnter age of Aged 1 ");
                    fflush(stdin);
                    scanf("%d", &aage1);
                    check=(aage1>=60);
                } while(!check);

                 do {
                    printf("\nEnter gender of Aged 1 (f for female , m for male) ");
                    fflush(stdin);
                    scanf("%c", &agender1);
                    ans=(agender1=='f' || agender1=='F' || agender1=='m' || agender1=='M');
                } while(!ans);
                printf("\n\nDetails Entered Successfully ");
                money+=250;
                fprintf(fp, "\n\nAged 1");
                fprintf(fp, "\nName = %s", agedname1);
                fprintf(fp, "\nAge = %d", aage1);
                fprintf(fp, "\nGender = %c", agender1);

                printf("\nTotal Aged = 1");
                printf("\nTicket Price = 250");
                fprintf(fp, "\nTotal Aged = 1");
                fprintf(fp, "\nTicket Price = 250");


                break;

        case 2: printf("\nEnter name of Aged 1 ");
                fflush(stdin);
                gets(agedname1);
                do {
                    printf("\nEnter age of Aged 1 ");
                    fflush(stdin);
                    scanf("%d", &aage1);
                    check=(aage1>=60);
                } while(!check);

                do {
                    printf("\nEnter gender of Aged 1 (f for female , m for male) ");
                    fflush(stdin);
                    scanf("%c", &agender1);
                    ans=(agender1=='f' || agender1=='F' || agender1=='m' || agender1=='M');
                } while(!ans);
                fprintf(fp, "\n\nAged 1");
                fprintf(fp, "\nName = %s", agedname1);
                fprintf(fp, "\nAge = %d", aage1);
                fprintf(fp, "\nGender = %c", agender1);
                printf("\n\nDetails Entered Successfully ");

                printf("\nEnter name of Aged 2 ");
                fflush(stdin);
                gets(agedname2);
                do {
                    printf("\nEnter age of Aged 2 ");
                    fflush(stdin);
                    scanf("%d", &aage2);
                    check=(aage2>=60);
                } while(!check);

                do {
                    printf("\nEnter gender of Aged 2 (f for female , m for male) ");
                    fflush(stdin);
                    scanf("%c", &agender2);
                    ans=(agender2=='f' || agender2=='F' || agender2=='m' || agender2=='M');
                } while(!ans);
                fprintf(fp, "\n\nAged 2");
                fprintf(fp, "\nName = %s", agedname2);
                fprintf(fp, "\nAge = %d", aage2);
                fprintf(fp, "\nGender = %c", agender2);
                printf("\n\nDetails Entered Successfully ");
                printf("\nTotal Aged = 2");
                printf("\nTicket Price = 500");
                fprintf(fp, "\nTotal Aged = 2");
                fprintf(fp, "\nTicket Price = 500");
                money+=500;
                break;

        case 3: printf("\nEnter name of Aged 1 ");
                fflush(stdin);
                gets(agedname1);
                 do {
                    printf("\nEnter age of Aged 1 ");
                    fflush(stdin);
                    scanf("%d", &aage1);
                    check=(aage1>=60);
                } while(!check);

                do {
                    printf("\nEnter gender of Aged 1 (f for female , m for male) ");
                    fflush(stdin);
                    scanf("%c", &agender1);
                    ans=(agender1=='f' || agender1=='F' || agender1=='m' || agender1=='M');
                } while(!ans);
                fprintf(fp, "\n\nAged 1");
                fprintf(fp, "\nName = %s", agedname1);
                fprintf(fp, "\nAge = %d", aage1);
                fprintf(fp, "\nGender = %c", agender1);
                printf("\n\nDetails Entered Successfully ");

                printf("\nEnter name of Aged 2 ");
                fflush(stdin);
                gets(agedname1);
                 do {
                    printf("\nEnter age of Aged 2 ");
                    fflush(stdin);
                    scanf("%d", &aage2);
                    check=(aage2>=60);
                } while(!check);

                do {
                    printf("\nEnter gender of Aged 2 (f for female , m for male) ");
                    fflush(stdin);
                    scanf("%c", &agender2);
                    ans=(agender2=='f' || agender2=='F' || agender2=='m' || agender2=='M');
                } while(!ans);
                fprintf(fp, "\n\nAged 2");
                fprintf(fp, "\nName = %s", agedname2);
                fprintf(fp, "\nAge = %d", aage2);
                fprintf(fp, "\nGender = %c", agender2);
                printf("\n\nDetails Entered Successfully ");

                printf("\nEnter name of Aged 3 ");
                fflush(stdin);
                gets(agedname1);
                 do {
                    printf("\nEnter age of Aged 3 ");
                    fflush(stdin);
                    scanf("%d", &aage3);
                    check=(aage3>=60);
                } while(!check);

                do {
                    printf("\nEnter gender of Aged 3 (f for female , m for male) ");
                    fflush(stdin);
                    scanf("%c", &agender3);
                    ans=(agender3=='f' || agender3=='F' || agender3=='m' || agender3=='M');
                } while(!ans);
                fprintf(fp, "\n\nAged 3");
                fprintf(fp, "\nName = %s", agedname3);
                fprintf(fp, "\nAge = %d", aage3);
                fprintf(fp, "\nGender = %c", agender3);
                printf("\n\nDetails Entered Successfully ");
                printf("\nTotal Aged = 3");
                printf("\nTicket Price = 750");
                fprintf(fp, "\nTotal Aged = 3");
                fprintf(fp, "\nTicket Price = 750");
                money+=750;
                break;

        case 0: printf("\n\nDetails Entered Successfully ");

        default:printf("\n\nPlease enter number (0 or 1 or 2 or3) ");
    }

   totalno=a+na+aged;
   printf("\n\n\n\t\t\t\t\tTOTAL PASSENGERS = %d", totalno);
   fprintf(fp, "\n\n\tTOTAL PASSENGERS = %d", totalno);
   fclose(fp);
}
void location() {
    FILE *fp;
    fp=fopen("F:/C Programming/Notepad saved C programs/C_PROJECTS/file_for_ticket_reservation.txt", "a");
    printf("\n\t\t\t\t\t\t\t\tEnter 'E' to Exit from the Website ,  Press Enter key to Proceed\n");
    fflush(stdin);
    scanf("%c", &end);


    if(end=='e' || end=='E')
        exit(0);
    printf("\n\n\t\tEnter Start location(Station or Junction name)\t");
    scanf("%19s", &startloc);
    printf("\n\t\tEnter Drop Location(Station or Junction name)\t");
    scanf("%19s", &droploc);
    printf("\n\t\tStart location = %s ", startloc);
    printf("\n\t\tDrop location = %s ", droploc);
    fprintf(fp, "\n\nStart location = %s ", startloc);
    fprintf(fp, "\nDrop location = %s \n\n", droploc);
    printf("\n\t\tDetails Entered Successfully ");
    fclose(fp);
}

void seattype() {
    FILE *fp;
    fp=fopen("F:/C Programming/Notepad saved C programs/C_PROJECTS/file_for_ticket_reservation.txt", "a");
    printf("\n\n\t\t\t\t\tSEAT-TYPE SELECTION");
    fprintf(fp, "\n\n\tSEAT-TYPE SELECTION");
    do {
        printf("\n\t\t\t\t\tEnter 1 for 2nd tier AC class (Fair RS 2000 extra per seat) ");
        printf("\n\t\t\t\t\tEnter 2 for 3rd tier AC class (Fair RS 1500 extra per seat) ");
        printf("\n\t\t\t\t\tEnter 3 for Sleeper class (Fair RS 1000 extra per seat) ");
        printf("\n\t\t\t\t\tEnter 4 for General class (Fair RS 500 extra per seat) ");
        printf("\n\n\t\t\t\t\tEnter your choice\t");
        scanf("%d", &ch);
        fflush(stdin);
    } while(!(ch==1 || ch==2 || ch==3 || ch==4));
    printf("\n\t\t\t\t\tFair for seat-type Added Successfully ");
    if(ch==1) {
        printf("\n\t\t\t\t\tSeat-type = 2nd tier AC class ");
        printf("\n\t\t\t\t\tSeat-type price = Rs 2000 per person ");
        fprintf(fp, "\nSeat-type = 2nd tier AC class ");
        fprintf(fp, "\nSeat-type price = Rs 2000 per person ");

        seatfair+=totalno*2000;
    }
    else if(ch==2) {
        printf("\n\t\t\t\t\tSeat-type = 3nd tier AC class ");
        printf("\n\t\t\t\t\tSeat-type price = Rs 1500 per person ");
        fprintf(fp, "\nSeat-type = 3nd tier AC class ");
        fprintf(fp, "\nSeat-type price = Rs 1500 per person ");
        seatfair+=totalno*1500;
    }

    else if(ch==3) {
printf("\n\t\t\t\t\tSeat-type = Sleeper class ");
        printf("\n\t\t\t\t\tSeat-type price = Rs 1000 per person ");
        fprintf(fp, "\nSeat-type = Sleeper class ");
        fprintf(fp, "\nSeat-type price = Rs 1000 per person ");
        seatfair+=totalno*1000;
    }
    else if(ch==4) {
        printf("\n\t\t\t\t\tSeat-type = Genral class ");
        printf("\n\t\t\t\t\tSeat-type price = Rs 500 per person ");
        fprintf(fp, "\nSeat-type = Genral class ");
        fprintf(fp, "\nSeat-type price = Rs500 per person ");
        seatfair+=totalno*500;

    }
    fclose(fp);
}


void distance() {
    FILE *fp;
    fp=fopen("F:/C Programming/Notepad saved C programs/C_PROJECTS/file_for_ticket_reservation.txt", "a");
    printf("\n\n\t\tDISTANCE ESTIMATION");
    fprintf(fp, "\n\n\tDISTANCE ESTIMATION");
    do {
        printf("\n\n\t\t\tPrice = Rs 100 per person(within 1000km), \n\t\t\tRs 250 per person(for equal or more than 1000km) ");
        printf("\n\n\t\t\tEnter Distance in km between your Start and Drop location (max = 5000km) ");
        scanf("%d", &dist);
        fflush(stdin);
        printf("\n\t\t\tDistance entered Successfully ");
    } while(!(dist>=0 && dist<=5000));

    if(dist>=1000) {
        printf("\n\t\t\tDistance = %d km", dist);
        printf("\n\t\t\tDistance price = Rs 250 per person");
        fprintf(fp, "\n\nDistance = %d km", dist);
        fprintf(fp, "\n\Distance price = Rs 250 per person");
        distfair+=totalno*250;
    } else if(dist<1000) {
        printf("\n\t\t\tDistance = %d km", dist);
        printf("\n\t\t\tDistance price = Rs 100 per person");
        fprintf(fp, "\n\nDistance = %d km", dist);
        fprintf(fp, "\n\Distance price = Rs 100 per person");
        distfair+=totalno*250;
        distfair+=totalno*100;
        fclose(fp);
    }
}

void tax() {
    FILE *fp;
    fp=fopen("F:/C Programming/Notepad saved C programs/C_PROJECTS/file_for_ticket_reservation.txt", "a");
    fflush(stdin);
    getchar();
    printf("\n\n\n\t\t\tTAX INFORMATION\n");
    fprintf(fp, "\n\n\tTAX INFORMATION\n");
    printf("\n\t\t\tTotal Railway Tax = 25 ");
    printf("\n\t\t\tInternet handling charges = 25 ");
    fprintf(fp, "\nTotal Railway Tax = 25 ");
    fprintf(fp, "\nInternet handling charges = 25 ");
    taxfair+=50;
    fclose(fp);
}

void discount() {
    FILE *fp;
    fp=fopen("F:/C Programming/Notepad saved C programs/C_PROJECTS/file_for_ticket_reservation.txt", "a");
    int disc;
    do {
        printf("\n\n\n\nDISCOUNT INFORMATION\n");
        fprintf(fp, "\n\n\tDISCOUNT INFORMATION\n");
        printf("\nPlease bring original documents while journey if availing any discount ");
        printf("\nEnter 1 if serving in Defence ");
        printf("\nEnter 2 if Pysically challenged ");
        printf("\nEnter 3 for None of the above\t");
        scanf("%d", &disc);
    } while(!(disc==1 || disc==2 || disc==3));
    if(disc==1) {
        printf("\n\nCONGRATS ,  RS 100 Discounted (For 'Defence') ");
        fprintf(fp, "\n\nDiscount = Rs 100 (For 'Defence')");
        discountrs=100;
    }
    else if(disc==2) {
        printf("\n\nCONGRATS ,  RS 200 Discounted (For 'Physically Challenged') ");
        fprintf(fp, "\n\nDiscount = Rs 200 (For 'Physically Challenged')");
        discountrs=200;
    }
    else
        printf("\nDetails Entered Successfully ");
    fclose(fp);
}

void totalfair() {
    FILE *fp;
    fp=fopen("F:/C Programming/Notepad saved C programs/C_PROJECTS/file_for_ticket_reservation.txt", "a");
    finalfair=(money+seatfair+distfair+taxfair)-discountrs;
    printf("\n\n\n\n\t\t\tEnter any key to View the Final Price for Ticket bookings\t");
    fflush(stdin);
    getchar();
    printf("\n\t\t\t\t\t\t\t\tEnter 'E' to Exit from the Website\n");
    printf("\t\t\t\t\t\t\tPress Enter key to Proceed\t");
    fflush(stdin);
    scanf("%c", &end);
    if(end=='e' || end=='E')
        exit(0);
    printf("\n\n\n\t\t\tFINAL PRICE INFORMATION");
    fprintf(fp, "\n\n\tFINAL PRICE INFORMATION");
    fprintf(fp, "\n%d x Adult(RS 500) = %d", a, a*500);
    fprintf(fp, "\n%d x Children(RS 250) = %d", na, na*250);
    fprintf(fp, "\n%d x Aged(RS 250) = %d", aged, aged*250);

    fprintf(fp, "\nTotal fair for Seat = %d", money);
    fprintf(fp, "\nFair for seat type = %d", seatfair);
    fprintf(fp, "\nFair for distance = %d", distfair);
    fprintf(fp, "\nFair for tax = %d", taxfair);
    fprintf(fp, "\nDiscount amount = %d", discountrs);
    fprintf(fp, "\n\n\t\tFINAL PAYABLE AMOUNT = %d", finalfair);
    fprintf(fp, "\n\nFair for number of seat reservation = %d",  money);
    fprintf(fp, "\nFair for seat type = %d", seatfair);
    fprintf(fp, "\nFair for distance = %d", distfair);
    fprintf(fp, "\nFair for tax = %d", taxfair);
    fprintf(fp, "\nDiscount amount = %d", discountrs);
    fprintf(fp, "\nFINAL PAYABLE AMOUNT = %d", finalfair);
    fprintf(fp, "\n\n***********************************************************************************");
    fclose(fp);
}

void showfile() {
    char ch;
    FILE *fp;
    fp=fopen("F:/C Programming/Notepad saved C programs/C_PROJECTS/file_for_ticket_reservation.txt", "r");
    if(fp==NULL) {
        printf("\nCannot open file ");
        exit(0);
    }
    while((ch=fgetc(fp))!=-1)
        printf("%c", ch);
    fclose(fp);
}

int main() {
    welcome();
    identity();
    location();
    seattype();
    distance();
    tax();
    discount();
    totalfair();
    showfile();
    return 0;
}


