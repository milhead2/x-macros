/**
 * @file main.c
 *
 * @brief: This file contains the main function for the program.
 *
 * @details: The program defines a table of LLL entries and prints them to the console.
 *
 * @note: This project uses the C17 language standard version.
 *
**/
#include <stdio.h>
#include "lld.h"

int main(int argc, char argv[])
{ 
    printf("Hello\n");
    printf("%d elements in table\n", NUM_LLL);
    for (int i = 0; i<NUM_LLL; i++)
    {
        printf("gt[%d] = { %s, %d, %d, %d }\n", i, gt[i].name, gt[i].p1, gt[i].p2, gt[i].p3);
    }
}
