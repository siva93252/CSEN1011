#include<stdio.h>
int main(){
  int basic,da,hra,ta, other;
  int pf,it;
int net_salary;
printf("enter basic salary:");
scanf("%d",&basic);
printf("enter hra:");
scanf("%d",&da);
printf("enter other:");
scanf("%d",&other);
da=(basic*12)/100;
pf= (basic*14)/100;
it=(basic*15)/100;
net_salary= basic+da+hra+ta+other-(pf+it);
printf("Net_salary=%d/n",net_salary);
}