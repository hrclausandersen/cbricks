#include "std.h"
#include "SinglyLinkedList.h"

typedef struct
{
  const char* name;
  int age;
} person;


int main(void)
{
  printf("Starting...\n");

  singly_linked_list* list = SinglyLinkedList_Create();

  printf("Length=%u\n", SinglyLinkedList_Length(list));

  person* p1 = malloc(sizeof(person));
  p1->name = "Joe Doe";
  p1->age = 123;
  SinglyLinkedList_Append(list, p1);

  printf("Length=%u\n", SinglyLinkedList_Length(list));

  return 0;
}