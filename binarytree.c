//Program to implement Binary Search Tree
#include<stdio.h>
#include<stdlib.h>

typedef struct bst{
	int data;
	struct bst *left, *right;
}node;



void insert (node **r, int num) {
	node *temp,*ptr;
	ptr=(*node)malloc(sizeof(node));
	ptr->data=num;
	ptr->left=NULL;
	ptr->right=NULL;
	temp=*r;
	if(temp==NULL)
	*r=ptr;
	else{
		if(num > temp->data){
			if(temp->right!=NULL)
			insert(&temp->right,num);
			else
			temp->right=ptr;
		}
		else{
		if(temp->left!=NULL)                                                                        
			insert(&temp->left,num);
			else
			temp->left=ptr;
		}
	}
}
  
  void delete (node **r, int num)
  {
	  node *temp, *parent, **, *xsucc; int F=0;
	  temp=*r;
	  if(temp==NULL)
	  return;
	  search_node(&x,temp,&parent,num,&f);
	  if(f==0){
		  printf("\nthe element %d not found",num);
		  return;
	  }
	  if(x->left==NULL && x->right==NULL)
{
	if(x->data > parent->data)
	   parent->right=x->left;
	   else 
			parent->left=x->right;
			free(x);
		}
		else if(x->left!=NULL && x->right!=NULL)
		{
			xsucc=x->right;
			while(xsucc->left!=NULL)
			{
				xsucc=->left;
			}
			x->data=xsucc->data;
			if(xsucc->data>parent->data)
			parent->right=NULL;
			else
			parent->left=NULL;
		}
			free(x);

void search_node (node **x,node*root,node **parent,int num,int *f){
	node *temp;
	temp=root;
	if(temp==NULL)
			return;
	while(temp!=NULL)
	{
		if(temp->data==num)
		{
			*f=1;
			*x=temp;
			return;
		}
		*parent=temp;
		if(num > temp->data)
		temp=temp->right;
		else
		temp=temp->left;
	}}			
int main()
{
	node *start,*ptr,*temp;
	int i,n,j,no,c;
	printf("ENTER NUMBER OF NODES: ");
	scanf("%d",&n);
	printf("\nENTER NODE NUMBER 1: ");
	start=(node*)malloc(sizeof(node));
	scanf("%d",&start->data);
	temp=start;
	for(i=1;i<n;i++)
	{
		ptr=(node*)malloc(sizeof(node));
		printf("\nENTER NODE NUMBER %d: ",i+1);
		scanf("%d",&ptr->data);
		temp->next=ptr;
		temp=ptr;
	}
	temp->next=NULL;
	do{
		printf("\nENTER YOUR CHOICE\n");
		printf("\n1-INSERTION\n2-DELETION\n3-TRAVERSE\n4-Exit\n\n");
		scanf("%d",&j);
		switch(j)
		{
			case 1:
				printf("\nENTER THE NUMBER TO BE INSERTED: ");
				scanf("%d",&no);
				printf("\nENTER 1 TO INSERT AT THE BEGINING\n");
				printf("ENTER 2 TO INSERT AT THE END\n");
				printf("ENTER 3 TO INSERT AT A SPECIFIED LOCATION\n");
				scanf("%d",&c);
				switch(c)
				{
					case 1:
						insbeg(&start,no);
						break;
					case 2:
						insend(&start,no);
						break;
					case 3:
						insafter(start,no);
						break;
					default:
						printf("\nInvalid Choice.");
						break;
				}
				break;
			case 2:
				printf("\nENTER THE NUMBER TO BE DELETED: ");
				scanf("%d",&no);
				del(&start,no);
				break;
			case 3:
				traverse(start);
				break;
			case 4:
				exit(0);
			default:
				printf("\nInvalid Input.");
				break;		
			}
		}while(1);	
	return 0;
}
