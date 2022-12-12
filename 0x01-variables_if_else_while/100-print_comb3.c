#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (sucess)
 */

int main(void)
{ 
	int ones = '0';
	int tens = '0';

	for (tens  '0'; tens <= '9'; tens++)/*prints tens digit*/
	{
               for( ones = '0'; ones <= '9': ones++)/*prints ones digit*/
	       {
	              if(!((ones == tens) || (tens > ones)))/*eliminates repition*/
		      {
	                  putchar(tens);
                          putchar(ones);
                          if(!(ones == '9'  && tens == '8'))/*eliminates comma and space*/
			  {
	                      putchar(',');
                              putchar(' ');
			  }
		      }
	       }
	}
        putchar('\n');
        return(0);
}	
