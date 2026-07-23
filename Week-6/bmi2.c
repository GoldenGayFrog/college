#include <stdio.h>

#define BMI_UNDERWEIGHT(bmi) (bmi < 18.5)
#define BMI_NORMAL(bmi) (bmi >= 18.5 && bmi <= 24.9)
#define BMI_OVERWEIGHT(bmi) (bmi >= 25 && bmi <= 29.9)
#define BMI_OBESITY(bmi) (bmi >= 30)

int main(void)
{
  float bb, tinggi, bmi;

  printf("Please insert your weight: \n");
  scanf("%3f", &bb);
  printf("Please insert your height: \n");
  scanf("%3f", &tinggi);

  bmi = bb / (tinggi * tinggi);

  if(BMI_UNDERWEIGHT(bmi)) {
    printf("kurus\n");
  }

  else if(BMI_NORMAL(bmi)) {
    printf("Normal\n");
  }

  else if(BMI_OVERWEIGHT(bmi)) {
    printf("Kelebihan berat\n");
  }

  else if(BMI_OBESITY(bmi)) {
    printf("Obesitas\n");
  }

  /* Program exited correctly */
  return 0;
}
