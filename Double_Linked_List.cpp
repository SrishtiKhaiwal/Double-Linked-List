#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *pre;
	struct node *next;
};
int main()
{
	int i=1,n,element,position,choice,j;
	struct node *p,*temp,*newnode,*endnode,*startnode;
	printf("\n Enter the number of nodes");
	scanf("%d",&n);
	printf("\n Enter the node %d ",i);
	scanf("%d",&element);
	startnode=(struct node *)malloc(sizeof(struct node));
	startnode->data=element;
	startnode->pre=NULL;
	startnode->next=NULL;
	endnode=startnode;
	for(i=2;i<=n;i++)
	{
		printf("\nEnter the node %d",i);
		scanf("%d",&element);
		newnode=(struct node *)malloc(sizeof(struct node));
		newnode->data=element;
		newnode->pre=endnode;
		newnode->next=NULL;
		endnode->next=newnode;
		endnode=newnode;
	}
	//Traverse
	p=startnode;
	while(p!=NULL)
	{
		printf("%d",p->data);
		p=p->next;
	}
		printf("\n Insertion & deletion");
	printf("\n 1 Ibegining");
	printf("\n 2 Ilast");
	printf("\n 3 IAny position");
	printf("\n 4 Dbegining");
	printf("\n 5 Dlast");
	printf("\n 6 DAny position");
	printf("\nEnter a choice");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\n Enter the node");
			scanf("%d",&element);
			newnode=(struct node *)malloc(sizeof(struct node));
			newnode->data=element;
			newnode->pre=NULL;
			newnode->next=startnode;
			startnode->pre=newnode;
			startnode=newnode;
			break;
			case 2:
			printf("\n Enter the node");
			scanf("%d",&element);
			newnode=(struct node *)malloc(sizeof(struct node));
			newnode->data=element;
			newnode->next=NULL;
			newnode->pre=endnode;
			endnode->next=newnode;
			newnode=endnode;
			break;
			case 3:
	    printf("\nEnter the value of node")	;
        scanf("%d",&element);
        printf("\n Enter the position");
        scanf("%d",&position);
        newnode = (struct node *)malloc(sizeof(struct node));
            newnode->data = element;
         p = startnode;
        for(i=1;i<position-1;i++)
        {
            p = p->next;
            
        }       
            newnode->next = p->next;       
            newnode->pre = p;           
                p->next->pre = newnode;
                p->next = newnode; 
				break;
				case 4:
				p=startnode;
				startnode=startnode->next;
				startnode->pre=NULL;
				free(p);
				case 5:
				p=endnode;
				endnode=endnode->pre;
				endnode->next=NULL;
				free(p);
				break;
				case 6:
				printf("\n Enter the position");
				scanf("%d",&position);
				p=startnode;
				for(i=1;i<position;i++)
				{
					temp=p;
					p=p->next;
					}
	//if(p!=NULL)
	//{
	//p->next->pre=p->pre;
	//p->pre->next=p->next;
//}
temp->next=p->next;
p->next->pre=temp;
	free(p);
}
				//Traverse
	p=startnode;
	while(p!=NULL)
	{
		printf("%d",p->data);
		p=p->next;
	}
}

