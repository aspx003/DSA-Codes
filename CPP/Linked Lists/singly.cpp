#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
	int data;
	struct ListNode *next;
};

int listLength(struct ListNode *head)
{
	struct ListNode *current = head;
	int count = 0;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return count;
}

void insertInLinkedList(struct ListNode **head, int data, int position)
{
	int k = 1;
	struct ListNode *p, *q, *newNode;
	newNode = (ListNode *)malloc(sizeof(struct ListNode));

	if(!newNode) {                                                 // check for memory errors
		printf("Memory Error\n");
		return;
	}

	newNode->data = data;
	p = *head;

	if(position == 1)                                              // insert at the begining
	{
		newNode->next = p;
		*head = newNode;
	} else
	{
		while (p!= NULL && k < position - 1)
		{
			k++;
			q = p;
			q = p->next;
		}
		
		if(p == NULL)                                              // insert at last
		{
			q->next = newNode;
			newNode->next = NULL;
		}
		else                                                       // insert in the middle
		{
			q->next = newNode;
			newNode->next = p;
		}
	}


}

int main()
{
}