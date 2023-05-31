#include "std.h"

typedef struct _singly_linked_list_s singly_linked_list;

singly_linked_list* SinglyLinkedList_Create(void);
void SinglyLinkedList_Destroy(singly_linked_list* this);
size_t SinglyLinkedList_Length(singly_linked_list* this);
bool SinglyLinkedList_Contains(singly_linked_list* this, void* value);
void SinglyLinkedList_Append(singly_linked_list* this, void* value);
void SinglyLinkedList_Prepend(singly_linked_list* this, void* value);
void SinglyLinkedList_Remove(singly_linked_list* this, void* value);
