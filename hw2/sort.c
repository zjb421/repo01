struct LinkedNode
{
    char data;
    struct LinkedNode *next;
}

//Problem 1
void srt_LL(LinkedNode *ls) 
{
	struct LinkedNode *node=NULL;
	struct LinkedNode *head = NULL;
	char headChar;
	node = ls;
	while(node != NULL) 
	{
		head = node;
		while (head->next != NULL) 
		{
			if(head->data > head->next->data) 
			{
				headChar = head->data;
				head->data = head->next -> data;
				head->next->data = headChar;
			}
			head = head->next;
		}
		node = node->next
	}
}

//Problem 4

LinkedNode commElem(struct LinkedNode *l, struct LinkedNode *m) {
	struct LinkedNode *current;

	while(l != NULL)
	{
		current = m;
		while (current != NULL) 
		{
			if(current->data == l->data)
			{
				return current;
			}
			current = current->next;
		}
		l = l->next;
	}
	return NULL;
}
