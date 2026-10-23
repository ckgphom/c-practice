// to find the area of circle using radius

#include <stdio.h>
#include <math.h>

int main()
{
   float area;
   float radius,length, breath, base, height;
   printf("enter the radius of the circle :");
   scanf("%f %f", &radius, &radius);
   area = 3.14 * radius * radius;
   printf("area of circle is = %.2f\n", area);

   printf("enter the base and height of the triangle:");
   scanf("%f %f", &base , &height);
   area = 0.5 * base * height;
   printf ("area of triangle is = %.2f\n", area);

   printf("enter the length and breath of the rectangle :");
   scanf("%f %f", &length ,&breath);
   area = length * breath;
   printf("area of rectangle is = %.2f", area);


    return 0;
}