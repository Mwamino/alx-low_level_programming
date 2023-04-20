#include "variadic_functions.h"
#include <stdarg.h>

/**
*sum_them_all - the sums all its parameters
*@n: first parameter
*Return: returns sum of all its parameters
*/

int sum_them_all(const unsigned int n, ...)
{

va_list li;
int sum = 0;
unsigned int i;

va_start(li, n);

if (n != 0)
{
for (i = 0; i < n; i++)
sum += va_arg(li, int);
}

va_end(li);
return (sum);

}
