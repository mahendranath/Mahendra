// TreeConstruction.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
using namespace std;

class Node{
     public:
        Node *left, *right;
        char val; 
        Node(){ left = NULL; right = NULL;}
};

Node* constructTree(string preOrder);

int main()
{
	Node* Tree = constructTree("NLL");
	return 0;
}

Node* constructTree(string preOrder)
{
	Node* head;
	static int i = 0;
	for(i = 0; i <preOrder.length(); i++)
	{
		if(preOrder[i]=='N')
		{
			head = new Node();
			head->val='N';
			i++;
			head->left = constructTree(preOrder.substr(i));
			head->right = constructTree(preOrder.substr(i));
		}
		else
		{
			head = new Node();
			head->val='L';
			head->left = head->right = NULL;
			i++;
		}
	}
	return head;
}