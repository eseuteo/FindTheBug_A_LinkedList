#include "LinkedList.h"

/* Creates an empty List */
TList Create() {
	return NULL;
}

/* Insert in the head of the list */
// This function has 1 bug.
void Insert(TList * plist, int data) {
	TList auxNode = (TList) malloc(sizeof(TNode));
	auxNode->data = data;
	auxNode->next = *plist;
	(*plist) = auxNode;
}

// TNode  auxNode = {data, (*plist)->next};
// (*plist) = &auxNode;

/* Displays the content of the list */
// This function has 1 bug
void Show(TList plist) {
	while (plist != NULL) {
		printf("%d ", plist->data);
		plist = plist->next;
	}
	printf("\n");
}

/* Deletes the head of the list */
// This function has several bugs
void Delete(TList * plist) {
	TList aux = * plist;
	*plist = (*plist)->next;
	free(aux);
}

/* Destroys the list and sets it to NULL */
// This function has 1 missing operation
void Destroy(TList * plist) {
	TList ptr = (*plist);
	TList aux;
	while (ptr != NULL) {
		aux = ptr;
		ptr = ptr->next;
		free(aux);
	}
	(*plist) = NULL;
}

