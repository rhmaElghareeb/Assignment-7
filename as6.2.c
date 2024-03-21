#include <stdio.h>
#include <stdlib.h>
#pragma pack(1)

typedef struct{
    char algorithms;
    char programming;
    char datastructures;
    char discretemath;
}subject;
int main()
{ subject arr[10];

  int id,adm,num;
    for(int i=0;i<10;i++){
    arr[i].algorithms=50+i;
    arr[i].programming=50+i+1;
    arr[i].datastructures=40+i+2;
    arr[i].discretemath=40+i+3;
    }
    printf("for admins ID enter 1,for students enter 2:\n ");
    scanf("%d",&adm);
    if( adm == 2){
    printf("Enter your ID from 1 to 10:\n");
    scanf("%d",&id);
    if(id>=0 && id<=10){
        printf("Your grades:\nAlgorithms:%d\nProgramming:%d\n",arr[id].algorithms,arr[id].programming);
        printf("Data structures:%d\nDiscrete math:%d",arr[id].datastructures,arr[id].discretemath);
    }
    else
        printf("Wrong ID!");
    }
    else if(adm == 1){
     printf("Enter student ID from 1 to 10 ");
     scanf("%d",&id);
     if(id>=0 && id<=10){
     subject *ptr=&arr[id];
     printf("Enter which subject you want to change\n");
     printf(" 1-Algorithms\n 2-Programming\n 3-Data structure\n 4-Discrete math\n");
     scanf("%d",&num);
     printf("New value: \n");
     switch (num){
       case 1:
      scanf("%d",&ptr->algorithms);
           break;
       case 2:
      scanf("%d",&ptr->programming);
          break;
       case 3:
      scanf("%d",&ptr->datastructures);
          break;
       case 4:
      scanf("%d",&ptr->discretemath);
        break;


     }
        printf("Successfully changed!");
        }
     else {
        printf("Wrong ID !");
     }
    }
    else{
        printf("Wrong choice!");
    }

    return 0;
}
