#include <calculator_operations.h>

/* Status of the operation requested */
#define VALID   (1)
#define INVALID (0)

/* Calculator operation requested by user*/
unsigned int calculator_operation = 0;

/* Operands on which calculation is performed */
int calculator_operand1 = 0;
int calculator_operand2 = 0;

/* Valid operations */
enum operations{ ADD=1, SUBTRACT, MULTIPLY, DIVIDE, EXIT };

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
    printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. GCD\n6. SINE\n7. COS\n8. TAN\n9. power\n10. log\n11. antilog\n12. Exit");
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
            GCD(calculator_operand1, calculator_operand2));

            getchar();
            break;
        case SINE:
            printf("\n\t%d / %d = %d\nEnter to continue", 
            calculator_operand1,
            SIN(calculator_operand1));

            getchar();
            break;
        case COS:
            printf("\n\t%d / %d = %d\nEnter to continue", 
            calculator_operand1, 
            COS(calculator_operand1));

            getchar();
            break;
        case TAN:
            printf("\n\t%d / %d = %d\nEnter to continue", 
            calculator_operand1, 
            TAN(calculator_operand1));

            getchar();
            break;
        case power:
            printf("\n\t%d / %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            divide(calculator_operand1, calculator_operand2));

            getchar();
            break;
        case log:
            printf("\n\t%d / %d = %d\nEnter to continue", 
            calculator_operand1, 
            
            divide(calculator_operand1, calculator_operand2));

            getchar();
            break;    
        case antilog:
            printf("\n\t%d / %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            divide(calculator_operand1, calculator_operand2));

            getchar();
            break;    
        case 12:
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