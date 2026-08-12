This is the result of running aliasing program. In aliasing file containing the following variables.
int *a
int *b

All pointers are type integers. int *a was copied or assigned to int *b casing an aliasing.
int *a pointer memory was freed leaving int *b as a dangling pointer. Good practice is that,
do not dereference aliasing pointer after the pointer owner memory is freed. Now program tried 
to dereference and print int *b after int *a memory which was freed. This case the following:
1. Garbage return as value.
2. dangling pointer
3. Memory leak 

a=0x5573e5f986b0 b=0x5573e5f986b0 a[2]=22 b[2]=22
after free(a): b=0x5573e5f986b0 (dangling)
reading b[2]=984013325
wrote b[3]=1234

Characteristic of pointer
The following are some of the pointer behavior:
1. It fail quietly
2. Definite lost
3. Dangling pointer

The good practice after pointer memory address is freed is:
Assign pointer variable to NULL.
Assign aliases pointer variable to NULL.
Do not dereference pointer variable after freed.

Assigning pointer variable which was pointing to the freed memory to NULL
will prevent access to that memory and produce segmentation faults.

The following output shows two pointers pointing to the same memory address
with the name Alice, and age and Bob, and age. The pointer which point to the 
both names (Alice and Bob) was partially freed. The pointer variable pointing to 
the both names was freed. However, the pointer variable pointing to their ages was
not.

./heap
heap_example: allocations and a deliberate leak
alice=0x55723c3396b0 name=0x55723c3396d0 age=30
bob=0x55723c3396f0 name=0x55723c339710 age=41
