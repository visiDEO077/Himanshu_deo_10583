#include<stdio.h>
int main(){
  int num_sub;

printf("Enter no. of subjects");
scanf("%d",&num_sub);
int sub_marks[num_sub];
for(int i=0;i<num_sub;i++){
  scanf("%d",&sub_marks[i]);
  
}
int sub=0;
for(int j=0;j<num_sub;j++){
sum+=sub_marks[j];
}
float percentage;
percentage=(sum/(num_sub*100))*100;
printf("Total Marks : %d\n",sum);
printf("Total percentage : %d\n",percentage);

