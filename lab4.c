#include<stdio.h>
#include<stdlib.h> 
#include<time.h>   
int main (int argc, char **argv) 
{

	srand(time(NULL));


	// initialize the random number generator
	int N = atoi( argv[1] );

	// convert command-line input to N = number of points

	for (int i=0;i<N;++i) 
	{
		// randomly sample from [0,1]
		double x = ((double) rand())/((double) RAND_MAX);
		// scale the interval to be of length 2 -- it is now [0,2]
		x = 2.*x;
		// shift the interval to be [-1,1]
		x = x - 1.;
	
		printf("x on [-1,1] = %lf\n",x);

		FILE *fp;
		fp = fopen("random.dat");
		fprintf(fp, "%lf %lf");
		fclose(fp);

	}
return 0;
}
