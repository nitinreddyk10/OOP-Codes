#include<stdio.h>
#include<stdlib.h>
#include<math.h>

	int A, B;

	int add(int A, int B) // one function
    {
        return A + B;
    }
    
    int sub() // one more function
    {
        return A - B;
    }
    int mul() // one more function
    {
        return A * B;
    }
    
    int divi() // one more function
    {
        return A / B;
    }
    int power() // one more function and so on....
    {
        return pow(A,B);
    }
    
    void get()
    {
    	printf ("Enter First Number: ");
        scanf("%d",&A);
		printf ("Enter Second Number: ");
        scanf("%d",&B);
	}

main()
{
	

	
		get();
	
		printf("addition is %d\n", add(A,B));
		printf("subtraction is %d\n", sub(A,B));
		printf("multiplication is %d\n", mul(A,B));
		printf("Divition is %d\n", divi(A,B));
		printf("Power is %d\n", power(A,B));
		
		printf ("The value of A %d \n", A); // data become access
		printf ("The value of B %d \n", B); // data become access
	
	  cout<< (char) 97;
}
