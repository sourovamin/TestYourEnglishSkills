//Test Your English Skills
//Developed By Hossain Amin


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

void menu(void);
void preposition(void);
void prepositionQues(int);
void vocabulary(void);
void vocabularyQues(int);
void verb(void);
void verbQues(int);
void articles(void);
void articlesQues(int);
void help(void);
void credit(void);


void writing(void);
void writing1(void);
void writing2(void);
void writing3(void);
void writing4(void);
void writing5(void);

void word(void);
void wordrand(void);
void word1(void);
void word2(void);
void word3(void);

int main(){
    printf("\n~~~~~~~~~~~~~~~~TEST YOUR ENGLISH SKILL~~~~~~~~~~~~~~~~");
    printf("\n\n\n\n\n\n\t\t       Developed By : Hossain Amin");
    printf("\n\n\n\n\t\t              Press Any Key");
    if(getchar()){
        menu();
    }
}


void menu(){
    system("cls");
    int choice;
    printf("\n~~~~~~~~~~~~~~~~TEST YOUR ENGLISH SKILL~~~~~~~~~~~~~~~~");
    printf("\n\n\n\n\n\t 1. Word Puzzle\n\t 2. Vocabulary Test\n\t 3. Preposition Test\n\t 4. Verb Test\n\t 5. Articles Test\n\t 6. Writing Test\n\t 7. Help\n\t 8. Credit\n\t 9. Exit");
    printf("\n\n\n\t Enter Choice : ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            word();break;
        case 2:
            vocabulary();break;
        case 3:
            preposition();break;
        case 4:
            verb();break;
        case 5:
            articles();break;
        case 6:
            writing();break;
        case 7:
            help();break;
        case 8:
            credit();break;
        case 9:
            exit(0);break;
        default:
            menu();break;
    }
    
}


void help(void){
    system("cls");
    printf("\n         ~~~~~~~~~~~~~~~~HELP~~~~~~~~~~~~~~~~");
    printf("\n\n\n*Select Any Option By Entering Your Choice.");
    printf("\n\n*For Multiple Slection Question Just Tap The Right Answer.\nLike : If 'A' Is The Right One Just Click 'A'.It Doesn't Matter Whether It\nIs Capital Or Not.");
    printf("\n\n*In Term Of Fill The Blanks Question,Write Your Answer In Small Latters.");
    printf("\n\n\n\n\n\n\t\t\t    Press Any Key To Go Back");
    if(getchar()){
        menu();
    }
    
}

void credit(void){
    system("cls");
    printf("\n         ~~~~~~~~~~~~~~~~CREDIT~~~~~~~~~~~~~~~~");
    printf("\n\n\n\n\t\tDeveloped By : Hossain Amin");
    printf("\n\t\tYear : 2013");
    printf("\n\t\tBangladesh");
    
    printf("\n\n\n\n\n\n\t\tPress Any Key To Go Back");
    if(getchar()){
        menu();
    }
}



void wordrand(){
    int r;
    srand(time(NULL));
    r=rand()%3+1;
    
    switch(r){
        case 1:
            word1();break;
        case 2:
            word2();break;
        case 3:
            word3();break;
    }
}




void word(){
    system("cls");
    int n;
    printf("\n   ~~~~~~~~~~~~~~~~WORD PUZZLE~~~~~~~~~~~~~~~~");
    printf("\n\n\n*** HINTS : Make Words As More As Possible With The Given Alphabets.");
    printf("\n\n\n\t1. Play Word Puzzle\n\t2. Main Menu\n\t3.Exit");
    printf("\n\nEnter Choice : ");
    scanf("%d",&n);
    
    switch(n){
        case 1:
            wordrand();break;
        case 2:
            menu();break;
        case 3:
            exit(0);break;
        default:
            word();
    }
}




void word1()
{
    system("cls");
    printf("\n   ~~~~~~~~~~~~~~~~MAKE WORDS WITH~~~~~~~~~~~~~~~~");
    printf("\n\n\n                       R  ~  E  ~  E  ~  G  ~  N  ~  T\n\n");
    int n=0,m,c,x=1,t=0,choice;
    char used[50][10];
    int right=0;
    double score;
    char i[10];
    char w1[]="ere",w2[]="gee",w3[]="get",w4[]="nee",w5[]="tee",w6[]="ten",w7[]="gene",w8[]="gent",w9[]="rent",w10[]="teen";
    char w11[]="tern",w12[]="tree",w13[]="egret",w14[]="enter",w15[]="genre",w16[]="green",w17[]="greet",w18[]="regent",w19[]="net";
    
    
    while(n==0){
        if(t==0){
            printf("\nEnter Word: ");}
        scanf("%s",&i);
        if(!strcmp(i,w1) || !strcmp(i,w2) || !strcmp(i,w3) || !strcmp(i,w4) || !strcmp(i,w5) || !strcmp(i,w6) || !strcmp(i,w7) || !strcmp(i,w8) || !strcmp(i,w9) || !strcmp(i,w10) || !strcmp(i,w11) || !strcmp(i,w12) || !strcmp(i,w13) || !strcmp(i,w14) || !strcmp(i,w15) || !strcmp(i,w16) || !strcmp(i,w17) || !strcmp(i,w18) || !strcmp(i,w19) )
        {
            strcpy(used[x],i);
            c=0;
            for(m=0;m<=x;m++){
                if(!strcmp(used[m],i)){
                    c++;
                }
            }
            
            if(c==1){
                printf("\nright answer!");
                right++;
                printf("\nWord Created: %d",right);
            }
            else{
                printf("\nYou have already used it!");
            }
            x++;
        }
        else{
            printf("\nwrong answer!");
        }
        printf("\n\nPress 1 To Give Up Or Enter Another Word : ");
        scanf("%d",&n);
        t++;
    }
    score=((double)right/(double)19)*100;
    printf("\n\n\n\n ~~~~~~Number Of Word(s) You Have Made Correctly: %d   ~~~~~~",right);
    printf("\n                       Total Words: 19");
    printf("\n                       Your Score: %.2lf",score);
    printf("\n\n\n\n*** All Words From These Alphabates: \n\n");
    printf("%s  \t  %s  \t  %s  \t  %s  \t  %s  \t  %s  \t  %s\n%s  \t  %s  \t  %s  \t  %s  \t  %s  \t  %s\n%s  \t  %s  \t  %s  \t  %s  \t  %s  \t  %s  \n\n\n\n\n",w1,w2,w3,w19,w4,w5,w6,w7,w8,w9,w10,w11,w12,w13,w14,w15,w16,w17,w18);
    
    printf("\tOPTIONS\n\t1. Play Puzzle Game Again\n\t2. Main Menu\n\t3. EXIT\n");
    printf("Enter Choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            wordrand();break;
        case 2:
            menu();break;
        case 3:
            exit(0);
        default:
            menu();
    }
    
}




void word2()
{
    system("cls");
    printf("\n     ~~~~~~~~~~~~~~~~MAKE WORDS WITH~~~~~~~~~~~~~~~~");
    printf("\n\n\n                       M  ~  U  ~  K  ~  S  ~  E  ~  T\n\n");
    int n=0,m,c,x=1,t=0,choice;
    char used[50][10];
    int right=0;
    double score;
    char i[10];
    char w1[]="emu",w2[]="met",w3[]="mus",w4[]="set",w5[]="sue",w6[]="sum",w7[]="use",w8[]="emus",w9[]="muse",w10[]="musk";
    char w11[]="must",w12[]="mute",w13[]="smut",w14[]="stem",w15[]="suet",w16[]="tusk",w17[]="mutes",w18[]="musket";
    
    
    while(n==0){
        if(t==0){
            printf("\nEnter Word: ");}
        scanf("%s",&i);
        if(!strcmp(i,w1) || !strcmp(i,w2) || !strcmp(i,w3) || !strcmp(i,w4) || !strcmp(i,w5) || !strcmp(i,w6) || !strcmp(i,w7) || !strcmp(i,w8) || !strcmp(i,w9) || !strcmp(i,w10) || !strcmp(i,w11) || !strcmp(i,w12) || !strcmp(i,w13) || !strcmp(i,w14) || !strcmp(i,w15) || !strcmp(i,w16) || !strcmp(i,w17) || !strcmp(i,w18) )
        {
            strcpy(used[x],i);
            c=0;
            for(m=0;m<=x;m++){
                if(!strcmp(used[m],i)){
                    c++;
                }
            }
            
            if(c==1){
                printf("\nright answer!");
                right++;
                printf("\nWord Created: %d",right);
            }
            else{
                printf("\nYou have already used it!");
            }
            x++;
        }
        else{
            printf("\nwrong answer!");
        }
        printf("\n\nPress 1 To Give Up Or Enter Another Word : ");
        scanf("%d",&n);
        t++;
    }
    score=((double)right/(double)18)*100;
    printf("\n\n\n~~~~~~Number Of Word(s) You Have Made Correctly: %d   ~~~~~~",right);
    printf("\n                       Total Words: 18");
    printf("\n                       Your Score: %.2lf",score);
    printf("\n\n\n\n*** All Words From These Alphabates: \n\n");
    printf("%s    %s    %s    %s    %s    %s    %s\n%s    %s    %s    %s    %s    %s\n%s    %s    %s    %s    %s  \n\n\n\n\n",w1,w2,w3,w4,w5,w6,w7,w8,w9,w10,w11,w12,w13,w14,w15,w16,w17,w18);
    
    printf("\tOPTIONS\n\t1. Play Puzzle Game Again\n\t2. Main Menu\n\t3. EXIT\n");
    printf("Enter Choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            wordrand();break;
        case 2:
            menu();break;
        case 3:
            exit(0);
        default:
            menu();
    }
    
}




void word3()
{
    system("cls");
    printf("\n    ~~~~~~~~~~~~~~~~MAKE WORDS WITH~~~~~~~~~~~~~~~~");
    printf("\n\n\n                       F  ~  L  ~  U  ~  T  ~  D  ~  E\n\n");
    int n=0,m,c,x=1,t=0,choice;
    char used[50][10];
    int right=0;
    double score;
    char i[10];
    char w1[]="due",w2[]="elf",w3[]="fed",w4[]="flu",w5[]="led",w6[]="let",w7[]="deft",w8[]="duel",w9[]="duet",w10[]="felt";
    char w11[]="feud",w12[]="fled",w13[]="flue",w14[]="fuel",w15[]="left",w16[]="lute",w17[]="delft",w18[]="flute",w19[]="fluted";
    //char w2[]="is";
    //char w3[]="are";
    
    while(n==0){
        if(t==0){
            printf("\nEnter Word: ");}
        scanf("%s",&i);
        if(!strcmp(i,w1) || !strcmp(i,w2) || !strcmp(i,w3) || !strcmp(i,w4) || !strcmp(i,w5) || !strcmp(i,w6) || !strcmp(i,w7) || !strcmp(i,w8) || !strcmp(i,w9) || !strcmp(i,w10) || !strcmp(i,w11) || !strcmp(i,w12) || !strcmp(i,w13) || !strcmp(i,w14) || !strcmp(i,w15) || !strcmp(i,w16) || !strcmp(i,w17) || !strcmp(i,w18) || !strcmp(i,w19) )
        {
            strcpy(used[x],i);
            c=0;
            for(m=0;m<=x;m++){
                if(!strcmp(used[m],i)){
                    c++;
                }
            }
            
            if(c==1){
                printf("\nright answer!");
                right++;
                printf("\nWord Created: %d",right);
            }
            else{
                printf("\nYou have already used it!");
            }
            x++;
        }
        else{
            printf("\nwrong answer!");
        }
        printf("\n\nPress 1 To Give Up Or Enter Another Word : ");
        scanf("%d",&n);
        t++;
    }
    score=((double)right/(double)19)*100;
    printf("\n\n\n\n~~~~~~Number Of Word(s) You Have Made Correctly: %d   ~~~~~~",right);
    printf("\n                       Total Words: 19");
    printf("\n                       Your Score: %.2lf",score);
    printf("\n\n\n\n*** All Words From These Alphabates: \n\n");
    printf("%s    %s    %s    %s    %s    %s    %s\n%s    %s    %s    %s    %s    %s\n%s    %s    %s  \xB2  %s    %s    %s  \n\n\n\n\n",w1,w2,w3,w4,w5,w6,w7,w8,w9,w10,w11,w12,w13,w14,w15,w16,w17,w18,w19);
    
    printf("\tOPTIONS\n\t1. Play Puzzle Game Again\n\t2. Main Menu\n\t3. EXIT\n");
    printf("Enter Choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            wordrand();break;
        case 2:
            menu();break;
        case 3:
            exit(0);
        default:
            menu();
    }
    
}






void preposition(){
    system("cls");
    int n,q;
    printf("\n     ~~~~~~~~~~~~~~~~PREPOSITION TEST~~~~~~~~~~~~~~~~");
    printf("\n\n\n\n    Number Of Questions: ");
    printf("\n\t1. 5\n\t2. 10\n\t3. 15\n\t4. 20\n\n 5. Main Menu\n 6. EXIT");
    printf("\n\nEnter Choice: ");
    scanf("%d",&q);
    switch (q){
        case 1:
            n=5;
            break;
        case 2:
            n=10;
            break;
        case 3:
            n=15;
            break;
        case 4:
            n=20;
            break;
        case 5:
            menu();break;
        case 6:
            exit(0);
        default:
            menu();
    }
    prepositionQues(n);
}





void prepositionQues(int n){
    system("cls");
    int i,choice,r,w,nq[100];
    int countq=0,countr=0;
    i=1;
    double score;
    char blank[30];
    char b1[]="about",b2[]="on",b3[]="for",b4[]="from",b5[]="with",b6[]="to",b7[]="in",b8[]="about",b9[]="with",b10[]="at",b11[]="across",b12[]="at";
start:
    srand(time(NULL));
    r=rand()%30+1;
    nq[i]=r;
    for (w=0;w<i;w++)
        if (nq[w]==r) goto start;
    
    switch(r)
    {
        case 1:
            printf("\n\n\nI am waiting ____ my holiday.");
            printf("\n\nA.for\tB.off\n\nC.to\tD.up\n\n");
            countq++;
            if (toupper(getchar())=='A')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : A.for");break;}
            
        case 2:
            printf("\n\n\nWe will go to Germany ____ a holiday.");
            printf("\n\nA.for\tB.by\n\nC.to\tD.of\n\n");
            countq++;
            if (toupper(getchar())=='A')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
                printf("\n\nWrong!!! The correct answer is : A.for");
            break;
            
        case 3:
            printf("\n\n\nThey are in the absense _____ experience.");
            printf("\n\nA.along\tB.to\n\nC.of\tD.off\n\n");
            countq++;
            if (toupper(getchar())=='C')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : C.of");break;}
            
            
        case 4:
            printf("\n\n\nHe took care ____ him.");
            printf("\n\nA.of\tB.from\n\nC.along\tD.off\n\n");
            countq++;
            if (toupper(getchar())=='A')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : A.of");break;}
            
            
        case 5:
            printf("\n\n\nHe is griping ____ his salary.");
            printf("\n\nA.for\tB.on\n\nC.of\tD.at\n\n");
            countq++;
            if (toupper(getchar())=='D')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : D.at");break;}
            
        case 6:
            printf("\n\n\nHe finally voted ____ her.");
            printf("\n\nA.off\tB.for\n\nC.in\tD.up\n\n");
            countq++;
            if (toupper(getchar())=='B' )
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : B.for");break;}
            
            
        case 7:
            printf("\n\n\nParrents always care _____ their children.");
            printf("\n\nA.about\tB.on\n\nC.after\tD.of\n\n");
            countq++;
            if (toupper(getchar())=='C')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : C.After");break;}
            
            
        case 8:
            printf("\n\n\nHE forgets ____ his promise.");
            printf("\n\nA.to\tB.up\n\nC.from\tD.about\n\n");
            countq++;
            if (toupper(getchar())=='D')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : D.about");break;}
            
            
        case 9:
            printf("\n\n\nThe floor was slippy and so she fell ____.");
            printf("\n\nA.on\tB.over\n\nC.in\t\tD.by\n\n");
            countq++;
            if (toupper(getchar())=='B')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : B.over");break;}
            
            
        case 10:
            printf("\n\n\nShe is busy ____learning.");
            printf("\n\nA.of\tB.on\n\nC.with\tD.after\n\n");
            countq++;
            if (toupper(getchar())=='C')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : C.with");break;}
            
            
        case 11:
            printf("\n\n\nShe is afraid ____ cockroach.");
            printf("\n\nA.on\tB.in\n\nC.of\tD.after\n\n");
            countq++;
            if (toupper(getchar())=='C')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : C.of");break;}
            
        case 12:
            printf("\n\n\nHe is pleased ____ his result.");
            printf("\n\nA.to\tB.with\n\nC.on\tD.in\n\n");
            countq++;
            if (toupper(getchar())=='B')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : B.with");break;}
            
        case 13:
            printf("\n\n\nShe brooded about her health.\nThe preposition used in the sentence is correct.\nWhat it is :");
            printf("\n\nA.True\tB.False\n\n");
            countq++;
            if (toupper(getchar())=='A')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : A.True");break;}
            
        case 14:
            printf("\n\n\nThis language stemmed by Latin.\nThe preposition used in the sentence is correct.\nWhat it is :");
            printf("\n\nA.True\tB.False\n\n");
            countq++;
            if (toupper(getchar())=='B')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : B.False");break;}
            
        case 15:
            printf("\n\n\nI am jealous on her achievements.\nThe preposition used in the sentence is not correct.\nWhat it is :");
            printf("\n\nA.True\tB.False\n\n");
            countq++;
            if (toupper(getchar())=='A')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : A.True");break;}
            
        case 16:
            printf("\n\n\nShe heard from her father.\nThe preposition used in the sentence is not correct.\nWhat it is :");
            printf("\n\nA.True\tB.False\n\n");
            countq++;
            if (toupper(getchar())=='B')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : B.False");break;}
            
            
        case 17:
            printf("\n\n\nShe was amazed at how fast he ran.\nThe preposition used in the sentence is not correct.\nWhat it is :");
            printf("\n\nA.True\tB.False\n\n");
            countq++;
            if (toupper(getchar())=='B')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : B.False");break;}
            
        case 18:
            printf("\n\n\nI am tired of her complaints.\nThe preposition used in the sentence is not correct.\nWhat it is :");
            printf("\n\nA.True\tB.False\n\n");
            countq++;
            if (toupper(getchar())=='B')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : B.False");break;}
            
        case 19:
            printf("\n\n\nHe was serious _____ hiking");
            countq++;
            printf("\nAnswer : ");
            scanf("%s",&blank);
            if (!strcmp(blank,b1))
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : about");break;}
            
        case 20:
            printf("\n\n\nSourov is _____ vacation in June 11.");
            countq++;
            printf("\nAnswer : ");
            scanf("%s",&blank);
            if (!strcmp(blank,b2))
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : on");break;}
            
        case 21:
            printf("\n\n\nU.K. stands ____ United KIngdom.");
            countq++;
            printf("\nAnswer : ");
            scanf("%s",&blank);
            if (!strcmp(blank,b3))
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : for");break;}
            
        case 22:
            printf("\n\n\nShe derives a lot of pleasure _____ her work.");
            countq++;
            printf("\nAnswer : ");
            scanf("%s",&blank);
            if (!strcmp(blank,b4))
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : from");break;}
            
        case 23:
            printf("\n\n\nShe is bored _____ her boy friend.");
            countq++;
            printf("\nAnswer : ");
            scanf("%s",&blank);
            if (!strcmp(blank,b5))
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : with");break;}
            
        case 24:
            printf("\n\n\nI stand _____ my belief.");
            countq++;
            printf("\nAnswer : ");
            scanf("%s",&blank);
            if (!strcmp(blank,b6))
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : to");break;}
            
        case 25:
            printf("\n\n\nHe believes _____ God.");
            countq++;
            printf("\nAnswer : ");
            scanf("%s",&blank);
            if (!strcmp(blank,b7))
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : in");break;}
            
        case 26:
            printf("\n\n\nThey often quarrel _____ trivial things.");
            countq++;
            printf("\nAnswer : ");
            scanf("%s",&blank);
            if (!strcmp(blank,b8))
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : about");break;}
            
        case 27:
            printf("\n\n\nI feel bored _____ this game.");
            countq++;
            printf("\nAnswer : ");
            scanf("%s",&blank);
            if (!strcmp(blank,b9))
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : with");break;}
            
        case 28:
            printf("\n\n\nI am good _____ tennis.");
            countq++;
            printf("\nAnswer : ");
            scanf("%s",&blank);
            if (!strcmp(blank,b10))
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : at");break;}
            
        case 29:
            printf("\n\n\nShe walked _____ the road.");
            countq++;
            printf("\nAnswer : ");
            scanf("%s",&blank);
            if (!strcmp(blank,b11))
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : across");break;}
            
        case 30:
            printf("\n\n\nThe lion went _____ the rabbit.");
            countq++;
            printf("\nAnswer : ");
            scanf("%s",&blank);
            if (!strcmp(blank,b12))
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : at");break;}
            
            
            
            
    }
    i++;
    if(i<=n) goto start;
    
    printf("\n\n\n\n\xB2\xB2\xB2\xB2\xB2   Number Of Answers You Have Given Correctly: %d   \xB2\xB2\xB2\xB2\xB2",countr);
    printf("\n                       Total Questions: %d",n);
    score=((double)countr/(double)n)*100;
    printf("\n                       Your Score: %.2lf\n\n\n",score);
    
    printf("\tOPTIONS\n\t1.Do Preposition Test Again\n\t2. Main Menu\n\t3. EXIT\n");
    printf("Enter Choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            preposition();break;
        case 2:
            menu();break;
        case 3:
            exit(0);
        default:
            menu();
    }
    
}





void vocabulary(){
    system("cls");
    int n,q;
    printf("\n         ~~~~~~~~~~~~~~~~VOCABULARY TEST~~~~~~~~~~~~~~~~");
    printf("\n\n\n\n    Number Of Questions: ");
    printf("\n\t1. 5\n\t2. 10\n\t3. 15\n\t4. 20\n\n 5. Main Menu\n 6. EXIT");
    printf("\n\nEnter Choice: ");
    scanf("%d",&q);
    switch (q){
        case 1:
            n=5;
            break;
        case 2:
            n=10;
            break;
        case 3:
            n=15;
            break;
        case 4:
            n=20;
            break;
        case 5:
            menu();break;
        case 6:
            exit(0);
        default:
            menu();
    }
    vocabularyQues(n);
}





void vocabularyQues(int n){
    system("cls");
    int i,choice,r,w,nq[100];
    int countq=0,countr=0;
    i=1;
    double score;
    char blank[30];
    char b1[]="irritate",b2[]="wolf",b3[]="straw",b4[]="cake";
start:
    srand(time(NULL));
    r=rand()%30+1;
    nq[i]=r;
    for (w=0;w<i;w++)
        if (nq[w]==r) goto start;
    
    switch(r)
    {
        case 1:
            printf("\n\n\nMeaning of 'rejoices' :");
            printf("\n\nA.jump for joy\tB.palpably\n\nC.a priori\tD.spellbinding\n\n");
            countq++;
            if (toupper(getchar())=='A')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : A.jump for joy");break;}
            
        case 2:
            printf("\n\n\nSynonym of 'invigoration' :");
            printf("\n\nA.a rush\tB.xenophobic\n\nC.agitative\tD.nontransferable\n\n");
            countq++;
            if (toupper(getchar())=='A')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
                printf("\n\nWrong!!! The correct answer is : A.a rush");
            break;
            
        case 3:
            printf("\n\n\n'Crown prince' means : ");
            printf("\n\nA.familiar\tB.a rich prince\n\nC.apparent heir\tD.a kingdom without prince\n\n");
            countq++;
            if (toupper(getchar())=='C')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : C.apparent heir");break;}
            
            
        case 4:
            printf("\n\n\nWord with the same meaning of 'harmony' :");
            printf("\n\nA.symphonies\tB.aardvark\n\nC.shamefulness\tD.kind\n\n");
            countq++;
            if (toupper(getchar())=='A')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : A.symphonies");break;}
            
            
        case 5:
            printf("\n\n\nWhich word is differnt from others by meaning?");
            printf("\n\nA.nip\tB.mutilate\n\nC.mangle\tD.rapture\n\n");
            countq++;
            if (toupper(getchar())=='D')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : D.rapture");break;}
            
        case 6:
            printf("\n\n\nWhich word is differnt from others by meaning?");
            printf("\n\nA.track\tB.influence\n\nC.route\tD.path\n\n");
            countq++;
            if (toupper(getchar())=='B' )
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : B.influence");break;}
            
            
        case 7:
            printf("\n\n\nSynonym of 'proportion' :");
            printf("\n\nA.all gone\tB.duodenal\n\nC.amount\tD.natural\n\n");
            countq++;
            if (toupper(getchar())=='C')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : C.amount");break;}
            
            
        case 8:
            printf("\n\n\nSynonym of 'securely' :");
            printf("\n\nA.all off\tB.empyral\n\nC.delicate\tD.rigidly\n\n");
            countq++;
            if (toupper(getchar())=='D')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : D.rigidly");break;}
            
            
        case 9:
            printf("\n\n\n'Perspired' means :");
            printf("\n\nA.early death\tB.secret\n\nC.maternally\t\tD.feel love\n\n");
            countq++;
            if (toupper(getchar())=='B')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : B.secret");break;}
            
            
        case 10:
            printf("\n\n\nOposite word of 'widely' :");
            printf("\n\nA.planer\tB.global\n\nC.locally\tD.godlessness\n\n");
            countq++;
            if (toupper(getchar())=='C')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : C.locally");break;}
            
            
        case 11:
            printf("\n\n\nOposite word of 'beat-up' :");
            printf("\n\nA.napkins\tB.abdoment\n\nC.organized\tD.born\n\n");
            countq++;
            if (toupper(getchar())=='C')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : C.organized");break;}
            
        case 12:
            printf("\n\n\nAntonym of 'careful' :");
            printf("\n\nA.bumbershot\tB.thoughtless\n\nC.upstart\tD.sequela\n\n");
            countq++;
            if (toupper(getchar())=='B')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : B.thoughtless");break;}
            
        case 13:
            printf("\n\n\n'Horizon' means skyline.\nWhat it is :");
            printf("\n\nA.True\tB.False\n\n");
            countq++;
            if (toupper(getchar())=='A')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : A.True");break;}
            
        case 14:
            printf("\n\n\n'have a bee in your bonnet' means :\nto talk a lot about something you think is important.\nWhat it is :");
            printf("\n\nA.True\tB.False\n\n");
            countq++;
            if (toupper(getchar())=='A')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : B.True");break;}
            
        case 15:
            printf("\n\n\n'Tycoon' means capitalist.\nWhat it is :");
            printf("\n\nA.True\tB.False\n\n");
            countq++;
            if (toupper(getchar())=='A')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : A.True");break;}
            
        case 16:
            printf("\n\n\nAttractive,Catching,Bewitching,Charming :\nThese words have same meaning.\nWhat it is :");
            printf("\n\nA.True\tB.False\n\n");
            countq++;
            if (toupper(getchar())=='A')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : B.True");break;}
            
            
        case 17:
            printf("\n\n\n'Archway' means getup.\nWhat it is :");
            printf("\n\nA.True\tB.False\n\n");
            countq++;
            if (toupper(getchar())=='B')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : B.False");break;}
            
        case 18:
            printf("\n\n\n'Slothful' means active in work.\nWhat it is :");
            printf("\n\nA.True\tB.False\n\n");
            countq++;
            if (toupper(getchar())=='B')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : B.False");break;}
            
        case 19:
            printf("\n\n\nWhich word goes with 'prickling' :\nirritate/beautiful/kiss.");
            countq++;
            printf("\nAnswer : ");
            scanf("%s",&blank);
            if (!strcmp(blank,b1))
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : irritate");break;}
            
        case 20:
            printf("\n\n\nThe phrase 'cry ____' means lying.");
            countq++;
            printf("\nAnswer : ");
            scanf("%s",&blank);
            if (!strcmp(blank,b2))
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : wolf");break;}
            
        case 21:
            printf("\n\n\nThe phrase 'last ____' means the final problem.");
            countq++;
            printf("\nAnswer : ");
            scanf("%s",&blank);
            if (!strcmp(blank,b3))
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : straw");break;}
            
        case 22:
            printf("\n\n\nThe phrase 'piece of  ____' means a very simple task.");
            countq++;
            printf("\nAnswer : ");
            scanf("%s",&blank);
            if (!strcmp(blank,b4))
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : cake");break;}
            
        case 23:
            printf("\n\n\nSet up or found : ");
            printf("\n\nA.Establish\tB.Link\n\nC.a Aggregate\tD.Obvious\n\n");
            countq++;
            if (toupper(getchar())=='A')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : A.Establish");break;}
            
        case 24:
            printf("\n\n\nPut into something : ");
            printf("\n\nA.identical\tB.neutral\n\nC.insert\tD.principal\n\n");
            countq++;
            if (toupper(getchar())=='C')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : C.insert ");break;}
            
        case 25:
            printf("\n\n\nTerminate,end or take out  : ");
            printf("\n\nA.pose\tB.eliminate\n\nC.start\tD.encounter\n\n");
            countq++;
            if (toupper(getchar())=='B')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : B.eliminate ");break;}
            
        case 26:
            printf("\n\n\nHighly unusual or rare but not the single instance : ");
            printf("\n\nA.abandon\tB.deviate\n\nC.unique\tD.commission\n\n");
            countq++;
            if (toupper(getchar())=='C')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : C.unique ");break;}
        case 27:
            printf("\n\n\nA relation of direct opposition : ");
            printf("\n\nA.manipulate\tB.couple\n\nC.contribute\tD.contrary\n\n");
            countq++;
            if (toupper(getchar())=='D')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : D.contrary ");break;}
            
        case 28:
            printf("\n\n\nRepeat a passage from : ");
            printf("\n\nA.establish\tB.retain\n\nC.quote\tD.occupy\n\n");
            countq++;
            if (toupper(getchar())=='C')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : C.quote ");break;}
            
        case 29:
            printf("\n\n\nKeep under control : ");
            printf("\n\nA.punishment\tB.output\n\nC.restrain\tD.shift\n\n");
            countq++;
            if (toupper(getchar())=='C')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : C.restrain ");break;}
            
        case 30:
            printf("\n\n\nGrow old or older : ");
            printf("\n\nA.recover\tB.heal\n\nC.mature\tD.nuclear\n\n");
            countq++;
            if (toupper(getchar())=='C')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : C.mature ");break;}
            
            
            
            
    }
    i++;
    if(i<=n) goto start;
    
    printf("\n\n\n\n~~~~~~Number Of Answers You Have Given Correctly: %d   ~~~~~~",countr);
    printf("\n                       Total Questions: %d",n);
    score=((double)countr/(double)n)*100;
    printf("\n                       Your Score: %.2lf\n\n\n",score);
    
    printf("\tOPTIONS\n\t1.Vocabulary Test Again\n\t2. Main Menu\n\t3. EXIT\n");
    printf("Enter Choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            vocabulary();break;
        case 2:
            menu();break;
        case 3:
            exit(0);
        default:
            menu();
    }
    
}







void articles(){
    system("cls");
    int n,q;
    printf("\n        ~~~~~~~~~~~~~~~~ARTICLES TEST~~~~~~~~~~~~~~~~");
    printf("\n\n\n\n    Number Of Questions: ");
    printf("\n\t1. 5\n\t2. 10\n\t3. 15\n\t4. 20\n\n 5. Main Menu\n 6. EXIT");
    printf("\n\n*** HINTS : Use '*' Where No Article Is Needed.");
    printf("\n\nEnter Choice: ");
    scanf("%d",&q);
    switch (q){
        case 1:
            n=5;
            break;
        case 2:
            n=10;
            break;
        case 3:
            n=15;
            break;
        case 4:
            n=20;
            break;
        case 5:
            menu();break;
        case 6:
            exit(0);
        default:
            menu();
    }
    articlesQues(n);
}





void articlesQues(int n){
    system("cls");
    int i,choice,r,w,nq[100];
    int countq=0,countr=0;
    i=1;
    double score;
    char blank[30];
    char b1[]="the",b2[]="*",b3[]="*",b4[]="a",b5[]="an",b6[]="a",b7[]="the",b8[]="a",b9[]="the",b10[]="*",b11[]="a",b12[]="the";
start:
    srand(time(NULL));
    r=rand()%30+1;
    nq[i]=r;
    for (w=0;w<i;w++)
        if (nq[w]==r) goto start;
    
    switch(r)
    {
        case 1:
            printf("\n\n\nI've got ___ good news for you.");
            printf("\n\nA.no article\tB.a\n\nC.an\tD.the\n\n");
            countq++;
            if (toupper(getchar())=='A')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : A.no article");break;}
            
        case 2:
            printf("\n\n\nGive me ____ book which is on the table, please.");
            printf("\n\nA.the\tB.a\n\nC.an\tD.none\n\n");
            countq++;
            if (toupper(getchar())=='A')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
                printf("\n\nWrong!!! The correct answer is : A.the");
            break;
            
        case 3:
            printf("\n\n\n Isn't his father ____ doctor?");
            printf("\n\nA.the\tB.an\n\nC.a\tD.none\n\n");
            countq++;
            if (toupper(getchar())=='C')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : C.a");break;}
            
            
        case 4:
            printf("\n\n\nJohn showed ____ great courage in that event");
            printf("\n\nA.no article\tB.a\n\nC.an\tD.the\n\n");
            countq++;
            if (toupper(getchar())=='A')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : A.no article");break;}
            
            
        case 5:
            printf("\n\n\nDo you think we'll have ____ good weather for our holiday?");
            printf("\n\nA.a\tB.an\n\nC.the\tD.none\n\n");
            countq++;
            if (toupper(getchar())=='D')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : D.none");break;}
            
        case 6:
            printf("\n\n\nI am eating ____ apple.");
            printf("\n\nA.a\tB.an\n\nC.the\tD.none\n\n");
            countq++;
            if (toupper(getchar())=='B' )
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : B.an");break;}
            
            
        case 7:
            printf("\n\n\nWhat ____ nice garden!");
            printf("\n\nA.the\tB.an\n\nC.a\tD.none\n\n");
            countq++;
            if (toupper(getchar())=='C')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : C.a");break;}
            
            
        case 8:
            printf("\n\n\nI've read lots of ____ books about it.");
            printf("\n\nA.a\tB.an\n\nC.the\tD.none\n\n");
            countq++;
            if (toupper(getchar())=='D')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : D.none");break;}
            
            
        case 9:
            printf("\n\n\nHe shows ____ good taste in clothes.");
            printf("\n\nA.a\tB.an\n\nC.the\t\tD.none\n\n");
            countq++;
            if (toupper(getchar())=='D')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : D.none");break;}
            
            
        case 10:
            printf("\n\n\nShe is ____ busy learning.");
            printf("\n\nA.a\tB.an\n\nC.the\tD.none\n\n");
            countq++;
            if (toupper(getchar())=='D')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : D.none");break;}
            
            
        case 11:
            printf("\n\n\nCould you put these plates on ____ table please!");
            printf("\n\nA.a\tB.an\n\nC.the\tD.none\n\n");
            countq++;
            if (toupper(getchar())=='C')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : C.the");break;}
            
        case 12:
            printf("\n\n\nHe is pleased ____ his result.");
            printf("\n\nA.a\tB.an\n\nC.the\tD.none\n\n");
            countq++;
            if (toupper(getchar())=='D')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : D.none");break;}
            
        case 13:
            printf("\n\n\nAtlanta is in the USA.\nThe article used in the sentence is correct.\nWhat it is :");
            printf("\n\nA.True\tB.False\n\n");
            countq++;
            if (toupper(getchar())=='A')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : A.True");break;}
            
        case 14:
            printf("\n\n\nI haven't got a courage to tell him.This sentence does not have any problem\nWhat it is :");
            printf("\n\nA.True\tB.False\n\n");
            countq++;
            if (toupper(getchar())=='B')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : B.False");break;}
            
        case 15:
            printf("\n\n\nWould you like the piece of toast or an orange?\nThe article used in the sentence is not correct.\nWhat it is :");
            printf("\n\nA.True\tB.False\n\n");
            countq++;
            if (toupper(getchar())=='A')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : A.True");break;}
            
        case 16:
            printf("\n\n\nLove is a wonderful thing.\nThe article used in the sentence is not correct.\nWhat it is :");
            printf("\n\nA.True\tB.False\n\n");
            countq++;
            if (toupper(getchar())=='B')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : B.False");break;}
            
            
        case 17:
            printf("\n\n\nJim plays the piano very well.\nThe article used in the sentence is not correct.\nWhat it is :");
            printf("\n\nA.True\tB.False\n\n");
            countq++;
            if (toupper(getchar())=='B')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : B.False");break;}
            
        case 18:
            printf("\n\n\nMike's mother bought him a guitar for his birthday .\nThe article used in the sentence is not correct.\nWhat it is :");
            printf("\n\nA.True\tB.False\n\n");
            countq++;
            if (toupper(getchar())=='B')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : B.False");break;}
            
        case 19:
            printf("\n\n\nLove makes ____ world go round");
            countq++;
            printf("\nAnswer : ");
            scanf("%s",&blank);
            if (!strcmp(blank,b1))
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : the");break;}
            
        case 20:
            printf("\n\n\nSourov is on ____ vacation in June 11.");
            countq++;
            printf("\nAnswer : ");
            scanf("%s",&blank);
            if (!strcmp(blank,b2))
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : *");break;}
            
        case 21:
            printf("\n\n\nU.K. stands for ____ United KIngdom.");
            countq++;
            printf("\nAnswer : ");
            scanf("%s",&blank);
            if (!strcmp(blank,b3))
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : *");break;}
            
        case 22:
            printf("\n\n\nAriane has got ____ German car.");
            countq++;
            printf("\nAnswer : ");
            scanf("%s",&blank);
            if (!strcmp(blank,b4))
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : a");break;}
            
        case 23:
            printf("\n\n\n He was determined to be ____ author.");
            countq++;
            printf("\nAnswer : ");
            scanf("%s",&blank);
            if (!strcmp(blank,b5))
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : an");break;}
            
        case 24:
            printf("\n\n\nI'm ____ marketing adviser at Unifleet.");
            countq++;
            printf("\nAnswer : ");
            scanf("%s",&blank);
            if (!strcmp(blank,b6))
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : a");break;}
            
        case 25:
            printf("\n\n\nNew York is in ____ United States of America.");
            countq++;
            printf("\nAnswer : ");
            scanf("%s",&blank);
            if (!strcmp(blank,b7))
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : the");break;}
            
        case 26:
            printf("\n\n\nI'm thinking of buying ____ new pair of trousers.");
            countq++;
            printf("\nAnswer : ");
            scanf("%s",&blank);
            if (!strcmp(blank,b8))
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : a ");break;}
            
        case 27:
            printf("\n\n\nWhere's ____ electric heater?");
            countq++;
            printf("\nAnswer : ");
            scanf("%s",&blank);
            if (!strcmp(blank,b9))
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : the");break;}
            
        case 28:
            printf("\n\n\nI am good at _____ tennis.");
            countq++;
            printf("\nAnswer : ");
            scanf("%s",&blank);
            if (!strcmp(blank,b10))
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : *");break;}
            
        case 29:
            printf("\n\n\nIn the end there was ____ war between the two countries.");
            countq++;
            printf("\nAnswer : ");
            scanf("%s",&blank);
            if (!strcmp(blank,b11))
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : a");break;}
            
        case 30:
            printf("\n\n\nThe lion went at ____ rabbit.");
            countq++;
            printf("\nAnswer : ");
            scanf("%s",&blank);
            if (!strcmp(blank,b12))
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : the");break;}
            
            
            
            
    }
    i++;
    if(i<=n) goto start;
    
    printf("\n\n\n\n~~~~~~Number Of Answers You Have Given Correctly: %d   ~~~~~~",countr);
    printf("\n                       Total Questions: %d",n);
    score=((double)countr/(double)n)*100;
    printf("\n                       Your Score: %.2lf\n\n\n",score);
    
    printf("\tOPTIONS\n\t1.Do Preposition Test Again\n\t2. Main Menu\n\t3. EXIT\n");
    printf("Enter Choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            articles();break;
        case 2:
            menu();break;
        case 3:
            exit(0);
        default:
            menu();
    }
    
}







void verb(){
    system("cls");
    int n,q;
    printf("\n       ~~~~~~~~~~~~~~~~VERB TEST~~~~~~~~~~~~~~~~");
    printf("\n\n\n\n    Number Of Questions: ");
    printf("\n\t1. 5\n\t2. 10\n\t3. 15\n\t4. 20\n\n 5. Main Menu\n 6. EXIT");
    printf("\n\nEnter Choice: ");
    scanf("%d",&q);
    switch (q){
        case 1:
            n=5;
            break;
        case 2:
            n=10;
            break;
        case 3:
            n=15;
            break;
        case 4:
            n=20;
            break;
        case 5:
            menu();break;
        case 6:
            exit(0);
        default:
            menu();
    }
    verbQues(n);
}





void verbQues(int n){
    system("cls");
    int i,choice,r,w,nq[100];
    int countq=0,countr=0;
    i=1;
    double score;
    char blank[30];
    char b1[]="were",b2[]="broken",b3[]="stand",b4[]="give",b5[]="leaking",b6[]="running",b7[]="live",b8[]="watch",b9[]="had",b10[]="were";
start:
    srand(time(NULL));
    r=rand()%28+1;
    nq[i]=r;
    for (w=0;w<i;w++)
        if (nq[w]==r) goto start;
    
    switch(r)
    {
        case 1:
            printf("\n\n\nSupty ____ go to the concert tomorrow.");
            printf("\n\nA.won't\tB.don't\n\nC.isn't\tD.wasn't\n\n");
            countq++;
            if (toupper(getchar())=='A')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : A.won't");break;}
            
        case 2:
            printf("\n\n\nIt was wrong ____ a lie.");
            printf("\n\nA.to tell\tB.tells\n\nC.to be told\tD.told\n\n");
            countq++;
            if (toupper(getchar())=='A')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
                printf("\n\nWrong!!! The correct answer is : A.to tell");
            break;
            
        case 3:
            printf("\n\n\nThey never _____ wine.");
            printf("\n\nA.drinking\tB.drunk\n\nC.drink\tD.drinks\n\n");
            countq++;
            if (toupper(getchar())=='C')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : C.drink");break;}
            
            
        case 4:
            printf("\n\n\nToki ____ in Dhaka for two years.");
            printf("\n\nA.has lived\tB.lived\n\nC.live\tD.living\n\n");
            countq++;
            if (toupper(getchar())=='A')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : A.has lived");break;}
            
            
        case 5:
            printf("\n\n\nWe ____ when he arrived.");
            printf("\n\nA.are sleeping\tB.sleep\n\nC.have slept\tD.were sleeping\n\n");
            countq++;
            if (toupper(getchar())=='D')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : D.were sleeping");break;}
            
        case 6:
            printf("\n\n\nShe let me ____ her laptop.");
            printf("\n\nA.uses\tB.use\n\nC.using\tD.be used\n\n");
            countq++;
            if (toupper(getchar())=='B' )
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : B.use");break;}
            
            
        case 7:
            printf("\n\n\nShe ____ Sourov last night.");
            printf("\n\nA.meet\tB.have met\n\nC.met\tD.will meet\n\n");
            countq++;
            if (toupper(getchar())=='C')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : C.After");break;}
            
            
        case 8:
            printf("\n\n\nHave you ____ Barbara?");
            printf("\n\nA.see\tB.saw\n\nC.seeing\tD.seen\n\n");
            countq++;
            if (toupper(getchar())=='D')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : D.seen");break;}
            
        case 9:
            printf("\n\n\nI ____ them soon");
            printf("\n\nA.visit\tB.will visit\n\nC.had been visiting\t\tD.have visited\n\n");
            countq++;
            if (toupper(getchar())=='B')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : B.will visit");break;}
            
            
        case 10:
            printf("\n\n\nShe is busy ____learning.");
            printf("\n\nA.of\tB.on\n\nC.with\tD.after\n\n");
            countq++;
            if (toupper(getchar())=='C')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : C.with");break;}
            
            
        case 11:
            printf("\n\n\nRafi as well as his sister ____ going to party.");
            printf("\n\nA.are\tB.has\n\nC.is\tD.been\n\n");
            countq++;
            if (toupper(getchar())=='C')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : C.is");break;}
            
        case 12:
            printf("\n\n\nI can't put off ____ my task any longer.");
            printf("\n\nA.been doing\tB.to do\n\nC.doing\tD.to be doing\n\n");
            countq++;
            if (toupper(getchar())=='C')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : C.doing");break;}
            
        case 13:
            printf("\n\n\nShe brooded about her health.\nThe verb used in the sentence is correct.\nWhat it is :");
            printf("\n\nA.True\tB.False\n\n");
            countq++;
            if (toupper(getchar())=='A')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : A.True");break;}
            
        case 14:
            printf("\n\n\nIf it had not been for the snow,the plane could have taken off\nVerbs used in the sentence are correct.\nWhat it is :");
            printf("\n\nA.True\tB.False\n\n");
            countq++;
            if (toupper(getchar())=='B')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : B.False");break;}
            
        case 15:
            printf("\n\n\nBy the time you getting Portland,I ll be there.\nVerbs used in the sentence are not correct.\nWhat it is :");
            printf("\n\nA.True\tB.False\n\n");
            countq++;
            if (toupper(getchar())=='A')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : A.True");break;}
            
        case 16:
            printf("\n\n\nWhen are they going?Next Sunday.\nVerbs used in the sentence are not correct.\nWhat it is :");
            printf("\n\nA.True\tB.False\n\n");
            countq++;
            if (toupper(getchar())=='B')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : B.False");break;}
            
            
        case 17:
            printf("\n\n\nI didn't hear what that man said.\nVerbs used in the sentence are not correct.\nWhat it is :");
            printf("\n\nA.True\tB.False\n\n");
            countq++;
            if (toupper(getchar())=='B')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : B.False");break;}
            
        case 18:
            printf("\n\n\nI am tired of her complaints.\nVerbs used in the sentence are not correct.\nWhat it is :");
            printf("\n\nA.True\tB.False\n\n");
            countq++;
            if (toupper(getchar())=='B')
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : B.False");break;}
            
        case 19:
            printf("\n\n\nI wish there _____(be) no war.");
            countq++;
            printf("\nAnswer : ");
            scanf("%s",&blank);
            if (!strcmp(blank,b1))
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : were");break;}
            
        case 20:
            printf("\n\n\nThere was a ____(break) in the sink .");
            countq++;
            printf("\nAnswer : ");
            scanf("%s",&blank);
            if (!strcmp(blank,b2))
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : broken");break;}
            
        case 21:
            printf("\n\n\nU.K. ____(stand) for United KIngdom.");
            countq++;
            printf("\nAnswer : ");
            scanf("%s",&blank);
            if (!strcmp(blank,b3))
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : stand");break;}
            
        case 22:
            printf("\n\n\nShe didn't _____(give) us anything.");
            countq++;
            printf("\nAnswer : ");
            scanf("%s",&blank);
            if (!strcmp(blank,b4))
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : give");break;}
            
        case 23:
            printf("\n\n\nHe repaired his roof to stop it from ____(leak).");
            countq++;
            printf("\nAnswer : ");
            scanf("%s",&blank);
            if (!strcmp(blank,b5))
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : leaking");break;}
            
        case 24:
            printf("\n\n\nLook at the _____(run) tiger.");
            countq++;
            printf("\nAnswer : ");
            scanf("%s",&blank);
            if (!strcmp(blank,b6))
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : running");break;}
            
        case 25:
            printf("\n\n\nLong _____(live) the king.");
            countq++;
            printf("\nAnswer : ");
            scanf("%s",&blank);
            if (!strcmp(blank,b7))
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : live");break;}
            
        case 26:
            printf("\n\n\nHe likes to ____(watch) movie.");
            countq++;
            printf("\nAnswer : ");
            scanf("%s",&blank);
            if (!strcmp(blank,b8))
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : watch");break;}
            
        case 27:
            printf("\n\n\nShe _____(be) a problem last week.");
            countq++;
            printf("\nAnswer : ");
            scanf("%s",&blank);
            if (!strcmp(blank,b9))
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : had");break;}
            
        case 28:
            printf("\n\n\nI wish,I ____(be) a bird.");
            countq++;
            printf("\nAnswer : ");
            scanf("%s",&blank);
            if (!strcmp(blank,b10))
            {printf("\n\nCorrect!!!");countr++; break;}
            else
            {printf("\n\nWrong!!! The correct answer is : were");break;}
            
            
            
            
    }
    i++;
    if(i<=n) goto start;
    
    printf("\n\n\n\n\xB2\xB2\xB2\xB2\xB2   Number Of Answers You Have Given Correctly: %d   \xB2\xB2\xB2\xB2\xB2",countr);
    printf("\n                       Total Questions: %d",n);
    score=((double)countr/(double)n)*100;
    printf("\n                       Your Score: %.2lf\n\n\n",score);
    
    printf("\tOPTIONS\n\t1.Do Verb Test Again\n\t2. Main Menu\n\t3. EXIT\n");
    printf("Enter Choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            verb();break;
        case 2:
            menu();break;
        case 3:
            exit(0);
        default:
            menu();
    }
    
}


void writing(){
    system("cls");
    int n;
    int cid;
    printf("\n        ~~~~~~~~~~~~~~~~WRITING TEST~~~~~~~~~~~~~~~~");
    printf("\n\n\n\n***HINTS: Re-write the sentences correctly.Do not give space after any special\ncharacter like (.),(,),(:).Be carefull about capital and small letter.Also use\nright form of verbs");
    printf("\n\n\n\n\xB2\xB2\xB2  Press '0' for Main Menu,Any Other Key To Proceed : ");
    
    srand(time(NULL));
    n=rand()%5+1;
    if(scanf("%d",&cid)==0){
        menu();
    }
    else{
        switch(n){
            case 1:
                writing1();break;
            case 2:
                writing2();break;
            case 3:
                writing3();break;
            case 4:
                writing4();break;
            case 5:
                writing5();break;
            default:
                writing();
        }
    }
}





void writing1()
{
    system("cls");
    char line[400];
    char b1[]="On cold,wet morning,my class was filled with excitement.";
    char b2[]="Someone had discovered that the next day was our teacher's birthday.";
    char b3[]="Our teacher was the kindest person that ever existed.";
    char b4[]="Everyone wanted to get her a present.";
    char b5[]="I,very much wanted to show any appreciation too.";
    int part=0,choice;
    int right=0;
    double score;
    
    printf("\n~~~~~~~~~~~~~~RE-WRITE THE PARAGRAPH CORRECTLY~~~~~~~~~~~~~~");
    
    printf("\n\n\non cold,wet morning,my class was filled about excitement.\nSomeone have discover that the next day was our teacher's birthday.\nOur teacher was the kinder person that ever exist.\nEveryone wants to get her a present.\nI,very much wanted to shown any appreciation too.\n\n\n\n");
    
    printf("~~~~   on cold,wet morning,my class was filled about excitement.\n");
    printf("Re-write Correctly :\n");
    gets(line);
    if(!strcmp(line,b1)){
        printf("\nCorrect!!!");
    }
    else{
        printf("\nFirst One Is Done For You:\nOn cold,wet morning,my class was filled with excitement.");
    }
    
    printf("~~~~   Someone have discover that the next day was our teacher's birthday\n");
    printf("Re-write Correctly :\n");
    gets(line);
    part++;
    if(!strcmp(line,b2)){
        printf("\n\nCorrect!!!");
        right++;
    }
    else{
        printf("\nWrong!!!Correct Answer :\nSomeone had discovered that the next day was our teacher's birthday");
    }
    
    
    printf("\n\n~~~~   Our teacher was the kinder person that ever exist.\n");
    printf("Re-write Correctly :\n");
    gets(line);
    part++;
    if(!strcmp(line,b3)){
        printf("\n\nCorrect!!!");
        right++;
    }
    else{
        printf("\nWrong!!!Correct Answer :\nOur teacher was the kindest person that ever existed.");
    }
    
    printf("\n\n~~~~   Everyone wants to get her a present.\n");
    printf("Re-write Correctly :\n");
    gets(line);
    part++;
    if(!strcmp(line,b4)){
        printf("\n\nCorrect!!!");
        right++;
    }
    else{
        printf("\nWrong!!!Correct Answer :\nEveryone wanted to get her a present.");
    }
    
    printf("\n\n~~~~   I,very much wanted to shown any appreciation too.\n");
    printf("Re-write Correctly :\n");
    gets(line);
    part++;
    if(!strcmp(line,b5)){
        printf("\n\nCorrect!!!");
        right++;
    }
    else{
        printf("\nWrong!!!Correct Answer :\nI,very much wanted to show any appreciation too.");
    }
    
    
    printf("\n\n\n\n~~~~~~Number Of Sentence(s) You Have Written Correctly: %d   ~~~~~~",right);
    printf("\n                       Total Sentences: %d",part);
    score=((double)right/(double)part*100);
    printf("\n                       Your Score: %.2lf\n\n\n",score);
    
    
    
    
    printf("\tOPTIONS\n\t1.Do Writing Test Again\n\t2. Main Menu\n\t3. EXIT\n");
    printf("Enter Choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            writing();break;
        case 2:
            menu();break;
        case 3:
            exit(0);
        default:
            menu();
    }
    
    
    
}







void writing2()
{
    system("cls");
    char line[400];
    char b1[]="In 1942,Howard built the largest airplane in the world at that time.";
    char b2[]="It was a cargo plane.";
    char b3[]="He took great pleasure in flying.";
    char b4[]="He broke a number of aviation records.";
    char b5[]="In 1938,he flew around the world beating the record time that existed then.";
    int part=0,choice;
    int right=0;
    double score;
    
    printf("\n~~~~~~~~~~~~~~RE-WRITE THE PARAGRAPH CORRECTLY~~~~~~~~~~~~~~");
    printf("\n\n\In 1942,howard builted the largest airplane in the world at that time.\nIt is an cargo plane.\nHe takes great pleasure into flying.\nHe broke a number about aviation records..\nIn 1938,he fly around the world beating the record time that exist then.\n\n\n\n");
    
    printf("~~~~   In 1942,howard builted the largest airplane in the world at that time.\n");
    printf("Re-write Correctly :\n");
    gets(line);
    if(!strcmp(line,b1)){
        printf("\nCorrect!!!");
    }
    else{
        printf("\nFirst One Is Done For You:\nIn 1942,Howard built the largest airplane in the world at that time.");
    }
    
    printf("\n\n~~~~   It is an cargo plane.\n");
    printf("Re-write Correctly :\n");
    gets(line);
    part++;
    if(!strcmp(line,b2)){
        printf("\n\nCorrect!!!");
        right++;
    }
    else{
        printf("\nWrong!!!Correct Answer :\nIt was a cargo plane.");
    }
    
    
    printf("\n\n~~~~   He takes great pleasure into flying.\n");
    printf("Re-write Correctly :\n");
    gets(line);
    part++;
    if(!strcmp(line,b3)){
        printf("\n\nCorrect!!!");
        right++;
    }
    else{
        printf("\nWrong!!!Correct Answer :\nHe took great pleasure in flying.");
    }
    
    printf("\n\n~~~~   He break a number about aviation records.\n");
    printf("Re-write Correctly :\n");
    gets(line);
    part++;
    if(!strcmp(line,b4)){
        printf("\n\nCorrect!!!");
        right++;
    }
    else{
        printf("\nWrong!!!Correct Answer :\nHe broke a number of aviation records.");
    }
    
    printf("\n\n~~~~   In 1938,he fly around the world beating the record time that exist then.\n");
    printf("Re-write Correctly :\n");
    gets(line);
    part++;
    if(!strcmp(line,b5)){
        printf("\n\nCorrect!!!");
        right++;
    }
    else{
        printf("\nWrong!!!Correct Answer :\nIn 1938,he flew around the world beating the record time that existed then.");
    }
    
    
    printf("\n\n\n\n~~~~~~Number Of Sentence(s) You Have Written Correctly: %d   ~~~~~~",right);
    printf("\n                       Total Sentences: %d",part);
    score=((double)right/(double)part*100);
    printf("\n                       Your Score: %.2lf\n\n\n",score);
    
    
    
    
    printf("\tOPTIONS\n\t1.Do Writing Test Again\n\t2. Main Menu\n\t3. EXIT\n");
    printf("Enter Choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            writing();break;
        case 2:
            menu();break;
        case 3:
            exit(0);
        default:
            menu();
    }
    
    
    
}








void writing3()
{
    system("cls");
    char line[400];
    char b1[]="This happens in London.";
    char b2[]="A man is crossing a road.";
    char b3[]="The traffic begins to move.";
    char b4[]="A motorcyclist hits the man.";
    char b5[]="The motorcyclist falls off of his bike.";
    int part=0,choice;
    int right=0;
    double score;
    
    printf("\n~~~~~~~~~~~~~~RE-WRITE THE PARAGRAPH CORRECTLY~~~~~~~~~~~~~~");
    
    printf("\n\n\nthis happens in london.\nA man is cross a road.\nThe traffic begin to moving.\nAn motorcyclist hit the man.\nThe Motorcyclist fall off of his bike.\n\n\n\n");
    
    printf("~~~~   this happens in london.\n");
    printf("Re-write Correctly :\n");
    gets(line);
    if(!strcmp(line,b1)){
        printf("\nCorrect!!!");
    }
    else{
        printf("\nFirst One Is Done For You:\nThis happens in London.");
    }
    
    printf("\n\n~~~~   A man is cross a road.\n");
    printf("Re-write Correctly :\n");
    gets(line);
    part++;
    if(!strcmp(line,b2)){
        printf("\n\nCorrect!!!");
        right++;
    }
    else{
        printf("\nWrong!!!Correct Answer :\nA man is crossing a road.");
    }
    
    
    printf("\n\n~~~~   The traffic begin to moving.\n");
    printf("Re-write Correctly :\n");
    gets(line);
    part++;
    if(!strcmp(line,b3)){
        printf("\n\nCorrect!!!");
        right++;
    }
    else{
        printf("\nWrong!!!Correct Answer :\nThe traffic begins to move.");
    }
    
    printf("\n\n~~~~   An motorcyclist hit the man.\n");
    printf("Re-write Correctly :\n");
    gets(line);
    part++;
    if(!strcmp(line,b4)){
        printf("\n\nCorrect!!!");
        right++;
    }
    else{
        printf("\nWrong!!!Correct Answer :\nA motorcyclist hits the man.");
    }
    
    printf("\n\n\xB2\xB2\xB2   The Motorcyclist fall off of his bike.\n");
    printf("Re-write Correctly :\n");
    gets(line);
    part++;
    if(!strcmp(line,b5)){
        printf("\n\nCorrect!!!");
        right++;
    }
    else{
        printf("\nWrong!!!Correct Answer :\nThe motorcyclist falls off of his bike.");
    }
    
    
    printf("\n\n\n\n~~~~~~Number Of Sentence(s) You Have Written Correctly: %d   ~~~~~~",right);
    printf("\n                       Total Sentences: %d",part);
    score=((double)right/(double)part*100);
    printf("\n                       Your Score: %.2lf\n\n\n",score);
    
    
    
    
    printf("\tOPTIONS\n\t1.Do Writing Test Again\n\t2. Main Menu\n\t3. EXIT\n");
    printf("Enter Choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            writing();break;
        case 2:
            menu();break;
        case 3:
            exit(0);
        default:
            menu();
    }
    
    
    
}





void writing4()
{
    system("cls");
    char line[400];
    char b1[]="A man was born in 1765.";
    char b2[]="He was born in France.";
    char b3[]="He took the first photograph in the world.";
    char b4[]="The taking of this photograph took 8 hours.";
    char b5[]="The man took 16 photographs.";
    int part=0,choice;
    int right=0;
    double score;
    
    printf("\n~~~~~~~~~~~~~~RE-WRITE THE PARAGRAPH CORRECTLY~~~~~~~~~~~~~~");
    
    printf("\n\n\nA men was born on 1765.\nhe is born at france.\nHe take an first photographs in the world.\nThe take of this photograph takes 8 hours.\na man take 16 photograph.\n\n\n\n");
    
    printf("~~~~   A men was born on 1765.\n");
    printf("Re-write Correctly :\n");
    gets(line);
    if(!strcmp(line,b1)){
        printf("\nCorrect!!!");
    }
    else{
        printf("\nFirst One Is Done For You:\nA man was born in 1765.");
    }
    
    printf("\n\n~~~~   he is born at France.\n");
    printf("Re-write Correctly :\n");
    gets(line);
    part++;
    if(!strcmp(line,b2)){
        printf("\n\nCorrect!!!");
        right++;
    }
    else{
        printf("\nWrong!!!Correct Answer :\nHe was born in France.");
    }
    
    
    printf("\n\n~~~~   He take an first photographs in the world.\n");
    printf("Re-write Correctly :\n");
    gets(line);
    part++;
    if(!strcmp(line,b3)){
        printf("\n\nCorrect!!!");
        right++;
    }
    else{
        printf("\nWrong!!!Correct Answer :\nHe took the first photograph in the world.");
    }
    
    printf("\n\n~~~~  The take of this photograph takes 8 hours.\n");
    printf("Re-write Correctly :\n");
    gets(line);
    part++;
    if(!strcmp(line,b4)){
        printf("\n\nCorrect!!!");
        right++;
    }
    else{
        printf("\nWrong!!!Correct Answer :\nThe taking of this photograph took 8 hours.");
    }
    
    printf("\n\n~~~~  a man take 16 photograph.\n");
    printf("Re-write Correctly :\n");
    gets(line);
    part++;
    if(!strcmp(line,b5)){
        printf("\n\nCorrect!!!");
        right++;
    }
    else{
        printf("\nWrong!!!Correct Answer :\nThe man took 16 photograph.");
    }
    
    
    printf("\n\n\n\n~~~~~~Number Of Sentence(s) You Have Written Correctly: %d   ~~~~~~",right);
    printf("\n                       Total Sentences: %d",part);
    score=((double)right/(double)part*100);
    printf("\n                       Your Score: %.2lf\n\n\n",score);
    
    
    
    
    printf("\tOPTIONS\n\t1.Do Writing Test Again\n\t2. Main Menu\n\t3. EXIT\n");
    printf("Enter Choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            writing();break;
        case 2:
            menu();break;
        case 3:
            exit(0);
        default:
            menu();
    }
    
    
    
}







void writing5()
{
    system("cls");
    char line[400];
    char b1[]="Do you like cats?";
    char b2[]="If so,this news is for you!";
    char b3[]="There is a small island in Japan.";
    char b4[]="Many cats live there.";
    char b5[]="There are more cats than people there!";
    int part=0,choice;
    int right=0;
    double score;
    
    printf("\n~~~~~~~~~~~~~~RE-WRITE THE PARAGRAPH CORRECTLY~~~~~~~~~~~~~~");
    
    printf("\n\n\nDo you likes cats.\nIf so, This news had for you!\nThere are a small island into Japan.\nMany cat lives there.\nThere are more cats then people there!\n\n\n\n");
    
    printf("~~~~   Do you likes cats.\n");
    printf("Re-write Correctly :\n");
    gets(line);
    if(!strcmp(line,b1)){
        printf("\nCorrect!!!");
    }
    else{
        printf("\nFirst One Is Done For You:\nDo you like cats?");
    }
    
    printf("\n\n~~~~   If so,This news had for you!\n");
    printf("Re-write Correctly :\n");
    gets(line);
    part++;
    if(!strcmp(line,b2)){
        printf("\n\nCorrect!!!");
        right++;
    }
    else{
        printf("\nWrong!!!Correct Answer :\nIf so,this news is for you!");
    }
    
    
    printf("\n\n~~~~   There are a small island into Japan.\n");
    printf("Re-write Correctly :\n");
    gets(line);
    part++;
    if(!strcmp(line,b3)){
        printf("\n\nCorrect!!!");
        right++;
    }
    else{
        printf("\nWrong!!!Correct Answer :\nThere is a small island in Japan.");
    }
    
    printf("\n\n~~~~   Many cat lives there.\n");
    printf("Re-write Correctly :\n");
    gets(line);
    part++;
    if(!strcmp(line,b4)){
        printf("\n\nCorrect!!!");
        right++;
    }
    else{
        printf("\nWrong!!!Correct Answer :\nMany cats live there.");
    }
    
    printf("\n\n~~~~   There are more cats then people there!\n");
    printf("Re-write Correctly :\n");
    gets(line);
    part++;
    if(!strcmp(line,b5)){
        printf("\n\nCorrect!!!");
        right++;
    }
    else{
        printf("\nWrong!!!Correct Answer :\nThere are more cats than people there!");
    }
    
    
    printf("\n\n\n\n~~~~~~Number Of Sentence(s) You Have Written Correctly: %d   ~~~~~~",right);
    printf("\n                       Total Sentences: %d",part);
    score=((double)right/(double)part*100);
    printf("\n                       Your Score: %.2lf\n\n\n",score);
    
    
    
    
    printf("\tOPTIONS\n\t1.Do Writing Test Again\n\t2. Main Menu\n\t3. EXIT\n");
    printf("Enter Choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            writing();break;
        case 2:
            menu();break;
        case 3:
            exit(0);
        default:
            menu();
    }
    
    
    
}

