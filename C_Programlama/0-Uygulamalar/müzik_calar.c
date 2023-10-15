#include<stdio.h>
#include<stdlib.h>
#include <string.h>

    typedef struct liste{
	    int x;
	    char music[30];
	    liste*next;
	    liste*prev;
	    float time;
}node;

        node*root=NULL;

    void ekle(char m[30],int i,float t){

	    node*iter;
	    iter=root;

        if(root==NULL){
	        node*newnode=(node*)malloc(sizeof(node));
	        strcpy(newnode->music,m);
	        root=newnode;
	        root->next=root;
	        root->prev=root;
	        root->x=i;
	        root->time=t;
}

        else{
            while(iter->next!=root){
                iter=iter->next;
}
	        node*newnode=(node*)malloc(sizeof(node));
	        newnode->next=iter->next;
	        newnode->prev=iter;
	        iter->next->prev=newnode;
	        iter->next=newnode;
            strcpy(newnode->music,m);
	        newnode->x=i;
	        newnode->time=t;
	
  }
}

    void yazdir(){

	    node*iter;
	    iter=root;
	do{
		printf("%d.  %s  time: %f\n",iter->x,iter->music,iter->time);
		iter=iter->next;
}

	while(iter->next!=root);
		printf("%d.  %s  time: %f\n",iter->x,iter->music,iter->time);
  
}

    void sil(int sira){

	    node*iter;
		iter=root;

	for(int i = 1;i<sira;i++){
        iter=iter->next;
}

	if(root==iter)
	    root=root->next; 
	    iter->prev->next=iter->next;
	    iter->next->prev=iter->prev;
	    free(iter);

}

    void userface(){

	    int i=5;
	    node*iter;
	    iter=root;
        printf(" komutlar \n ilerle ve cal  6 \n geri ve cal  4 \n listele ve durdur  5 \n ekle   8 \n sil  2 \n sonlandir  0  lise basina donemk icin 1 \n\n\n\n");

	while(i!=0){
		scanf("%d",&i);
        if(i==6){
		    if(root==NULL){
                printf("sarki bulunmamaktadir");
}

	    else{
		    iter=iter->next;
		    printf(" calinan sarki: %d.  %s  time: %f\n",iter->x,iter->music,iter->time);
  }
}

	    if(i==4){
		    if(root==NULL){
		        printf("sarki bulunmamaktadir");
}

	    else{
		    iter=iter->prev;
		    printf("calinan sarki: %d.  %s  time: %f\n",iter->x,iter->music,iter->time);
  }
}

 	    if (i==5){
		    if(root==NULL){
		        printf("sarki bulunmamaktadýr");
}

	    else{
		    yazdir();
 }
}

	    if(i==8){
		    int abc;
		    float t;
		    char a[30];

		    printf("sarkinin adini giriniz\n");
	        scanf("%s",a);

            printf("sarkinin numarsini giriniz\n");
 	        scanf("%d",&abc);

            printf("sarkinin süresini giriniz\n");
            scanf("%f",&t);

		    ekle(a,abc,t);
		    iter=root;
}

	    if(i==2){
	        int k;

		    printf("kac numarali sarkiyi silmek istiyorsunuz numarasini giriniz ");
		    scanf("%d ",&k);

		    sil(k);
}

	    if(i==1){
		    iter=root;
		    if(root==NULL){
			    printf("sarki bulunamamaktadir");	
}
		else{
		    printf("calinan sarki: %d.  %s  time: %f\n",iter->x,iter->music,iter->time);
		    iter=iter->next;
	  }
    }	
  }
}


int main(){

	
	//ekle("ali",1,3.10);
    //ekle("veli",2,4.10);
    //ekle("muslum baba",3,5.20);

    //yazdir();

    //sil(1);

    //yazdir();

    userface();

}
