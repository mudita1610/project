#include <stdio.h> 
struct distance{ 
int f; 
int i; 
}; 
void add(struct distance d1,struct distance d2){ 
struct distance d3; 
d3.f= d1.f + d2.f; 
d3.i= d1.i + d2.i; 
d3.f= d3.f + d3.i/12; 
d3.i= d3.i%12; 

printf("\nTotal distance- Feet: %d, Inches: %d",d3.f,d3.i); 
} 
void main() 
{ 
struct distance d1,d2; 
printf("Enter first distance in feet & inches:"); 
scanf("%d%d",&d1.f, &d1.i); 
printf("Enter second distance in feet & inches:"); 
scanf("%d%d",&d2.f, &d2.i); 
add(d1,d2); 
}
