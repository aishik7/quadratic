#include<stdio.h>

#include<math.h>

int main()

{

double a, b, c, dis, root1, root2, realPart, imagPart;

printf("ax^2 + bx + c \n");

printf("insert the value for a,b and c respectively\n");

scanf("%lf %lf %lf", &a, &b, &c);

dis = b*b - 4*a*c;

printf("Discriminant = %lf \n", dis);

if (dis > 0) {

root1 = (-b + sqrt(dis)) / (2 * a);

root2 = (-b - sqrt(dis)) / (2 * a);

printf("root1 = %.2lf and root2 = %.2lf", root1, root2);

}

else if (dis == 0)

{

root1 = root2 = -b / (2 * a);

printf("root1 = root2 = %.2lf;", root1);

}

else {

realPart = -b / (2 * a);

imagPart = sqrt(-dis) / (2 * a);

printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);

}

return 0;
}
