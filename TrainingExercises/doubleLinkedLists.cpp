#include "doubleLinkedLists.h"

bool isEmpty() { return head == NULL; }

//-------------------------------------------------------------------------------
int getListLength(void)
{
	struct node *current = NULL;
	int length = 0;
	for (current = head; current != NULL; current = current->next) { length++; }
	return length;
}

//-------------------------------------------------------------------------------
void displayForward()
{
	//start from the beginning
	struct node *current = head;
	//navigate till the end of the list
	printf("\n[ ");
	while (current != NULL)
	{
		printf("(%d, %d ) ", current->index, current->data);
		current = current->next;
	}
	printf("]");
}

//-------------------------------------------------------------------------------
void displayBackward()
{
	struct node *current = tail;
	printf("\n[ ");
	while (current != NULL)
	{
		printf("(%d, %d )", current->index, current->data);
		current = current->prev;
	}
	printf("]");
}

//-------------------------------------------------------------------------------
//insert at the beginning of the list
void insertFirst(int index, int data)
{
	struct node *current = (struct node*) malloc(sizeof(node));
	current->index = index;
	current->data = data;
	//if we don't have any item in the list, than the last item will be the current one
	if (isEmpty()) {
		tail = current;
	}
	//if we already have an intem in the list, than we'll update the prev pointer of the head,
	//in order for current to be the first
	else {
		//update first previous node
		head->prev = current;
	}
	//update the next pointer of the current. So current will be the head from now
	current->next = head;

	head = current;
}

//-------------------------------------------------------------------------------
//insert last
void insertLast(int index, int data)
{
	struct node *current = (struct node *) malloc(sizeof(node));
	current->index = index;
	current->data = data;

	if (isEmpty()) {
		tail = current;
	}
	else
	{
		tail->next = current;
		current->prev = tail;
	}
	tail = current;
}

//-------------------------------------------------------------------------------
//delete first 
struct node *deleteFirst()
{
	//save reference to first node
	struct node *tmp = head;
	//if only one item in the list
	if (head->next == NULL) {
		tail = NULL;
	}
	else {
		head->next->prev = NULL;
	}
	//now the head will be the item in the list
	head = head->next;
	//return the tmp node
	return tmp;
}

//-------------------------------------------------------------------------------
//delete last item
struct node *deleteTail()
{
	struct node *tmp = tail;
	//if only one node
	if (head->next == NULL) {
		head = NULL;
	}
	else {
		tail->prev->next = NULL;
	}
	tail = tail->prev;
	return tmp;
}

//-------------------------------------------------------------------------------
//delete by index
struct node *deleteByIndex(int index)
{
	//start from the first node
	struct node *current = head;
	struct node *previous = NULL;

	//if list is empty
	if (head == NULL) {
		return NULL;
	}

	//navigate through list
	while (current->index != index)
	{
		//if is the last node
		if (current->next == NULL) {
			return NULL;
		}
		else {
			//store reference to the current node
			previous = current;
			//move to next node
			current = current->next;
		}
	}

	//if found a match, update the node
	if (current == head) {
		//change first to point to next node
		head = head->next;
	}
	else {
		//bypass current node
		current->prev->next = current->next;
	}

	if (current == tail) {
		//change tail to point to prev node
		tail = tail->prev;
	}
	else {
		current->next->prev = current->prev;
	}
	return current;
}

//-------------------------------------------------------------------------------
bool insertAfter(int index, int newIndex, int data)
{
	//start from the first node
	struct node *current = head;
	//if list is empty
	if (head == NULL) {
		return false;
	}

	//navigate through list
	while (current->index != index) {
		//if is the last node
		if (current->next == NULL) {
			return false;
		}
		else {
			current = current->next;
		}
	}

	//create a node
	struct node *newNode = (struct node*) malloc(sizeof(node));
	newNode->index = newIndex;
	newNode->data = data;

	if (current == tail) {
		newNode->next = NULL;
		tail = newNode;
	}
	else {
		newNode->next = current->next;
		current->next->prev = newNode;
	}

	newNode->prev = current;
	current->next = newNode;
	return true;
}

//-------------------------------------------------------------------------------

