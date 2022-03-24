/* expt.no7
compute sin(x)/cos(x) using taylor series approximation. compare your result with the built in library function. print both the results with appropiate inferences.
USN:18
NAME:Shivang Gandotra 
DATE:3.2.22
*/
#include <stdio.h>
#include <math.h>
#define PI 3.1456
int main()
{
	float degree,x,deno,num,sum,term;
	int i;
	printf("enter the degree");
	scanf("%f",&degree);
	x=degree*(PI/180);
	sum=0;
	deno=1;
	num=1;
	i=1;
	do{
		term=num/deno;
		sum=sum+term;
		i=i+2;
		num=-1*num*x*x;
		deno=deno*(i-1)*i;
	}while(fabs(term)>=0.00001);
	printf("computed value of cos(%f)=%f\n",degree,sum);
	printf("value of cos(%f) from the library function=%f\n",degree,cos(x));
	return 0;
}

	
	
	
