#include <cstdio>
#include"stack"
void DigitToNum(stack digit){
    int k;
    while(digit.isEmpty()!=1){
        k=digit.pop();
                if(k==1)
                printf("one ");
                else if(k==2)
                printf("two ");
                else if(k==3)
                printf("three ");
                else if(k==4)
                printf("four ");
                else if(k==5)
                printf("five ");
                else if(k==6)
                printf("six ");
                else if(k==7)
                printf("seven ");
                else if(k==8)
                printf("eight ");
                else if(k==9)
                printf("nine ");
                else if(k==0)
                printf("zero ");
                
            }
            printf("\n");
}
void reverse(stack digit){
    stack digit1;
    while(digit.isEmpty()!=1){
        digit1.push(digit.pop());
    }
    while(digit1.isEmpty()!=1){
        printf("%d",digit1.pop());
    }
}
void palindrome(stack digit){
    int k,flag=1;
    stack digit1,digit2;
    digit1=digit;
    while(digit1.isEmpty()!=1){
        digit2.push(digit1.pop());
    }
    while(digit.isEmpty()!=1){
        if(digit.pop()!=digit2.pop()){
            flag=0;
        }
    }
    if(flag==0)
    printf("not a palindrome\n");
    else
    printf("palindrome\n");
}
int main(){
    int n,k,num=1,num2,num3,num4;
    int flag=1;
    stack number;
    stack digit;
    int i=0;
    int arr[20];
    while(num!=5){
        printf("Enter \n 1.Get Number \n 2.Digit in Text \n 3.Reverse \n 4.Palindrome Check \n 5.Exit\n");
        scanf("%d",&num);
            switch (num)
        {
        case 1:
            printf("Enter an integer:\n");
            scanf("%d",&num2);
            n=num2;
            number.push(n);
            while(digit.isEmpty()!=1){
                digit.pop();
            }
            while(n!=0){
            digit.push(n%10);
            n=n/10;
        }
            break;
        case 2:
            DigitToNum(digit);
            break;
        case 3:
        reverse(digit);
        printf("\n");
        break;
        case 4:
        palindrome(digit);
            break;
        case 5:
        break;
        default:
        printf("Enter the valid number\n");
            break;
    }

    }
    printf("Numbers in the main stack:\n");
    number.display();
}