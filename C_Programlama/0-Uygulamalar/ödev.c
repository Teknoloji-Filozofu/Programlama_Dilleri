#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int count=0;

typedef struct winners{
    char name[30];
    winners*next;
}nod;

nod*tailwinner;
nod*rootwinner=NULL;
nod*iterwinner=rootwinner;

typedef struct list{
	char name[30];
	list*next;

}node;

node*root=NULL;
node*tail;
node*iter=root;


void signup(int s){
    printf("isimleri sirayla enter a basarak giriniz\n");
    char name1[30];

	while(count!=s){
        scanf("%s",&name1);
        if (root==NULL){
            node*newnode=(node*)malloc(sizeof(node));
            root=newnode;
            root->next=NULL;
            tail =root;
            strcpy(root->name,name1);
            count++;
}

        else{
            node*newnode=(node*)malloc(sizeof(node));
            strcpy(newnode->name,name1);
            tail->next=newnode;
            tail=newnode;
            tail->next=NULL;
            count++;
    }
  }
}

void addwinners(char name[30]){
    if(rootwinner==NULL){
        nod*newnode=(nod*)malloc(sizeof(nod));
        strcpy(newnode->name,iter->name);
        rootwinner=newnode;
        rootwinner->next=NULL;
        tailwinner=rootwinner;
}
    else{
        nod*newnode=(nod*)malloc(sizeof(nod));
        strcpy(newnode->name,name);
        tailwinner->next=newnode;
        tailwinner=newnode;
        tailwinner->next=NULL;
  }
}

void fonk(){
    iter=root;

    int random=rand()%count;

    if(random==0){
        root=root->next;
        addwinners(iter->name);
        free(iter);
        count--;
}
    else{
        for(int i=0;i<random-1;i++){
            iter=iter->next;
}
        addwinners(iter->next->name);
        iter->next=iter->next->next;
        count--;
  }
}

void printer(){
    iterwinner=rootwinner;
    int i=1;

    while(iterwinner!=NULL){
        printf("%d.%s\n",i,iterwinner->name);
        iterwinner=iterwinner->next;
        i++;
  }
}

int main(){
    int d,d1;
    srand(time(NULL));

    printf("katilimci sayisini giriniz");
    scanf("%d",&d);

    signup(d);

    printf("kac isim cekmek istiyorsunuz?");
    scanf("%d",&d1);

    for(int i=0;i<d1;i++){
        fonk();
}

printf("\----------KAZANANLAR----------/\n");
printer();
}
