#include <stdio.h>

int
main ()
{
  char chr;
  printf ("Input a character to find-out if it's digit\n");
  scanf ("%c", &chr);

  if (chr >= '0' && chr <= '9')
    {
      printf ("It is a digit.\n");
    }
  else
    {
      printf ("It is not a digit.");
    }
  return 0;
}
