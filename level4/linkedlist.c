#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node * next;
};

void	linkedlistTraversal(struct Node *ptr)
{
	while (ptr != NULL)
	{
		printf("Element: %d\n", ptr->data);
		ptr = ptr->next;
	}
}

struct Node *insertAtIndex(struct Node *head, int data, int index)
{
	struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
	struct node *p = head;
	int i = 0;

	while (i!=index - 1)
	{
		p = p->next;
		i++;
	}
	ptr->data = data;
	ptr->next = p->next; //connect next struct of ptr to next struct of p.
	p->next = ptr;  //connect the wire to ptr.
	return head;
}

struct Node	*insertAtFirst(struct Node *head, int data)
{
	struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
	ptr->next = head;
	ptr->data = data;
	return ptr;
}

int main()
{
	struct Node *head;
	struct Node *second;
	struct Node *third;

	head = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));

	head->data = 7;
	head->next = second;

	second->data = 11;
	second->next = third;

	third->data = 66;
	third->next = NULL;
	
	linkedlistTraversal(head);

	return (0);
}
