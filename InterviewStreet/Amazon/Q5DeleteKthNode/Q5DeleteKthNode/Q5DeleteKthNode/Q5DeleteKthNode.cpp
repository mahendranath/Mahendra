// Q5DeleteKthNode.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


//int _tmain(int argc, _TCHAR* argv[])
//{
//	return 0;
//}

struct node {

    struct node *next;
    int val;

};
typedef struct node node;
node* deleteLinkedList(node *head, int K);

void main()
{
	node *header;
	node one;
	one.val = 1;

	node two;
	two.val = 2;
	one.next = &two;

	node three;
	three.val=3;
	two.next=&three;

	node four;
	four.val=4;
	four.next=NULL;

	three.next= &four;
	header = &one;

	deleteLinkedList(header,4);

}

node* deleteLinkedList(node *head, int K)
{
	node *traverse = head;
	node *previous;

	if(traverse == NULL)
		return NULL;
	if(K == 1)
	{
		node* temp = head;
		head = head->next;
		return  temp;
	}
	else
	{
		while (traverse->next != NULL && K > 0)
		{
			previous = traverse;
			traverse = traverse->next;
			K--;
		}
		previous->next = traverse->next;
		return traverse;
	}
}