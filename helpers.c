/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>
#include <math.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
//lineSearch

    // if ( value < 0)
    // {
    //     return false;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     if (values[i] == value)
    //     {
    //         return true;
    //     }
    // }
    //  return false;
    
//binarySearch

int min = 0;
int max = n - 1;

    while (min <= max)
    {
        int midPoint = min + ((max - min) / 2);

        if (values[midPoint] == value)
            return true;
        else if (values[midPoint] < value)
            min = midPoint + 1;
        else if (values[midPoint] > value)
            max = midPoint - 1;
    }
    return false;

    // TODO: implement a searching algorithm
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    for (int i = 1; i < n; i++)
   {
       int key = values[i];
       int j = i-1;

       while ((j >= 0) && (values[j] > key))
       {
           values[j+1] = values[j];
           j = j-1;
       }
       values[j+1] = key;
   }
    // TODO: implement an O(n^2) sorting algorithm
    return;
}
