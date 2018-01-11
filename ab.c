#include<stdio.h>
int main()
{

double b1[2],b2[2];
double x[2],b[2];
double x1[2],x2[2];
double ex[2];
x[0]=1.0;
x[1]=-1.0;

x1[0]=0.9999;
x1[1]=-1.0001;

x2[0]=0.49999;
x2[1]=-0.10001;

ex[0]=0.187877;
ex[1]=0.232322;
double A[2][2];
A[0][1]=0.2322;
A[1][0]=0.4566;
A[1][1]=0.4353;
A[0][0]=0.9889;

for(int i=0;i<2;i++){
	b[i] = 0.0;
	b1[i]=0.0;
	b2[i]=0.0;
	for(int j=0;j<2;j++){
	b[i] += A[i][j]*x[j];
	b1[i] += A[i][j]*x1[j];
	b2[i] += A[i][j]*x2[j];
}
}
printf("X has a residual of: \n");
for(int i=0;i<2;i++){
  printf("residual[%i] = %1.10e\n",i,ex[i]-b[i]);

}
printf("x1 :\n");
for(int i=0;i<2;i++){
  printf("residual[%i] = %1.10e\n",i,ex[i]-b1[i]);

}

printf("x2 :\n");
for(int i=0;i<2;i++){
  printf("residual[%i] = %1.10e\n",i,ex[i]-b2[i]);


}

return 0;
}
