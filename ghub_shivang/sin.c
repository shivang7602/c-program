/* expt.no7
compute sin(x)/cos(x) using taylor series approximation. compare your result with the built in library function. print both the results with appropiate inferences.
USN:18
NAME:Shivang Gandotra 
DATE:3.2.22
*/

#include <stdio.h>
#include <math.h>
#define PI 3.14156
int main()
{
	float x,degree,sum,term,nume,deno;
	int i;
	printf("enter the degree:");
	scanf("%f",&degree);
	x=degree*(PI/180);
	sum=0;
	nume=x;
	deno=1;
	i=1;
	do{
          	term=nume/deno;
		sum=sum+term;
		i=i+2;
		nume=-1*nume*x*x;
		deno=deno*(i-1)*i;
	}while(fabs(term)>=0.00001);
	printf("computed value of sin(%f)=%f\n",degree,sum);
	printf("value of sin(%f) from the library function=%f\n",degree,sin(x));
	return 0;
}
