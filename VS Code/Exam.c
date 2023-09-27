// Fibonacci Series with function use :

#include <stdio.h>

int fibonacci(int a)
{
	if(a==0)
	return 0;

	else if(a==1)
	return 1;

	return (fibonacci (a-1) + fibonacci (a-2));
}

int main()
{
	for(int i=0; i<10; i++)
	{
		printf("%d ",fibonacci(a));
	}
	printf("\n");

}

// Arry :-

	Arry is a collection of data and value.

1) one diamensonal arry.
2)two diamensonal arry.

1.declare:-

data_type arry_name[size];
ex.int marks[5];

2.initialize:-

int marks[5] = {10,20,30,40,50};

3.acces:-

marks[5] = 10;

Two diamensonal :-

1.declare:-

data_type arry_name[row][col];
ex.int marks[4][3];

2.initialize:-

int marks[4][3] = {10,20,30,40,50,20,41,1,,5,8,9,10};

3.acces:-

marks[0][1] = 40;


// perfect number or not perfect number.

#include <stdio.h>

void main()
{
	int i,n,sum = 0;

	printf("Enter the value :");
	cin("%d",&n);

	for(i=1; i<=n; i++)
	{
		if(n % i == 0)
		{
			sum += i;
		}	
	}
	
	if(sum == n)
	{
		printf("Perfect number");
	}
	else
	{
		printf("Not Perfect number");
	}
}


// sum of digit .

#Include <stdio.h>

void main()
{
	int n,sum=0;

	printf("Enter the value :");
	cin("%d",&n);

	while(n != 0)
	{
		sum += n % 10;

		n = n / 10;
	}

	prinf("Sum of arry is = %d",sum);
}

// 1,4,3,16,5,36,7,64

#include <stdio.h>

void main()
{
	int i,n,sum = 0;

  	printf("Enter the value :");
	cin("%d",&n);

	for(i=1; i<=n; i++)
	{
		if(i % 2 == 0)
		{
			printf("%d",i*i);
		}
	
		else
		{
			printf("%d",i);
		}
	printf("%d",i);
	}
}


}

// s
   s k 
   s k i
   s k i l
   s k i l l  patten print

#include <stdio.h>

void main()
{
	int i,j;
	char arr[20] = {'s','k','i','l','l'};


	for(i=0; arr[i] = '/0'; i++)
	    {
		for(j=0; j<i; j++)
		{
			printf("%c ",arr);
		}
	printf("\n");
	}
}

// Result.c

#Include <stdio.h>

void mark()
{
	int math,eng,guj,total,per,grade;

	printf("ENter the value :");
	cin("%d",&math);

	printf("ENter the value :");
	cin("%d",&eng);

	printf("ENter the value :");
	cin("%d",&guj);

	total = math + eng + guj;
	 
	return total;	
}

int calcul(int totalmark)
{
	float per = (totalmark * 100 / 300);

	printf("\n total marks= %d",totalmark);
	printf("\n total per=%.2f",per);

	return per;

}

int main()
{
	int gettotal = getmark();
	int getper = getcalcul(gettotal);
	
	return 0;
}
