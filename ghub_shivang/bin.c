#include <stdio.h>
int btod(int bin);
void main()
{
	int binary,dec;
	printf("enter the binary number\n");
	scanf("%d",&binary);
        dec=btod(binary);
	printf("decimal equivalent=%d",dec);
}	
int btod(int bin) 	
{
	if (bin==0)
	{
		return 0;
	}
	else
	{
		return btod(bin/10)*2+(bin%10);
	}
}
	
