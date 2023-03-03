/* Write your program after the comment
Write a program that reads input from user (Number)
If the number is Odd, display 'userInput is Odd'
If the number is even, display 'userInput is even'
If the number is zero, display 'This is zero'

NOTE: 'userInput' should be the number entered by the user.

*/

#include <stdio.h>

int main()
{
	int num;

	printf("Enter a number: ");
	scanf("%d", &num);
	
	if (num != 0 && num % 2 == 1)
		printf("\nuserInput is Odd");
	else if (num != 0 && num % 2 == 0)
		printf("\nuserInput is even");
	else
		printf("\nThis is zero");
	return (0);
}
