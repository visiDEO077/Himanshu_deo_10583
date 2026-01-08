#include<stdio.h>
int main(){
  int num_sub;

printf("Enter no. of subjects");
scanf("%d",&num_sub);
int sub_marks[num_sub];
for(int i=0;i<num_sub;i++){
  scanf("%d",&sub_marks[i]);
  
}
int sum=0;
for(int j=0;j<num_sub;j++){
sum+=sub_marks[j];
}
  int max_marks=num_sub*100;
 float percentage = (sum * 100.0f) / max_marks;   

   char grade;               
    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 60) {
        grade = 'C';
    } else if (percentage >= 33) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    printf("\nTotal Marks = %d / %d\n", sum, max_marks);
    printf("Percentage  = %.2f\n", percentage);
    printf("Grade       = %c\n", grade);

    return 0;
}


