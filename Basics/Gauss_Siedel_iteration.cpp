/*
Solving system of linear equations using Gauss Siedel Iteration method
*/

#include<iostream>
#include<stdio.h>
int main()
{
	float x = 0, y = 0, z = 0;
	float eqn[3][4], prev[] = {-1,-1,-1};
	int counter = 1;
	printf("Gauss Siedel method to solve 3 variable equations\n");
	printf("Enter the coefficients of diagonal dominant matrix : \n");
	
	// Input the diagonal dominant matrix using nested loop
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<4; j++)
		{
			scanf("%f",&eqn[i][j]);
		}
	}

	// Do the following steps until current values of x, y and z
	// matches with their previous values
	while(x!=prev[0] && y!=prev[1] && z!=prev[2])
	{
		printf("%dth iteration\n",counter);
		prev[0] = x;
		prev[1] = y;
		prev[2] = z;
		x = (eqn[0][3] - eqn[0][1]*y - eqn[0][2]*z)/eqn[0][0];
		y = (eqn[1][3] - eqn[1][0]*x - eqn[1][2]*z)/eqn[1][1];
		z = (eqn[2][3] - eqn[2][0]*x - eqn[2][1]*y)/eqn[2][2];
		counter++; // counter keeps track of the no. of iterations made
		printf("x = %f ,y = %f , z = %f \n", x,y,z);
	}
	
	printf("\nIteration stabilized values :\n");
	printf("x = %f ,y = %f , z = %f", x,y,z);
	
	return 0;
}
