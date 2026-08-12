crash_example report.

This the output for crash_example program. When running it, the system crash and output 
the below error message. The system return segmentation fault because the already freed pointer
variable was dereference. This is use-after-free issue.

memory_visualizer_valgrind_tracer# ./crash 
crash_example: deterministic NULL dereference (segmentation fault)
requesting n=0
Segmentation fault (core dumped)

This is safe because the problem is obvious and could be easily correct. It is
the result of freeing memory and assign pointer variable that was holding that
address to NULL. Hence, before dereferencing this pointer variable, it must be 
resigned to value.
