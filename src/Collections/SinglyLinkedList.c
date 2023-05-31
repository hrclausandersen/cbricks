#include "std.h"
#include "SinglyLinkedList.h"

typedef struct _node_s node;

struct _singly_linked_list_s
{
    node* first;
    node* last;
    size_t length;
};

struct _node_s
{
    node* next;
    void* value;
};

singly_linked_list* SinglyLinkedList_Create(void)
{
    return calloc(1, sizeof(singly_linked_list));
}

void SinglyLinkedList_Destroy(singly_linked_list* thiz)
{

}

size_t SinglyLinkedList_Length(singly_linked_list* this)
{
    return this->length;
}

bool SinglyLinkedList_Contains(singly_linked_list* this, void* value)
{
    node* n = this->first;
    while(n)
    {
        
    }
}

void SinglyLinkedList_Append(singly_linked_list* this, void* value)
{
    node* n = malloc(sizeof(node));
    n->value = value;
    
    if(this->length == 0)
    {
        this->first = this->last = n;
    }
    else
    {
        this->last->next = n;
        this->last = n;
    }

    this->length++;
}

void SinglyLinkedList_Prepend(singly_linked_list* this, void* value)
{
    node* n = malloc(sizeof(node));
    n->value = value;
    n->next = this->first;
    
    this->first = n;
    this->length++;
}

void SinglyLinkedList_Remove(singly_linked_list* this, void* value)
{

}

