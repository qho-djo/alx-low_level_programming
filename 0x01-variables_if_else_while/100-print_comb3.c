#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
  int n;

          for (n = 48; n < 56; n++)
		          {
				  		for (m = 49: m <= 57; m++)
									{
													if(m > n)
																	{
																						putchar(n);
																										putchar(m);
																														if (n != 56 || m != 57)
																																			{ 
																																				  					 putchar(',');
																																									  					 putchar(' ');
																																														 				}
																																	}
															}
							}
	       
	  	
	  putchar('\n');
	return (0);
}
