#include "calculator_operations.h"

/* Status of the operation requested */
#define VALID   (1)
#define INVALID (0)

/* Calculator operation requested by user*/
unsigned int calculator_operation = 0;

/* Operands on which calculation is performed */
float calculator_operand1 = 0;
float calculator_operand2 = 0;
int calculator_operand3 = 0;
int calculator_operand4 = 0;

/* Valid operations */
enum operations{ ADD=1, SUBTRACT, MULTIPLY, DIVIDE,GCD,SINE,COS,TAN,power,log,antilog,LCM,combination,permutation,factorial,Exponential, EXIT };

/* Display the menu of operations supported */
void calculator_menu(void);
/* Verifies the requested operations validity */
int valid_operation(int operation);


/* Start of the application */
int main(int argc, char *argv[])
{
    printf("\n****Calculator****\n");
    while(1)
    {
        calculator_menu();
    }
}

void calculator_menu(void)
{
    printf("\nAvailable Operations\n");
    printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. GCD\n6. SINE\n7. COS\n8. TAN\n9. power\n10. log\n11. antilog\n12.LCM\n 13.combination\n 14.permutation\n 15.factorial\n 16.Exponential\n 17. Exit");
    printf("\n\tEnter your choice\n");
   
    scanf("%d", &calculator_operation);

    if(EXIT == calculator_operation)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }

    if(INVALID != valid_operation(calculator_operation))
    {
        printf("\n\tEnter your Numbers with space between them\n");
        scanf("%d %d", &calculator_operand1, &calculator_operand2);
    }
    else
    {
        printf("\n\t---Wrong choice---\nEnter to continue\n");
        getchar();
        return;
        
    }
    switch(calculator_operation)
    {
        case ADD:
            printf("\n\t%d + %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            add(calculator_operand1, calculator_operand2));
            getchar();
            break;
        case SUBTRACT:
            printf("\n\t%d - %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            subtract(calculator_operand1, calculator_operand2));

            getchar();
            break;
        case MULTIPLY:
            printf("\n\t%d * %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            multiply(calculator_operand1, calculator_operand2));

            getchar();
            break;
        case DIVIDE:
            printf("\n\t%d / %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            divide(calculator_operand1, calculator_operand2));

            getchar();
            break;
        case GCD:
            printf("\n\t%d / %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            gcd(calculator_operand1, calculator_operand2));

            getchar();
            break;
        case SINE:
            printf("\n\t%d / %d = %d\nEnter to continue", 
            calculator_operand1,
            sin(calculator_operand1));

            getchar();
            break;
        case COS:
            printf("\n\t%d / %d = %d\nEnter to continue", 
            calculator_operand1, 
            cos(calculator_operand1));

            getchar();
            break;
        case TAN:
            printf("\n\t%d / %d = %d\nEnter to continue", 
            calculator_operand1, 
            tan(calculator_operand1));

            getchar();
            break;
      
        case log:
            printf("\n\t%d / %d = %d\nEnter to continue", 
            calculator_operand1, 
            
            LOG(calculator_operand1));

            getchar();
            break;    
        case antilog:
            printf("\n\t%d / %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            ANTILOG(calculator_operand1));

            getchar();
            break;  

        case LCM:
            printf("\n\t%d / %d = %d\nEnter to continue", 
            calculator_operand3, 
            calculator_operand4,
            lcm(calculator_operand3, calculator_operand4));

            getchar();
            break; 
        case combination:
            printf("\n\t%d / %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            Combination(calculator_operand1, calculator_operand2));

            getchar();
            break; 
        case permutation:
            printf("\n\t%d / %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            Permutation(calculator_operand1, calculator_operand2));

            getchar();
            break;  
        case factorial:
            printf("\n\t%d / %d = %d\nEnter to continue",
            calculator_operand1,
            Factorial(calculator_operand1));

            getchar();
            break;
        case Exponential:
            printf("\n\t%d / %d = %d\nEnter to continue",
            calculator_operand1,
            calculator_operand2,
            exponential(calculator_operand1,calculator_operand2));

            getchar();
            break;
        case cubeRoot:
             printf("\n\t%d / %d = %d\nEnter to continue",
             calculator_operand1,
             cuberoot(calculator_operand1));
            
             getchar();
            break;
        case 17:
            exit(0);
            break;
        
        default:
            printf("\n\t---It should never come here---\n");
    }
}

int valid_operation(int operation)
{
    /* Check if the operation is a valid operation */
    return ((ADD <= operation) && (EXIT >= operation)) ? VALID: INVALID;
}
