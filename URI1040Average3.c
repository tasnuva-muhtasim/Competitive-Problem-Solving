#include <stdio.h>
int
main ()
{
  float N1, N2, N3, N4, m, a, b;

  scanf ("%f %f %f %f", &N1, &N2, &N3, &N4);

  m = (((N1 * 2) + (N2 * 3) + (N3 * 4) + (N4 * 1)) / (2 + 3 + 4 + 1));

  printf ("Media: %.1f\n", m);

  if (m >= 7)
    {
      printf ("Aluno aprovado.\n");
    }
  else if (m < 7.0 && m >= 5)
    {
      printf ("Aluno em exame.\n");
      scanf ("%f", &a);
      printf ("Nota do exame: %.1f\n", a);
      b = ((a + m) / 2);
      if (b>=5)
      {
          printf("Aluno aprovado.\n");
      }
      else
      {
          printf("Aluno reprovado.\n");
      }
      printf("Media final: %.1f\n",b);
	}
	else if( m<5)
	{
     printf("Aluno reprovado.\n");
	}
	return 0;
    }
