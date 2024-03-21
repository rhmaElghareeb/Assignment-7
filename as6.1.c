#include <stdio.h>
#include <stdlib.h>
#pragma pack(1)

typedef struct {
    int salary;
    float bonus;
    float deduction;
}employees;
int main()
{ employees mohsen,maged,mariam;
  float moTotal,maTotal,marTotal;
  float ded1,ded2,ded3;

    printf("Enter mohsen's salary ,percentage bonus and deduction of the salary: \n");
    scanf("%d%f%f",&mohsen.salary,&mohsen.bonus,&mohsen.deduction);
                   ded1=((mohsen.deduction)/100)*(mohsen.salary);
          moTotal=(mohsen.salary) - ded1 +((mohsen.bonus/100)*(mohsen.salary));
    printf("Enter maged's salary ,percentage bonus and deduction of the salary: \n");
    scanf("%d%f%f",&maged.salary,&maged.bonus,&maged.deduction);
                 ded2=(maged.deduction/100)*(maged.salary);
          maTotal=(maged.salary)-ded2+((maged.bonus/100)*(maged.salary));
      printf("Enter mariam's salary ,percentage bonus and deduction of the salary: \n");
      scanf("%d%f%f",&mariam.salary,&mariam.bonus,&mariam.deduction);
                  ded3=(mariam.deduction/100)*(mariam.salary);
          marTotal=(mariam.salary)-ded3+((mariam.bonus / 100)*(mariam.salary));
      printf("The total value that should be supplied for mohsen is:%0.2f\n",moTotal);
      printf("The total value that should be supplied for maged is:%0.2f\n",maTotal);
      printf("The total value that should be supplied for mariam is:%0.2f",marTotal);


 return 0;}
