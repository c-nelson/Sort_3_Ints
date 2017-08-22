/****************************************************
* Author: Christian Nelson
* Date: August 3, 2017
*
* Description: Assignment 8.a
* This is a void function that takes the address of 3 ints
* and sorts them in the variables from smallest to largest.
*****************************************************/

void smallSort2(int *a, int *b, int *c)
{
    if (*a > *b)
    {
        // set a temp variable to a
        int temp = *a;
        // a and b will now be switched
        *a = *b;
        *b = temp;
    }
    if (*a > *c)
    {
        // set a temp variable to a
        int temp = *a;
        // a and c will now be switched
        *a = *c;
        *c = temp;
    }
    if (*b > *c)
    {
        // set a temp variable to b
        int temp = *b;
        // b and c will now be switched
        *b = *c;
        *c = temp;
    }

}
