//C Program to Store Information of Students Using Structure



//Input: 10 20 30
//Output: 10 20 30

#include<stdio.h>  
struct student  
{  
    int marks;  
};  
void main()  
{  
  struct student s1,s2,s3;  
  printf("Enter the  marks of student 1,2 and 3 ");  
  scanf("%d" "%d" "%d", &s1.marks,&s2.marks,&s3.marks);
  printf("%d %d  %d", s1.marks,s2.marks,s3.marks);  
}  
