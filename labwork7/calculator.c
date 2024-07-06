#include<stdio.h>
#include<conio.h>

void add();
void sub();
void multi();
void div();
void modulus();

void main() 
{
    int exit=0;
    char ch;

    while (!exit) 
	{
        printf("\nMenu:\n");
        printf("1. Addition + \n");
        printf("2. Subtraction - \n");
        printf("3. Multiplication * \n");
        printf("4. Division (/) \n");
        printf("5. Modulus (%) \n");
        printf("q. Exit \n");
        
        printf("Enter your choice: ");
        scanf(" %c",&ch);

        
        switch(ch) 
		{
            case '1':
                		add();
                		break;
            case '2':
                		sub();
                		break;
            case '3':
                		multi();
                		break;
            case '4':
                		div();
                		break;
            case '5':
                		modulus();
                		break;
            case 'q':
                		exit = 1;
                		break;
            default:
                		printf("Invalid choice.\n");
                		break;
        }
    }
    printf("loop ended.\n");
    getch();
}

void add() 
{
    int a,b,c;
    printf("Enter two numbers to add: ");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("Output: %d",c);
}

void sub() {
    int a,b,c;
    printf("Enter two numbers to subtract: ");
    scanf("%d %d",&a,&b);
    c=a-b;
    printf("Output: %d",c);
}


void multi() {
    int a,b,c;
    printf("Enter two numbers to multiply: ");
    scanf("%d %d",&a,&b);
    c=a*b;
    printf("Output: %d",c);
}

void div() {
    int a,b,c;
    printf("Enter two numbers to divide: ");
    scanf("%d %d",&a,&b);
    c=a/b;
    printf("Output: %d",c);
}

void modulus() {
    int a,b,c;
    printf("Enter two numbers to find modulus: ");
    scanf("%d %d",&a,&b);
    c=a%b;
    printf("Output: %d",c);
//    if(b!=0) 
//	{
//        printf("Result: %d %% %d = %d\n", a, b, a % b);
//    } 
//	else 
//	{
//        printf("Error: Division by zero is not allowed.\n");
//    }
}

