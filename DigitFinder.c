#include <stdio.h>

int
main ()
{
  char chr;
  printf ("Input a character to find-out if it's digit\n");
  scanf ("%c", &chr);

  if (chr == '1' || chr == '2' || chr == '3' || chr == '4' || chr == '5'|| chr == '6'|| chr == '7'|| chr == '8'|| chr == '9')
    {
      printf ("It is a digit.\n");
    }
  else
    {
      printf ("It is not a digit.");
    }
  return 0;
}
