#include <stdio.h>

int
main ()
{
  char chr, a, e, i, o, u;
  printf ("Input a character to find-out if it's vowel\n");
  scanf ("%c", &chr);

  if (chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u')
    {
      printf ("It is a vowel.\n");
    }
  else
    {
      printf ("It is a consonant");
    }
  return 0;
}
