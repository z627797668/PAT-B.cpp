#include<stdio.h>
#include<string.h>
const int maxn = 2005;
int main()
{
	int A[maxn],B[maxn];
	int a, b;
	memset(A, 0, sizeof(A));
	int count = 0;
	while (scanf_s("%d %d",&a,&b)!=EOF)
	{
		A[count] = a ;
		B[count] = b;
		count++;
	}
	if (count == 1&&B[0]==0)
	{
		printf("0 0");
	}
	else
	{
		for (int i = 0; i < count; i++)
		{
			if(B[i]!=0)
			printf("%d %d", A[i] * B[i], B[i] - 1);
			if (i != count - 1&&B[i+1]!=0)
				printf(" ");
		}
	}
	return 0;
}
