#include <stdio.h>
#include <time.h>

void build_dataset(void)
{
    /* Build data here */
}

void process_dataset(void)
{
    /* Process data here */
}

unsigned long reduce_checksum(void)
{
    return 12345;
}

int main(void)
{
    clock_t total_start, total_end;
    clock_t build_start, build_end;
    clock_t process_start, process_end;
    clock_t reduce_start, reduce_end;

    double total_time;
    double build_time;
    double process_time;
    double reduce_time;

    unsigned long checksum;

    total_start = clock();

    build_start = clock();
    build_dataset();
    build_end = clock();

    process_start = clock();
    process_dataset();
    process_end = clock();

    reduce_start = clock();
    checksum = reduce_checksum();
    reduce_end = clock();

    total_end = clock();

    build_time = (double)(build_end - build_start) / CLOCKS_PER_SEC;
    process_time = (double)(process_end - process_start) / CLOCKS_PER_SEC;
    reduce_time = (double)(reduce_end - reduce_start) / CLOCKS_PER_SEC;
    total_time = (double)(total_end - total_start) / CLOCKS_PER_SEC;

    printf("TOTAL seconds: %.6f\n", total_time);
    printf("BUILD_DATA seconds: %.6f\n", build_time);
    printf("PROCESS seconds: %.6f\n", process_time);
    printf("REDUCE seconds: %.6f\n", reduce_time);

    printf("Checksum: %lu\n", checksum);

    return 0;
}
