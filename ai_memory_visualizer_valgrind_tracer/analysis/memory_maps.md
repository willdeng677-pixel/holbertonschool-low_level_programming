Memory mapping and what each section in the memory holds.

What is variable scope and the lifetime of the

variable in that particular scope. 

**Memory can be divide into the following and much more.**



----------------------------

STACK

----------------------------

FREE SPACE

----------------------------

HEAP

----------------------------

BSS

----------------------------

DATA

example: globa variables

----------------------------

TEXT

example: main() instructions

printf instructions

etc...

----------------------------



       STACK

---------------------------

Stack memory store all the following:

1. Static variables.
2. Pointers variables
3. Local variables.



Stack memory grow downward and is automatically managed. When the

function calls occurred, the variable frame is created in the stack memory.

When the calls is over, the variable frame is removed from the stack

memory. 



Pointer variable in stack memory points and hold memory address in the 

heap memory. Stack memory is faster in case of process.



      HEAP

-------------------------

On the other hand, heap memory stored the following:

1. Address pointed to by the pointer variable in stack memory.
2. Value return from address.



Heap is created and manage manually by the programmer. The process in the heap memory

is slower than that of the stack. Heap memory expand upward toward stack memory.

Pointers variables holding address remain even when the memory is freed in the heap.


**The following happen when heap memory is not manually managed properly:**

1. Memory leaks.
2. Garbage accumulation.
3. Definite lost of pointer variable.
4. Dangling pointer variables
5. Use-after-free. 



      WHO OWN POINTER

---------------------------

The pointer variable which created pointer and hold original address in the memory

is the owner. Hence, it should be the one to free memory in the heap to avoid double

memory free incident.


       ALIASING

--------------------------

Aliasing occurred when a pointer variable is assign to another pointer variable.

In this case, the two pointer variables will point the same address in the heap memory.

The following happen when one of the pointer variable is freed while other pointer variable is not:



1. Dangling pointer variable.
2. Definite lost issue.
3. Memory leak.



After freeing pointer variable address in the heap memory, the pointer

variable will still hold the address. Hence, dereferencing this pointer variable after the memory address

it was pointing to in the heap memory is freed will produce garbage result. This mean that pointer variables

fail quietly. Moreover, the aliased pointer variable becomes dangling pointer variable.

value.



       GOOD PRACTICE

---------------------------

When the heap memory being pointed to by one of two pointer variable is freed, both pointer variables holding

that address MUST be set to NULL. 




