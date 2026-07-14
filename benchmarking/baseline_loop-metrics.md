#include <stdio.h>
#include <time.h>

int main(void)
{
const long ITERATIONS = 100000000;
volatile long long sum = 0;   /* volatile prevents optimization */

clock_t start, end;
double cpu_time;

start = clock();

/* Deterministic computation */
for (long i = 1; i <= ITERATIONS; i++)
{
	sum += i;
}

end = clock();

cpu_time = (double)(end - start) / CLOCKS_PER_SEC;

printf("Result = %lld\n", sum);
printf("Execution time = %.6f seconds\n", cpu_time);

return 0;
}
