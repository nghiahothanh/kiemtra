#include <stdio.h>
#include<conio.h>


int main()
{
	FILE *f;
	f=fopen("Cau1.inp","rt");
	long M,N;
	fscanf(f,"%d",&M);
	fscanf(f,"%d",&N);
	fclose(f);
	f=fopen("Cau1.out","wt");
	long min=N;
	if(M<N)
	{
	min=M;
	}	
	long max=1;
	long i;
	long bcnn=0;
	for( i=1;i<=min;i++)
	{	
		if(N%i==0&M%i==0)
		{
			if(i>max)
			max=i;
		}
	}
	for(i=1;i>0;i++)
	{
				if(i % M == 0 && i % N == 0)
		{
			bcnn=i;
			break;
		}
	}
	fprintf(f,"U=%d",max);
	fprintf(f,"\nB=%d",bcnn);
	fclose(f);
}
