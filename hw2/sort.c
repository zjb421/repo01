struct LinkedNode
{
    char data;
    struct LinkedNode *next;
}

void srt_LL(node *ls) 
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