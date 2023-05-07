1)
#include<stdio.h>
int main()
{
int r,c,n;
	printf("entre the number of rows:");
	scanf("%d",&n);
	printf("\n");
	for(r=0;r<n;r++)
	{
		for(c=n-1;c>r;c--)
		{
			printf(" ");
		}
		for(c=0;c<=r;c++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}


2)
#include<stdio.h>
int main()
{
	char str[100];
	int i,v=0;
	printf("enter the string\n");
	scanf("%s",&str);
	for(i=0;str[i];i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
	{
		v++;
	}
  }
  printf("total number of vowels=%d\n",v);
  return 0;
	
}

3)
#include<stdio.h>
int main()
{
	int n,c,k;
	printf("enter the number of rows\n");
	scanf("%d",&n);
	for(k=1;k<=n;k++)
	{
		for(c=1;c<=n-k;c++)
		 printf(" ");
		for(c=1;c<=2*k-1;c++)
		 printf("*");
		 printf("\n");
	}
	for(k=1;k<=n-1;k++)
	{
		for(c=1;c<=k;c++)
		printf(" ");
		for(c=1;c<=2*(n-k);c++)
		printf("*");
		printf("\n");
	}
	return 0;
}

4)
// C Program to Demonstrate
// a Hollow Star Pyramid
#include <stdio.h>

int main()
{
	int i, space, n = 5, j = 0;

	// first for loop is used to
	// iterate number of rows
	for (i = 0; i < n - 1; i++) {

		// second for loop is used to print spaces
		for (space = 1; space < n - i; space++) {
			printf(" ");
		}
		// third for loop is used
		// to print the required
		// pattern
		for (j = 0; j <= 2 * i; j++) {
			if (j == 0 || j == 2 * i)
				printf("*");
			else
				printf(" ");
		}
		// print the new line after every row
		printf("\n");
	}
	// used to print last row
	for (i = 0; i < 2 * n - 1; i++) {
		printf("*");
	}
	return 0;
}

5)
#include <stdio.h>
int main() {
  int i, n;
  int t1 = 0, t2 = 1;
  int nextTerm = t1 + t2;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  printf("Fibonacci Series: %d, %d, ", t1, t2);
  for (i = 3; i <= n; ++i) {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }
  return 0;
}

6)
#include <stdio.h>
int main()
{
	int i, space, n = 5, j = 0;
	for (i = 0; i < n - 1; i++) {
		for (space = 1; space < n - i; space++) {
			printf(" ");
		}
		for (j = 0; j <= 2 * i; j++) {
			if (j == 0 || j == 2 * i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	for (i = 0; i < 2 * n - 1; i++) {
		printf("*");
	}
	return 0;
}

7)
#include <stdio.h>
int main(){
   int i, j, N;
   printf("Enter number of rows: ");
   scanf("%d", &N);
   for(i=1; i<=N; i++) {
      for(j=1; j<=N; j++){
         if(i==1 || i==N || j==1 || j==N){
            printf("*");
         }
         else{
            printf(" ");
         }
      }
      printf("\n");
   }
   return 0;
}