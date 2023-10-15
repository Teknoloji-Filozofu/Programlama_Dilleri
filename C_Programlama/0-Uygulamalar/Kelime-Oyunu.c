#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
#define QUEUESIZE 20
#include<unistd.h>

typedef struct lvls
{
      
    char words[20][20];
    int wordcountt;
    int wordcount;
    char chars[10];
	lvls*next;
}node;

node*root=NULL;
node*izci;
typedef struct players
{
	int score;
    char knews[20][20];
	players*nextt;
	char plyrname[20];
}nodee;

nodee*roott=NULL;
nodee*iterr;

    char lastgamers[20][20];
    char nowgamer[20];
    char nowword[20];
    int  nowscore;
	int i=0;
	int wordcount;
	int a=0;
	
	
void gotoxy(short x, short y){
	HANDLE hConsoleOutput;
	COORD Cursor_Pos = {x-1,y-1};
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOutput,Cursor_Pos);
}
	
	
	
	char knowing[QUEUESIZE - 1][20];
int frontElement = -1, rearElement = -1;
 
void enQueue(char item[20])
{
    if(rearElement > 19)
    {
        printf("dizi doldu diziyi kucultun ");
    }
    else
    {
        if(frontElement == -1)
        {
            frontElement = frontElement + 1;
        }
          rearElement = rearElement + 1;
       strcpy( knowing[rearElement], item);
    }
}
 
void deQueue()
{
    if(frontElement == -1 || frontElement > rearElement)
    {
    	i=20;
       }
    else
    {
        frontElement = frontElement + 1;
    }
 
}
 
void printQueue()
{
    int i;
    if(frontElement == -1 || frontElement > rearElement)
    {
        printf("dizi bos");
    }
    else
    {
        for( i = rearElement; i >= frontElement; i--)
        {
            printf(" %s \n", knowing[i]);
        }
    }
}

	
	void score(int score){
		
	system("CLS");
	gotoxy(120,1);
	printf("puan: %d",nowscore);
	gotoxy(1,1);
	printf("kalan kelime: %d",izci->wordcount);
	gotoxy(20,16);
		printf("KULLANILACAK HARFLER\n");
		gotoxy(20,18);
	printf("%s",izci->chars);
		gotoxy(60,(30));
		printQueue();	
			gotoxy(20,21);
}
	
	
    void kontrol(node*r,int j,char usersword[20])
{	
	int flag = 0;
	int ctrl=1;
	if(j<=20)
{
	if (!strcmp(usersword,r->words[j]))
{
	for(int k=0;k<=i;k++){
	if(!strcmp(knowing[k],usersword)){
		ctrl=0;
		gotoxy(20,15);
		puts("bu kelime önceden girilmis");
			gotoxy(20,21);
	}
	}
	if (ctrl!=0){
	    flag=1;
	    nowscore+=10;
	    r->wordcount--;
	    
	    	enQueue(usersword);
	   	   i++;
	   score(nowscore);
	   	gotoxy(20,21);
	   	
	   
}
}
	else 
{
	  
	  	gotoxy(20,21);
	    j++;
	    kontrol(izci,j,usersword);
	
	if (j!=20)
{
		flag =1;
}
}
     if (r->wordcount!=0){
	    gets(usersword);
	      	gotoxy(20,21);
	    kontrol(izci,0,usersword);
	}
}

}

    void newplayer(int score,char knews[20],char plyrname[20])
{
	    nodee*iter=roott;
	
	if(roott==NULL)
{
}
	else
{
	while(iter->nextt!=NULL && iter->nextt->score> score )
{
		iter=iter->nextt;
	
}
	
	if(roott->nextt==NULL)
{
	    nodee*newnode=(nodee*)malloc(sizeof(nodee));
	    strcpy(newnode->plyrname,plyrname);
	    strcpy(newnode->knews[0],knews);
	    newnode->score=score;
	    iter->nextt=newnode;
	    newnode->nextt=NULL;

	
}
	else
	
{
	    nodee*newnode=(nodee*)malloc(sizeof(nodee));
	    strcpy(newnode->plyrname,plyrname);
	    newnode->score=score;
	    strcpy(newnode->knews[0],knews);
	    newnode->nextt=iter->nextt;
	    iter->nextt=newnode;
}
}
}
deleter(){
	for(int v=0;v<20;v++){
		strcpy(knowing[v],"aaaaaa");
	}
}
void usrface (){
	int a=1;
	while(1){
	system("CLS");
	a=1;
	puts("lütfen isminizi giriniz");
	scanf("%s",&nowgamer);
	system("CLS");
	izci=root;
while(a==1){
	
	if(izci->wordcount==0){
		izci->wordcount=izci->wordcountt;
		izci=izci->next;
	system("CLS");
	printf("devam etmek için 1 \n yeni oyuncu için 0 \n skorlarý görmek icin lütfen 2 yi tuslayin");
	scanf("%d",&a);
}
    if(a==0){
    	for(int i=0;i<20;i++){
    		deQueue();
		}
		newplayer(nowscore,nowgamer,nowgamer);
         nowscore=0;
    	deleter();
    
	}
	if(a==1){
	score(nowscore);
	gets(nowword);
	kontrol(izci,0,nowword);
	}
	if (a==2){
		newplayer(nowscore,nowgamer,nowgamer);
		iterr=roott;
			int x=0;
		while(iterr->nextt!=NULL){
			iterr=iterr->nextt;
			x++;
			printf("%d. oyuncu; %s puani %d \n",x,iterr->plyrname,iterr->score);
		
		}
			sleep(88);
	}


}
}
}


int main()
{
	
	system("color 0D");
	//---------------------------------------------------------
	
	    nodee*newnodee=(nodee*)malloc(sizeof(nodee));
	    strcpy(newnodee->plyrname,"player name");
	    strcpy(newnodee->knews[0],"knews"); 						//bu kismin olusturulma amaci ilk structýn arkasina eleman atamama bugýný kapatmak.bkz.newplayer
	    newnodee->score=5;
	    roott=newnodee;
	    roott->nextt=NULL;
	
	//----------------------------------------------------------
		node*newnode=(node*)malloc(sizeof(node));
		strcpy(newnode->words[0],"esen");
		strcpy(newnode->words[1],"fes");
		strcpy(newnode->words[2],"sen");
		strcpy(newnode->words[3],"enfes");
		strcpy(newnode->words[4],"ense");
		strcpy(newnode->words[4],"nefes");
		strcpy(newnode->chars,"E,F,S,E,N,E");
		newnode->wordcountt=5;
		newnode->wordcount=5;
		root=newnode;
		izci=newnode;
		newnode->next=NULL;
		node*newnod=(node*)malloc(sizeof(node));
	
		strcpy(newnod->words[0],"ekran");
		strcpy(newnod->words[1],"kare");
		strcpy(newnod->words[2],"kar");
		strcpy(newnod->words[3],"nar");
		strcpy(newnod->words[4],"kenar");
		strcpy(newnod->words[5],"renk");
			strcpy(newnod->words[6],"karne");
		strcpy(newnod->chars,"E,N,R,A,K");
		
		izci->next=newnod;
		newnod->next=NULL;

		newnod->wordcount=5;
		newnod->wordcountt=5;
	
			
			usrface();
     

}
