#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node *link;
}*header,*ptr,*temp;
void Print();
void add_end();

void initialize(){
    header=(struct Node*)malloc(sizeof(struct Node));
    header->link=NULL;
}


int main()
{
    
    int ch;
    initialize();
while(1){
	 printf("Enter the choices \n 1.add end\n2.Exit\n");
	 scanf("%d",&ch);

	 switch(ch){
		case 1:
		add_end();
		break;
		case 2:
		exit(1);
		default: printf("Wrong Choice");
	 }

       }
 
}
void Print(){
    
    ptr=header->link;
    printf("List is :");
    while(ptr!= NULL){
        printf("  %d",ptr->data);
        ptr=ptr->link;
    }
    printf("\n");
}
void add_end(){
    char ch,c;
    int n;
	
		ch='y';
	while(ch=='y'){
	    ptr=header;
	printf("Enter the value to be added\n");
	scanf("%d",&n);
	temp=(struct node*)malloc(sizeof(struct Node));
	if(temp==NULL){
		printf("Memory Insufficient");
		exit(0);
	}
	while(ptr->link!=NULL){
		ptr=ptr->link;
	}
	temp->data=n;
	temp->link=NULL;
	ptr->link=temp;
	Print();
	while((c = getchar()) != '\n' && c != EOF);
	printf("\n do you want to continue (y/n)");
	scanf("%c",&c);
	ch=c;
	}
}
