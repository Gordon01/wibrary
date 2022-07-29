#include <stdio.h>
#include "wibrary.h"

int main(int argc, char *argv[])
{
    (void)argc;
    (void)argv;

    const uint8_t sum = 5;
    float data[] = {1.0, 2.0, 3.0};
    const uintptr_t size = sizeof(data) / sizeof(data[0]);

    printf("Input: sum = %d, data = {%f, %f, %f}\n", sum, data[0], data[1], data[2]);
    int32_t result = process(sum, data, size);
    if (result == 0)
    {
        printf("Output: data = {%f, %f, %f}\n", data[0], data[1], data[2]);
    }
    else
    {
        fprintf(stderr, "Error: result = %d\n", result);
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}