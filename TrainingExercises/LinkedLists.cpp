#include "LinkedLists.h"

//======================================================
void printList(nod *next)
{
	nod *current = next;
	while (current != NULL)
	{
		//	cout << current->val <<"\n";
		printf("%d\n", current->val);
		current = current->next;
	}
}

//======================================================
void push(int val, nod *head)
{
	nod *current = head;
	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = (struct nod*) malloc(sizeof(nod));
	current->next->val = val;
	current->next->next = NULL;
}

//======================================================
void pushFront(int val, nod **head)
{
	nod *newNod = (struct nod*) malloc(sizeof(nod));
	newNod->val = val;
	newNod->next = *head;
	*head = newNod;
}

//======================================================
int popFront(nod **head)
{
	int returnValue = -1;
	nod *nextNod = NULL;
	if (*head == NULL) { return -1; }

	//save the next item that head points to
	nextNod = (*head)->next;
	returnValue = (*head)->val;

	//free the head item
	free(*head);

	//set the head to be the next item that we've stored on the side
	*head = nextNod;

	return returnValue;
}

//======================================================
int popBack(nod *head)
{
	int retVal = 0;
	if (head->next == NULL)
	{
		retVal = head->val;
		free(head);
		return retVal;
	}

	//get the last node in the list
	nod *current = head;
	while (current->next->next != NULL)
	{
		current = current->next;
	}

	//now the current pointer points to the last item on the list, so let's remove it
	retVal = current->next->val;
	free(current->next);
	current->next = NULL;
	return retVal;
}

//======================================================
int removeByIndex(nod **head, int index)
{
	int retVal = 0;
	int i = 0;
	nod *current = *head;
	nod *temp = NULL;

	if (index == 0)
	{
		return popFront(head);
	}

	for (int i = 0; i < index - i; i++)
	{
		if (current->next == NULL) { return -1; }
		current = current->next;
	}

	temp = current->next;
	retVal = temp->val;
	current->next = temp->next;
	free(temp);

	return retVal;
}
//======================================================