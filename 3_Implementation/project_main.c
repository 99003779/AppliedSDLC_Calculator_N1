#include <calculator_operations.h>

/* Status of the operation requested */
#define VALID   (1)
#define INVALID (0)

/* Calculator operation requested by user*/
unsigned int calculator_operation = 0;

/* Operands on which calculation is performed */
int calculator_operand1 = 0;
int calculator_operand2 = 0;
float calculator_operand3 = 0;
float calculator_operand4 = 0;
float calculator_result=0;
double calculator_operand5 = 0;
/* Valid operations */
enum operations{ ADD=1, SUBTRACT, MULTIPLY, DIVIDE, GCD, LCM, combination, factorial,permutation,log,Sqrroot,cbroot,Sindeg,Cosdeg,Tandeg,exp,mods,anti,anti2, EXIT };

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
    printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n 5. Exit");
    printf("\n\tEnter your choice\n");
   
     // __fpurge(stdin);
    scanf("%d", &calculator_operation);

    if(EXIT == calculator_operation)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }

    if(INVALID != valid_operation(calculator_operation))
    {
        printf("\n\tEnter your Numbers with space between them\n");
        // __fpurge(stdin);
        scanf("%d %d", &calculator_operand1, &calculator_operand2);
    }
    else
    {
        printf("\n\t---Wrong choice---\nEnter to continue\n");
        // __fpurge(stdin);
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
            
            // __fpurge(stdin);
            getchar();
            break;
        case SUBTRACT:
            printf("\n\t%d - %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            subtract(calculator_operand1, calculator_operand2));
            
            // __fpurge(stdin);
            getchar();
            break;
        case MULTIPLY:
            printf("\n\t%d * %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            multiply(calculator_operand1, calculator_operand2));
            
            // __fpurge(stdin);
            getchar();
            break;
        case DIVIDE:
            printf("\n\t%d / %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            divide(calculator_operand1, calculator_operand2));
            
            // __fpurge(stdin);
            getchar();
            break;
        case GCD:
            printf("\n\t%d / %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            gcd(calculator_operand1, calculator_operand2));

            getchar();
            break;
        case LCM:
            printf("\n\t%d / %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            lcm(calculator_operand1, calculator_operand2));

            getchar();
            break; 
        case combination:
            printf("\n\t%d / %d = %d\nEnter to continue", 
            calculator_operand3, 
            calculator_operand4,
            Combination(calculator_operand3, calculator_operand4));

            getchar();
            break;
         case factorial:
            printf("\n\t%d / %d = %d\nEnter to continue",
            calculator_operand3,
            Factorial(calculator_operand3));

            getchar();
            break; 
 
        case permutation:
            printf("\n\t%d / %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            Permutation(calculator_operand1, calculator_operand2));

            getchar();
            break; 

        case log:
            printf("\n\t%d / %d = %d\nEnter to continue", 
            calculator_operand1);
            
            LOG(calculator_operand1);

            getchar();
            break;

        case Sqrroot:

            printf("\n\t%d / %d = %d\nEnter to continue",

            calculator_operand5);

            findSquareroot(calculator_operand5);

            getchar();

            break;

            

        case cbroot:

            printf("\n\t%d / %d = %d\nEnter to continue",

            calculator_operand5);

            findcubeRoot(calculator_operand5);

            getchar();

            break;

        case Sindeg:

            printf("\n\t%d / %d = %d\nEnter to continue",

            calculator_operand5);

            Sine_for_degree(calculator_operand5);

            getchar();

            break;

        case Cosdeg:

            printf("\n\t%d / %d = %d\nEnter to continue",

            calculator_operand5);

            Cosine_for_degree(calculator_operand5);

            getchar();

            break;

        case Tandeg:

            printf("\n\t%d / %d = %d\nEnter to continue",

            calculator_operand5);

            Tan_for_degree(calculator_operand5);

            getchar();

            break;       
        case exp:
            printf("\n\t%d / %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            Exponential(calculator_operand1, calculator_operand2));
            getchar();
            break;
        case mods:
            printf("\n\t%d / %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            Modulus(calculator_operand1, calculator_operand2));
            getchar();
            break;    
        case anti:
            printf("\n\t%d / %d = %d\nEnter to continue", 
            calculator_operand1, 
            Antilog10(calculator_operand1));
            getchar();
            break;     
         case anti2:
            printf("\n\t%d / %d = %d\nEnter to continue", 
            calculator_operand1, 
            AntilogBase2(calculator_operand1));
            getchar();
            break;  
        case 20:
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