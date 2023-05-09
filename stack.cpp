#include<cstdio>
#define size 5

class stack
{
private:
 int arr[size];
 int top;

public:
 stack(){
    top=-1;
 }
bool isFull()
{

	if(top==size-1)
		return(true);

	return(false);
}
int isEmpty()
{

	if(top==-1)
		return(1);

	return(0);
}

void push(int num)
{
	if(isFull()){
		printf("overflow\n");
	}
	else{
		arr[++top]=num;	
	}
}

int pop()
{
	if(isEmpty()){
		printf("underflow");
	}
	else{
		top=top-1;
	}
    return(arr[top+1]);
}

int peak()
{
	return(arr[top]);
}

void display(){
	for(int i=0;i<=top;i++){
	printf("%d\n",arr[i]);	
	}
}
};