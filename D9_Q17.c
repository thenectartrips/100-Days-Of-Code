// Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, Discriminant, root1, root2, RealPart, ImaginaryPart;

    printf("Enter a, b and c: ") ;
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0)
    {
        printf("Invalid coefficient 'a'. It cannot be zero in a quadratic equation.\n");
        return 0;
    }

    Discriminant = (b * b) - (4 * a * c);

    if (Discriminant > 0)
    {
        root1 = (-b + sqrt(Discriminant)) / (2 * a);
        root2 = (-b - sqrt(Discriminant)) / (2 * a);
        printf("The roots are real and distinct %.2f , %.2f\n", root1, root2);
    }
    else if (Discriminant == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("The roots are real and same %.2f , %.2f\n", root1, root2);
    }
    else if (Discriminant < 0)
    {
        RealPart = -b / (2 * a);
        ImaginaryPart = sqrt(-Discriminant) / (2 * a);
            printf("The roots are complex and conjugates.\n");
        printf("Root1 = %.2f + %.2fi\n", RealPart, ImaginaryPart);
        printf("Root2 = %.2f - %.2fi\n", RealPart, ImaginaryPart);
    }
    else
    {
        printf("Invalid input.\n");
    }

    return 0;
}

