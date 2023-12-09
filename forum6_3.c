#include <stdio.h>

int main()
{
    float val1, val2 ,res1;
    char opr1;

    printf("Simple calculator Forum 6.3\n");
    //input value 1
    printf("Input value 1 = ");
    scanf("%f", &val1);
    //Input operator
    printf("Select operation (* + - /) =");
    scanf(" %c", &opr1);
    //input value 2
    printf("Input value 2 = ");
    scanf("%f", &val2);
    // for calculation based on selected operator
    switch (opr1)
    {
    case '*':
        res1 = val1 * val2;
    break;
    case '/':
        if (val2 != 0)
        {
            res1 = val1 / val2;
        }
        else{
        printf("Number can't be 0");
        return 1;
        }
    break;
    case '+':
        res1 = val1 + val2;
    break;
    case '-':
        res1 = val1 - val2;
    break;
    default:
        printf("Error: Invalid Operator\n");
        return 1;
    }
    //Displat Result 
    printf("Result = %.2f", res1);
    return 0;
}
