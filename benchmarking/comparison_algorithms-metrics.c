#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000000

/* Implementation A */
int max_linear(int arr[], int n)
{
    int i;
    int max = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    return max;
}

/* Implementation B */
int max_linear_alt(int arr[], int n)
{
    int i;
    int max = arr[0];

    for (i = 0; i < n; i++)
        max = (arr[i] > max) ? arr[i] : max;

    return max;
}

int main(void)
{
    int *data;
    int i;
    int result1, result2;

    clock_t start, end;

    double time1, time2;

    data = malloc(sizeof(int) * SIZE);

    srand(42);

    for (i = 0; i < SIZE; i++)
        data[i] = rand();

    start = clock();
    result1 = max_linear(data, SIZE);
    end = clock();

    time1 = (double)(end - start) / CLOCKS_PER_SEC;

    start = clock();
    result2 = max_linear_alt(data, SIZE);
    end = clock();

    time2 = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Result A: %d\n", result1);
    printf("Result B: %d\n", result2);

    printf("Implementation A: %.6f seconds\n", time1);
    printf("Implementation B: %.6f seconds\n", time2);

    if (time1 < time2)
        printf("A is %.2fx faster\n", time2 / time1);
    else
        printf("B is %.2fx faster\n", time1 / time2);

    free(data);

    return 0;
}
