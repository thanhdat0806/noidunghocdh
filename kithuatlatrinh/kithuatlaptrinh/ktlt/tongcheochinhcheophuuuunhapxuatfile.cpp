#include <stdio.h>
	FILE* inp = fopen("input.txt", "r");    
	FILE* out = fopen("output.txt", "w");
void nhapmang(int A[100][100],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			fscanf(inp, "%d", &A[i][j]);
		}
	}
}

int tongcheophu(int A[100][100],int n)
{
	int i,j,tong=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j==n-i-1)
			{
				tong+=A[i][j];
			}
		}
	}
	return tong;
}

int tongcheochinh(int A[100][100],int n)
{
	int i,j,tong=0;
	for(j=0;j<n;j++)
	{
		for(i=0;i<n;i++)
		{
			if(i==j)
			{
				tong+=A[i][j];
			}
		}
	}
	return tong;
}

int main(int argc, char *argv[]) 
{
	int A[100][100],n;
	fscanf(inp, "%d", &n);
	nhapmang(A,n);
	fprintf(out, "%d ",tongcheochinh(A,n));
	fprintf(out, "%d",tongcheophu(A,n));
	
	fclose(inp);
	fclose(out);
	return 0;
}
