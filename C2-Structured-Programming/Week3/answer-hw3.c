/******************************************************************************
 * Copyright (C) 2024 by Abdelrahman Kamal - Learn-In-Depth Diploma
 *****************************************************************************/
/**
 * @file answer-hw3.c
 * @brief The implementation of the week 4's assignment.
 *
 * This is the source file for the implementation of the general reading
 * from files and doing process on them program.
 * @author Abdelrahman Kamal
 *
 */

 /**********************************************************************
 * Includes
 **********************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**********************************************************************
 * Preprocessor Macros
 **********************************************************************/
#define SIZE    100

/**********************************************************************
 * Modular Variables
 **********************************************************************/
 int size;

/**********************************************************************
 * Function Prototypes
 **********************************************************************/
void calculateAverage (int[], int);
void calculateMax (int [], int);
void readData (FILE *ptr, int d[], int *size);

int main(void)
{
    /* Define an integer array of size 100
    * Define a loop iterator
    * Define a pointer ptr_in to a FILE
    */
    int data[SIZE], i = 0;
    FILE *ptr_in;

    /* Check if the file exists and is opened correclty */
    if ((ptr_in = fopen("answer-hw3.txt", "r")) == NULL)
    {
        printf("Cannot open the file\n");
        exit(1);
    }

    read_data(ptr_in, data, &size);
    calculateAverage(data, size);
    calculateMax(data, size);

    /* Close the file */
    fclose(ptr_in);
    return 0;
}

/**********************************************************************
 * Function Definitions
 **********************************************************************/
/*********************************************************************
 * Function : readData()
 *
 * Description:
 *
 * This function is used to read data from a file as it stores the first
 * element as the size of the data array and the remainig elements as
 * the data array's values.
 * PRE-CONDITION: The file is opened
 *
 * @param ptr: a pointer to the FILE
 *        d: an integer array
          i: an integer pointer
 * @return void
 * **********************************************************************/
void readData (FILE *ptr, int d[], int *i) {
    fscanf(ptr, "%d", &size);
    *i = 0;
    while(fscanf(ptr, "%d", &d[*i]) != EOF)
        (*i)++;
}

/*********************************************************************
 * Function : calculateAverage()
 *
 * Description:
 *
 * This function is used to calculate the average of the given array.
 * PRE-CONDITION: The data array is filled with elements.
 * POST-CONDITION: The average value is printed on the screen.
 *
 * @param a: an integer array
          a_count: an integer represents the size of the array.
 * @return void
 * **********************************************************************/
void calculateAverage (int a[], int a_count)
{
    int i = 0;
    double avg = 0.0, sum = 0.0;
    for (i = 0; i < a_count; i++)
        sum += a[i];
    printf("sum is %f\n", sum);
    avg = sum / a_count;
    printf("The Average is %f\n", avg);
}

/*********************************************************************
 * Function : calculateMax()
 *
 * Description:
 *
 * This function is used to calculate the maximum element of the given array.
 * PRE-CONDITION: The data array is filled with elements.
 * POST-CONDITION: The maximum value is printed on the screen.
 *
 * @param b: an integer array
          b_count: an integer represents the size of the array.
 * @return void
 * **********************************************************************/
void calculateMax (int b[], int b_count)
{
    int i = 0;
    char max = 'm';
    for (i = 0; i < b_count; i++) {
        if (max == 'm') {
            max = (int) max;
            max = b[i];
        }
        else if (max < b[i])
            max = b[i];
    }
    printf("The Max value is %d\n", max);
}
