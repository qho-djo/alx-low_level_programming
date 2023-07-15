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
	int i,j;
	for (i = 0; i < 100; i++)
	{
		        for (j= 0; j < 100; j++)
				        {
						                for (i < j)
									                {
												                        putchar((i / 10) + 48);
																		 putchar((i / 10) + 48);
																		 			 putchar(' ');
																					 			  putchar((i / 10) + 48);
																								  			  putchar((i / 10) + 48);
																											  		  		if (i != 98 || j != 99)
																																			        {
																																					                                         putchar(',');
																																										                                          putchar(' ');
																																															                                  }
																															                        }
								                }
			        }
}

putchar('\n');
	return (0);
}
