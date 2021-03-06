#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int width=20,height=20,gameOver;
int x,y,fruitx,fruity,score,flag;
int tailx[100],taily[100];
int countTail=0;

void setup() {
    gameOver=0;
    x=width/2;
    y=height/2;

    label1:
    fruitx=rand()%20;
    if(fruitx==0)
        goto label1;
    label2:
    fruity=rand()%20;
    if(fruity==0)
        goto label2;
    score=0;
}

void draw() {
    int i,j,k,ch;
    system("cls");
    for(i=0;i<width;i++) {
        for(j=0;j<height;j++) {
            if(i==0||i==height-1||j==0||j==width-1)
                printf("*");
            else {
                if(i==x && j==y)
                    printf("O");
                else if(i==fruitx && j==fruity)
                    printf("@");
                else
                    ch=0;
                    for(k=0;k<countTail;k++) {
                        if(i==tailx[k] && j==taily[k]) {
                            printf("o");
                            ch=1;
                        }
                    }
                    if(ch==0)
                        printf(" ");
            }
        }
        printf("\n");
    }
}

void input() {
    if(kbhit()) {
        switch(getch()) {
            case 'a': flag=1;
                      break;
            case 's': flag=2;
                      break;
            case 'w': flag=3;
                      break;
            case 'z': flag=4;
                      break;
            case 'x': gameOver=1;
                      break;
        }
    }
}

void makeLogic() {
    int i;
    int prevx=tailx[0];
    int prevy=taily[0];
    int prev2x,prev2y;
    tailx[0]=x;
    taily[0]=y;
    for(i=1;i<countTail;i++) {
        prev2x=tailx[i];
        prev2y=taily[i];
        tailx[i]=prevx;
        taily[i]=prevy;
        prevx=prev2x;
        prevy=prev2y;
    }

    switch(flag) {
        case 1: y--;
                break;
        case 2: y++;
                break;
        case 3: x--;
                break;
        case 4: x++;
                break;
        default:
                break;
    }

    if(x<0||x>width||y<0||y>height)
        gameOver=1;
    for(i=0;i<countTail;i++) {
        if(x==tailx[i] && y==taily[i])
            gameOver=1;
    }
    if(x==fruitx && y==fruity) {
        label3:
        fruitx=rand()%20;
        if(fruitx==0)
            goto label3;
            label4:
        fruity=rand()%20;
        if(fruity==0)
            goto label4;
        score+=10;
        countTail++;
    }
}

int main() {
    int m,n;
    char c;
    label5:
    setup();
    while(!gameOver) {
        draw();
        input();
        makeLogic();
        for(m=0;m<1000;m++)
            for(n=0;n<10000;n++) {

            }
        for(m=0;m<1000;m++)
            for(n=0;n<1000;n++) {

            }
    } // while
    printf("\n\nPress y to continue: ");
    scanf("%c",&c);
    if(c=='y'||c=='Y')
        goto label5;
    return 0;
}
