//Zainab Kinza Sheikh  (CT-059)

#include<stdio.h>
#include<math.h>
int main(void)
{
	
	float a, b, c, discriminant, root1, root2, realpart, imagpart;
	
	printf("Enter coefficients of a, b and c: ");
	scanf("%f%f%f", &a,&b,&c);
	
	discriminant = (b*b)-(4*a*c);
	
	if(discriminant > 0){
		root1 = (-b + sqrt(discriminant)) / (2*a);
		root2 = (-b - sqrt(discriminant)) / (2*a);
		printf("Roots are real and different\n");
		printf("Root1 = %f\n", root1);
		printf("Root2 = %f\n", root2);
	}
	
	else if(discriminant == 0){
	root1 = root2 = -b / (2*a);
	printf("Roots are real and equal\n");
	printf("Root1 = Root2 = %f\n", root1);
}

    else if(discriminant < 0){
	realpart = -b / (2*a);
	imagpart = sqrt(-discriminant) / (2*a);
	printf("Roots are complex and different\n");
	printf("Root1 = %f + %fi\n", realpart, imagpart);
	printf("Root2 = %f - %fi\n", realpart, imagpart);
	}
	
	return 0;
	
}
	