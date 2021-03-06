            // QUIZ GAME.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

char p1,c1,C1;

static int amount,ans,correctCount,wrongCount,totalQuestion=10;
int aud=2;
char pname[30];

void gameName() {
    printf("\n\t\t\t\tQUIZ GAME !!! ");
}

void playerName() {
    printf("\n\n\t\tEnter player name\t");
    gets(pname);
}

void rules() {
    printf("\n\n\n\tRULES:");
    printf("\n\nNumber of Questions = 10 ");
    printf("\nNumber of Lifelines = 2 ");
    printf("\nEnter L for using Lifeline ");
    printf("\nPrice after Winning a question = RS 1000 ");
    printf("\nTotal Price = RS 10000 ");
}

void correct() {
    printf("\n\t\tCorrect answer! ");
    printf("\n\t\tYou Won RS 1000 ");
    amount+=1000;
    correctCount++;
}

void wrong() {
    printf("\n\t\tWrong answer! ");
    printf("\n\t\tYou Won RS 0 ");
    wrongCount++;
}

int validate() {
    if(p1!='a'||p1!='A'||p1!='b'||p1!='B'||p1!='c'||p1!='C'||p1!='d'||p1!='D')
        return -1;
    return 5;
}

int lifeline() {
    if(aud>0)
        return 5;
    return -1;
}

void Q1() {
    printf("\nQ1: Which is not a programing language ?\t\tEnter L for Lifeline,remaining=%d\n",aud);
    printf("A: C\nB: C++\nC: Html\nD: Java\t");
    scanf("%c",&p1);
    if(p1=='l'||p1=='L') {
        ans=lifeline();
        c1='c';
        C1='C';
        if(ans==5) {
            printf("\nLifeline available =%d",aud);
            printf("\nLifeline in process ");
            printf("\nCorrect option: %c",C1);
            aud--;
            printf("\n\nEnter your Final answer ");
            fflush(stdin);
            scanf("%c",&p1);
        }
        else if(ans==-1) {
            printf("\nLifeline available =%d",aud);
            printf("\nLifeline Cannot process ");
            printf("\n\nEnter your Final answer ");
            fflush(stdin);
            scanf("%c",&p1);
            fflush(stdin);

        }
    }
    c1='c';
    C1='C';
    if(p1==c1 || p1==C1)
        correct();
    else
        wrong();
}

void Q2() {
    fflush(stdin);
    printf("\n\nQ2: Where was C language discovered ?\t\tEnter L for Lifeline,remaining =%d\n",aud);
    printf("A: Bell labs\nB: A&T labs\nC: Amazon\nD: Microsoft\t");
    scanf("%c",&p1);
    if(p1=='l'||p1=='L') {
        ans=lifeline();
        c1='a';
        C1='A';
        if(ans==5) {
            printf("\nLifeline available =%d",aud);
            printf("\nLifeline in process ");
            printf("\nCorrect option: %c",C1);
            aud--;
            printf("\n\nEnter your Final answer ");
            fflush(stdin);
            scanf("%c",&p1);
        }
        else if(ans==-1) {
            printf("\nLifeline available =%d",aud);
            printf("\nLifeline Cannot process ");
            printf("\n\nEnter your Final answer ");
            fflush(stdin);
            scanf("%c",&p1);
        }
    }
    c1='a';
    C1='A';
    if(p1==c1 || p1==C1)
        correct();
    else
        wrong();
}

void Q3() {
    fflush(stdin);
    printf("\n\nQ3: Who is CEO of Google ?\t\tEnter L for Lifeline,remaining =%d\n",aud);
    printf("A: Ravi Nadela\nB: Satya Nadela\nC: Sundar Pichai\nD: None\t");
    scanf("%c",&p1);
    if(p1=='l'||p1=='L') {
        ans=lifeline();
        c1='c';
        C1='C';
        if(ans==5) {
            printf("\nLifeline available =%d",aud);
            printf("\nLifeline in process ");
            printf("\nCorrect option: %c",C1);
            aud--;
            printf("\n\nEnter your Final answer ");
            fflush(stdin);
            scanf("%c",&p1);
        }
        else if(ans==-1) {
            printf("\nLifeline available =%d",aud);
            printf("\nLifeline Cannot process ");
            printf("\n\nEnter your Final answer ");
            fflush(stdin);
            scanf("%c",&p1);
            fflush(stdin);

        }
    }
    c1='c';
    C1='C';
    if(p1==c1 || p1==C1)
        correct();
    else
        wrong();
}


void Q4() {
    fflush(stdin);
    printf("\n\nQ4: Who is CEO of Microsoft ?\t\tEnter L for Lifeline,remaining =%d\n",aud);
    printf("A: Bill Gates\nB: Satya Nadela\nC: Sundar Pichai\nD: Jeff Bezos\t");
    scanf("%c",&p1);
    if(p1=='l'||p1=='L') {
        ans=lifeline();
        c1='b';
        C1='B';
        if(ans==5) {
            printf("\nLifeline available =%d",aud);
            printf("\nLifeline in process ");
            printf("\nCorrect option: %c",C1);
            aud--;
            printf("\n\nEnter your Final answer ");
            fflush(stdin);
            scanf("%c",&p1);
        }
        else if(ans==-1) {
            printf("\nLifeline available =%d",aud);
            printf("\nLifeline Cannot process ");
            printf("\n\nEnter your Final answer ");
            fflush(stdin);
            scanf("%c",&p1);
            fflush(stdin);

        }
    }
    c1='b';
    C1='B';
    if(p1==c1 || p1==C1)
        correct();
    else
        wrong();
}


void Q5() {
    fflush(stdin);
    printf("\n\nQ5: Who is Owner of Microsoft ?\t\tEnter L for Lifeline,remaining =%d\n",aud);
    printf("A: Ravi Nadela\nB: Satya Nadela\nC: Sundar Pichai\nD: Bill Gates\t");
    scanf("%c",&p1);
    if(p1=='l'||p1=='L') {
        ans=lifeline();
        c1='d';
        C1='D';
        if(ans==5) {
            printf("\nLifeline available =%d",aud);
            printf("\nLifeline in process ");
            printf("\nCorrect option: %c",C1);
            aud--;
            printf("\n\nEnter your Final answer ");
            fflush(stdin);
            scanf("%c",&p1);
        }
        else if(ans==-1) {
            printf("\nLifeline available =%d",aud);
            printf("\nLifeline Cannot process ");
            printf("\n\nEnter your Final answer ");
            fflush(stdin);
            scanf("%c",&p1);
            fflush(stdin);

        }
    }
    c1='d';
    C1='D';
    if(p1==c1 || p1==C1)
        correct();
    else
        wrong();
}


void Q6() {
    printf("\n\nQ6: What is the population of India (year 2019) ?\t\tEnter L for Lifeline,remaining =%d\n",aud);
    printf("A: 100 billion\nB: 200 billion\nC: 130 billion\nD: None\t");
    scanf("%c",&p1);
    if(p1=='l'||p1=='L') {
        ans=lifeline();
        c1='c';
        C1='C';
        if(ans==5) {
            printf("\nLifeline available =%d",aud);
            printf("\nLifeline in process ");
            printf("\nCorrect option: %c",C1);
            aud--;
            printf("\n\nEnter your Final answer ");
            fflush(stdin);
            scanf("%c",&p1);
        }
        else if(ans==-1) {
            printf("\nLifeline available =%d",aud);
            printf("\nLifeline Cannot process ");
            printf("\n\nEnter your Final answer ");
            fflush(stdin);
            scanf("%c",&p1);
            fflush(stdin);

        }
    }
    c1='c';
    C1='C';
    if(p1==c1 || p1==C1)
        correct();
    else
        wrong();
}

void Q7() {
    fflush(stdin);
    printf("\n\nQ7: What is the population of USA (year 2019) ?\t\tEnter L for Lifeline,remaining =%d\n",aud);
    printf("A: 13 billion\nB: 23 billion\nC: 33 billion\nD: 43 billion\t");
    scanf("%c",&p1);
    if(p1=='l'||p1=='L') {
        ans=lifeline();
        c1='c';
        C1='C';
        if(ans==5) {
            printf("\nLifeline available =%d",aud);
            printf("\nLifeline in process ");
            printf("\nCorrect option: %c",C1);
            aud--;
            printf("\n\nEnter your Final answer ");
            fflush(stdin);
            scanf("%c",&p1);
        }
        else if(ans==-1) {
            printf("\nLifeline available =%d",aud);
            printf("\nLifeline Cannot process ");
            printf("\n\nEnter your Final answer ");
            fflush(stdin);
            scanf("%c",&p1);
            fflush(stdin);

        }
    }
    c1='c';
    C1='C';
    if(p1==c1 || p1==C1)
        correct();
    else
        wrong();
}

void Q8() {
    fflush(stdin);
    printf("\n\nQ8: What is the population of Canada (year 2019) ?\t\tEnter L for Lifeline,remaining =%d\n",aud);
    printf("A: 2.5 billion\nB: 3.5 billion\nC: 4.5 billion\nD: 5.5 billion\t");
    scanf("%c",&p1);
    if(p1=='l'||p1=='L') {
        ans=lifeline();
        c1='b';
        C1='B';
        if(ans==5) {
            printf("\nLifeline available =%d",aud);
            printf("\nLifeline in process ");
            printf("\nCorrect option: %c",C1);
            aud--;
            printf("\n\nEnter your Final answer ");
            fflush(stdin);
            scanf("%c",&p1);
        }
        else if(ans==-1) {
            printf("\nLifeline available =%d",aud);
            printf("\nLifeline Cannot process ");
            printf("\n\nEnter your Final answer ");
            fflush(stdin);
            scanf("%c",&p1);
            fflush(stdin);

        }
    }
    c1='b';
    C1='B';
    if(p1==c1 || p1==C1)
        correct();
    else
        wrong();
}


void Q9() {
    fflush(stdin);
    printf("\n\nQ9: Who is called as captain cool in Indian cricket ?\t\tEnter L for Lifeline,remaining =%d\n",aud);
    printf("A: Virat Kohli\nB: MS Dhoni\nC: Kapil Dev\nD: Rohit Sharma\t");
    scanf("%c",&p1);
    if(p1=='l'||p1=='L') {
        ans=lifeline();
        c1='b';
        C1='B';
        if(ans==5) {
            printf("\nLifeline available =%d",aud);
            printf("\nLifeline in process ");
            printf("\nCorrect option: %c",C1);
            aud--;
            printf("\n\nEnter your Final answer ");
            fflush(stdin);
            scanf("%c",&p1);
        }
        else if(ans==-1) {
            printf("\nLifeline available =%d",aud);
            printf("\nLifeline Cannot process ");
            printf("\n\nEnter your Final answer ");
            fflush(stdin);
            scanf("%c",&p1);
            fflush(stdin);

        }
    }
    c1='b';
    C1='B';
    if(p1==c1 || p1==C1)
        correct();
    else
        wrong();
}


void Q10() {
    fflush(stdin);
    printf("\n\nQ10: Who is called Hit-man in Indian cricket ?\t\tEnter L for Lifeline,remaining =%d\n",aud);
    printf("A: Virat Kohli\nB: MS Dhoni\nC: Kapil Dev\nD: Rohit Sharma\t");
    scanf("%c",&p1);
   if(p1=='l'||p1=='L') {
        ans=lifeline();
        c1='d';
        C1='D';
        if(ans==5) {
            printf("\nLifeline available =%d",aud);
            printf("\nLifeline in process ");
            printf("\nCorrect option: %c",C1);
            aud--;
            printf("\n\nEnter your Final answer ");
            fflush(stdin);
            scanf("%c",&p1);
        }
        else if(ans==-1) {
            printf("\nLifeline available =%d",aud);
            printf("\nLifeline Cannot process ");
            printf("\n\nEnter your Final answer ");
            fflush(stdin);
            scanf("%c",&p1);
            fflush(stdin);

        }
    }
    c1='d';
    C1='D';
    if(p1==c1 || p1==C1)
        correct();
    else
        wrong();
}


void start() {
    printf("\n\n\n\t\tGAME STARTS NOW !!!\n\n\n");
    Q1();
    Q2();
    Q3();
    Q4();
    Q5();
    Q6();
    Q7();
    Q8();
    Q9();
    Q10();
}

void result() {
    printf("\n\n\nCongratulations!!!\nYou have won a Brand New MOBILE PHONE ");
    printf("\n\n\t\tTotal Amount Won =%d",amount);
    printf("\nTotal Answered questions =%d",totalQuestion);
    printf("\nTotal Correct answers =%d",correctCount);
    printf("\nTotal Wrong answers =%d",wrongCount);
    printf("\n\n\n\n\t\tTHANK YOU ! %s",pname);
}

int main() {
    gameName();
    playerName();
    rules();
    start();
    result();
    return 0;
}
