#include <stdio.h>
#include <stdlib.h>

float *matriz(float *p, float *q, int n)
{
	int i,j, x=0,k,y;
	float *C, M[n][n], soma =0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			soma = 0;
			for(k=0;k<n;k++)
			{
				y = k*n;
				soma = soma + (p[x+k] * q[j+y]);
			}
			M[i][j] = soma;			
        }
        x = x + n;
	}
	C = M[0];
	return C;
}

int main()
{
	int n;
	
	float *p, *q, *z;
	int i, j, cont = 1;
	
	printf("digite o numero n: ");
	scanf("%d", &n);
	
	float A[n][n], B[n][n];
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			A[i][j] = cont;
			cont = cont +1;
		}
	}
	
	cont = 1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			B[i][j] = cont;
			cont = cont +1;
		}
	}
	p = A[0];
	q = B[0];
	
	z = matriz(p,q, n);
	
	
	if (n == 2)
	{
		printf("o produto e\n %1.f  %1.f\n  %1.f  %1.f", z[0], z[1], z[2], z[3]);
	}
	if (n == 3)
	{
        printf("o produto e\n %.1f  %.1f  %.1f\n %.1f  %.1f  %.1f\n %.1f  %.1f  %.1f", z[0], z[1], z[2], z[3], z[4], z[5], z[6], z[7], z[8]);
    }
    if (n == 4)
	{
        printf("o produto e\n %.1f  %.1f  %.1f %.1f\n %.1f  %.1f  %.1f %.1f\n %.1f  %.1f  %.1f %.1f\n %.1f  %.1f  %.1f %.1f", z[0], z[1], z[2], z[3], z[4], z[5], z[6], z[7], z[8], z[9], z[10], z[11], z[12], z[13], z[14], z[15]);
    }
    if (n == 5)
	{
        printf("o produto e\n %.1f  %.1f  %.1f %.1f %.1f\n %.1f  %.1f  %.1f %.1f %.1f\n %.1f  %.1f  %.1f %.1f %.1f\n %.1f  %.1f  %.1f %.1f %.1f\n %.1f  %.1f  %.1f %.1f %.1f\n", z[0], z[1], z[2], z[3], z[4], z[5], z[6], z[7], z[8], z[9], z[10], z[11], z[12], z[13], z[14], z[15], z[15], z[17], z[18], z[19], z[20], z[21], z[22], z[23], z[24]);
    }
	
	
}
