#include<stdio.h> 
struct student 
{ 
 char name[100]; 
 char id[12]; 
 char mobno[10]; 
}; 
void main() 
{ 
 struct student s[5]; 
 int n,i; 
 printf("For how many students you want to enter details..."); 
 scanf("%d", &n); 
 for(i=0;i<n;++i) 
 { 
  printf("Enter student %d name... ", i+1); 
  scanf("%s", s[i].name); 
  printf("Enter student %d's ID... ", i+1); 
  scanf("%s", s[i].id); 
  printf("Enter student %d's mobile number... ", i+1); 
  scanf("%s",s[i].mobno); 
 } 
 printf("\n**********DETAILS**********\n"); 
 for(i=0;i<n;++i) 
 { 
  printf("\nStudent %d:\n", i+1); 
  printf("\nName: %s", s[i].name); 
  printf("\nID: %s", s[i].id); 
  printf("\nMobile number: %s\n", s[i].mobno); 
 } 
}
