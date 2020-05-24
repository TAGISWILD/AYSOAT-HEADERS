#include <stdio.h>
#include <math.h>
VALUE_CST()
{
	int a;
	printf("PRESS 1 TO GET VALUES OF COS THETA\nPRESS 2 TO GET VALUES OF SIN THETA\nPRESS 3 TO GET VALUES OF TAN THETA\n");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("NOW YOU HAVE ENTERED TO SEE THE VALUES OF COS THETA\n");
				int b;
	printf("PRESS 0 TO GET THE VALUE OF 0 DEGREE\nPRESS 30 TO GET THE VALUE OF 30 DEGREE\nPRESS 45 TO GET THE VALUE OF 45 DEGREE\nPRESS 60 TO GET THE VALUE OF 60 DEGREE\nPRESS 90 TO GET THE VALUE OF 90 DEGREE\n");
	scanf("%d",&b);
	switch(b)
	{
		case 0:
			printf("THE VALUE COS THETA FOR 0 DEGREE IS 1\n");
		  break;
		case 30:
			printf("THE VALUE COS THETA FOR 30 DEGREE IS root3/2\n");
		  break;
		case 45:
			printf("THE VALUE COS THETA FOR 45 DEGREE IS 1/root2\n");
		  break;
		case 60:
			printf("THE VALUE COS THETA FOR 60 DEGREE IS 1/2\n");
		  break;
		case 90:
			printf("THE VALUE COS THETA FOR 90 DEGREE IS 0\n");
		  break;
	}	  		break;
		case 2:
			printf("NOW YOU HAVE ENTERED TO SEE THE VALUES OF SIN THETA\n");
				int c;
	printf("PRESS 0 TO GET THE VALUE OF 0 DEGREE\nPRESS 30 TO GET THE VALUE OF 30 DEGREE\nPRESS 45 TO GET THE VALUE OF 45 DEGREE\nPRESS 60 TO GET THE VALUE OF 60 DEGREE\nPRESS 90 TO GET THE VALUE OF 90 DEGREE\n");
	scanf("%d",&c);
	switch(c)
	{
		case 0:
			printf("THE VALUE SIN THETA FOR 0 DEGREE IS 0\n");
		  break;
		case 30:
			printf("THE VALUE SIN THETA FOR 30 DEGREE IS 1/2\n");
		  break;
		case 45:
			printf("THE VALUE SIN THETA FOR 45 DEGREE IS 1/root2\n");
		  break;
		case 60:
			printf("THE VALUE SIN THETA FOR 60 DEGREE IS root3/2\n");
		  break;
		case 90:
			printf("THE VALUE SIN THETA FOR 90 DEGREE IS 1\n");
		  break;
	}
				break;
		case 3:
			printf("NOW YOU HAVE ENTERED TO SEE THE VALUES OF TAN THETA\n");
				int d;
	printf("PRESS 0 TO GET THE VALUE OF 0 DEGREE\nPRESS 30 TO GET THE VALUE OF 30 DEGREE\nPRESS 45 TO GET THE VALUE OF 45 DEGREE\nPRESS 60 TO GET THE VALUE OF 60 DEGREE\nPRESS 90 TO GET THE VALUE OF 90 DEGREE\n");
	scanf("%d",&d);
	switch(d)
	{
		case 0:
			printf("THE VALUE TAN THETA FOR 0 DEGREE IS 0\n");
		  break;
		case 30:
			printf("THE VALUE TAN THETA FOR 30 DEGREE IS 1/root3\n");
		  break;
		case 45:
			printf("THE VALUE TAN THETA FOR 45 DEGREE IS 1\n");
		  break;
		case 60:
			printf("THE VALUE TAN THETA FOR 60 DEGREE IS root3\n");
		  break;
		case 90:
			printf("THE VALUE TAN THETA FOR 90 DEGREE IS NOT DEFINED*..\n");
		  break;
	}
				break;
	}
}
PYTHAN()
{
	int c;
	printf("PRESS 1 IF YOU HAVE TWO SIDES AND YOU WANT TO FIND HYPOTENUSE\nPRESS 2 IF YOU HAVE 1 SIDE AND 1 HYPOTENUSE TO FIND SECOND SIDE\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
	float hypo, s1, s2;
	printf("ENTER THE FIRST SIDE YOU HAVE\n");
	scanf("%f",&s1);
	printf("ENTER THE SECOND SIDE YOU HAVE\n");
	scanf("%f",&s2);
	hypo=(s1*s1)+(s2*s2);
	hypo=sqrt(hypo);
	printf("THE HYPOTENUSE IS %.3f",hypo);
	return 0;
	
	break;
	case 2:
	
	float hypo2, s12, s22;
	printf("ENTER THE LENGTH HYPOTENUSE SIDE YOU HAVE\n");
	scanf("%f",&hypo2);
	printf("ENTER THE LENGTH SECOND SIDE YOU HAVE\n");
	scanf("%f",&s12);
	s22=(hypo2*hypo2)-(s12*s12);
	s22=sqrt(s22);
	printf("THE SECOND SIDE IS %.3f",s22);
	return 0;
	}
}
TRIPLETS()
{
	int s1, s2, s3;
	printf("ENTER TWO SIDES OF RIGHT ANGLED TRIANGLE\nTHIS PROGRAM WILL TELL YOU THAT THE NUMBERS YOU HAVE ENTERED ARE PYTHAGORAES THEOREM OR NOT...\nSO ENTER THE NUMBERS\n");
	scanf("%d %d",&s2,&s3);
	printf("ENTER THE LENGTH OF HYPOTENUSE\n");
	scanf("%d",&s1);
	if((s1*s1)==(s2*s2)+(s3*s3))
	{
		printf("THE NUMBERS ARE IN PYTHAGORAES TRIPLET..");
	}
	else 
	{
		printf("NUMBERS ARE NOT IN PYTHAGORAES TRIPLET..");
	}
}
