#include <stdio.h>



int main ()
{
  float M1, M2, M3,Grade ;
    int score, ID ;
   
    
for (int a = 1; a < 11 ; a++)    
  {
    int ID ;
   printf("Enter The Student ID");
    scanf("%d", &ID);
    
  
  
  
    for (int i = 1; i < 4; i++)
    {
      /* code */
      float grade;
      printf("Enter the Score of Course %d \n",i);
      scanf ("%d", &score);
        if(score >= 80)
        {
            grade = 4;
            printf("Grade A+ \n");

        }
        else if(score >= 75 && score < 80)
        {
            grade = 3.75;
            printf("Grade A \n");

        }
        else if(score >= 70 && score < 75)
        {
            grade = 3.50;
             printf("Grade A- \n");


        }
        else if(score >= 65 && score < 70)
        {
            grade = 3.25;
             printf("Grade B+ \n");
        }
        else if(score >= 60 && score < 65)
        {
            grade = 3;
             printf("Grade B \n");
        }
        else if(score >= 55 && score < 60)
        {
            grade = 2.75;
             printf("Grade B- \n");
        }
        else if(score >= 50 && score < 55)
        {
            grade = 2.50;
             printf("Grade C+ \n");
        }
        else if(score >= 45 && score < 50)
        {
            grade = 2.25;
             printf("Grade C \n");
        }
        else if(score >= 40 && score < 45)
        {
            grade = 2;
             printf("Grade C- \n");
        }
        else
        {
            grade = 0;
             printf("Grade F \n");
            

        }
        printf("Grade of Course%d is %f \n",i,grade);
        if (i==1)
        {
            M1=grade;
        }
        if (i==2)
        {
            M2=grade;
        }
        if (i==3)
        {
            M3=grade;
        }

   
   
 }  Grade = (M1+M2+M3)/3;
    printf("Total grade of %d is %f \n",ID,Grade);
  }

  return 0;

}
