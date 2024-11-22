/******************
Name:
ID:
Assignment: ex2
*******************/

#include <stdio.h>

int main() {
  	int choice;
  	do
  	{
  		printf("Choose an option:\n	1. Happy Face\n 	2. Balanced Number\n	3. Generous Number\n	4. Circle Of Joy\n	5. Happy Numbers\n	6. Festival Of Laughter\n	7. Exit\n");
  		scanf(" %d",&choice);

  		switch(choice)
  		{
  		// Case 1: Draw Happy Face with given symbols for eyes, nose and mouse
  		case 1:
  			scanf("%*[^\n]%*c");
  			char eye, nose, mouth;
  			int size;
  			//getting the face parts
  			printf("Enter symbols for the eyes, nose, and mouth:\n");
  			scanf(" %c %c %c", &eye, &nose, &mouth);
  			//getting face size
  			printf("Enter face size:\n");
  			scanf(" %d", &size);
  			//input validation
  			while(size <= 0 || size%2 == 0){
  				printf("The face's size must be an odd and positive number, please try again:\n");
  				scanf(" %d", &size);
  			}
  			//printing first row (eyes)
  			printf("%c", eye);
  			for (int i = 0 ; i < size ; i++)
  				printf(" ");
  			printf("%c\n", eye);
  			//printing second row (nose)
  			for (int i = 1 ; i <= size + 1 ; i++)
  			{
  				printf(" ");
  				if(i == (size/2) + 1)
  					printf("%c", nose);
  			}
  			//printing third row (mouth)
  			printf("\n\\");
  			for (int i = 0 ; i < size ; i++)
  				printf("%c", mouth);
  			printf("/\n");
  			break;
  		case 2:
  			scanf("%*[^\n]%*c");
  			int balNum, right = 0, left, length = 0;
  			//getting the number
  			printf("Enter a number:\n");
  			scanf(" %d", &balNum);
  			//input validation
  			while(balNum <= 0)
  			{
  				printf("Only positive number is allowed, please try again:\n");
  				scanf(" %d", &balNum);
  			}
  			//saving the number
  			left = balNum;
  			//calculating the length of the number
  			while (balNum != 0)
  			{
  				length++;
  				balNum /= 10;
  			}
  			//dividing the number to left and right half
  			for (int i = 0 ; i < length / 2 ; i++)
  			{
  				right *= 10;
  				right += left % 10;
  				left /= 10;
  			}
  			//checking if left has more digits than right
  			if (length % 2 == 1)
  				left /= 10;
  			//final check
  			if (left == right)
  				printf("This number is balanced and brings harmony!\n");
  			else
  				printf("This number isn't balanced and destroys harmony.\n");

  			break;
  		case 3:
  			scanf("%*[^\n]%*c");
  			int genNum, divSum = 0;
  			//getting the number
  			printf("Enter a number:\n");
  			scanf(" %d", &genNum);
  			//input validation
  			while(genNum <= 0)
  			{
  				printf("Only positive number is allowed, please try again:\n");
  				scanf(" %d", &genNum);
  			}
  			for (int i = 1 ; i < genNum ; i++)
  			{
  				if (genNum % i == 0)
  					divSum += i;
  			}
  			if (divSum > genNum)
  				printf("This number is generous!\n");
  			else
  				printf("This number does not share.\n");
  			break;
  		case 4:
  			scanf("%*[^\n]%*c");
  			int cirNum, cirRevNum, flag = 1, flagRev = 1, temp;
  			//getting the number
  			printf("Enter a number:\n");
  			scanf(" %d", &cirNum);
  			//input validation
  			while(cirNum <= 0)
  			{
  				printf("Only positive number is allowed, please try again:\n");
  				scanf(" %d", &cirNum);
  			}
  			temp = cirNum;
  			//getting the reversed number while keeping the original
  			while (temp != 0)
  			{
  				cirRevNum *= 10;
  				cirRevNum += temp % 10;
  				temp /= 10;
  			}
  			for (int i = 2 ; i < cirNum ; i++)
  			{
  				if (cirNum % i == 0)
  				{
  					flag = 0;
  					break;
  				}
  			}
  			for (int i = 2 ; i < cirRevNum ; i++)
  			{
  				if (cirRevNum % i == 0)
  				{
  					flagRev = 0;
  					printf("%d", i);
  				}
  			}
  			if ((cirNum != 1) && (flag && flagRev))
  				printf("This number completes the circle of joy!\n");
  			else
  				printf("The circle remains incomplete.\n");
  			break;
  		case 5:
  			scanf("%*[^\n]%*c");
  			break;
  		case 6:
  			scanf("%*[^\n]%*c");
  			break;
  		case 7:
  			scanf("%*[^\n]%*c");
  			break;
  		default:
  			choice = 0;
  			printf("This option is not available, please try again.\n");
  		}
  	}while(choice != 7);
	printf("Thank you for your journey through Numeria!");
	// Case 1: Draw Happy Face with given symbols for eyes, nose and mouse
	/* Example:
	* n = 3:
	* 0   0
	*   o
	* \___/
	*/
    

	// Case 2: determine whether the sum of all digits to the left of the middle digit(s)
	// and the sum of all digits to the right of the middle digit(s) are equal
	/* Examples:
	Balanced: 1533, 450810, 99
	Not blanced: 1552, 34
	Please notice: the number has to be bigger than 0.
	*/

	// Case 3: determine whether the sum of the proper divisors (od an integer) is greater than the number itself
	/* Examples:
	Abudant: 12, 20, 24
	Not Abudant: 3, 7, 10
	Please notice: the number has to be bigger than 0.
	*/

	// Case 4: determine wether a number is a prime.
	/* Examples:
	This one brings joy: 3, 5, 11
	This one does not bring joy: 15, 8, 99
	Please notice: the number has to be bigger than 0.
	*/
    

	// Happy numbers: Print all the happy numbers between 1 to the given number.
	// Happy number is a number which eventually reaches 1 when replaced by the sum of the square of each digit
	/* Examples:
	Happy :) : 7, 10
	Not Happy :( : 5, 9
	Please notice: the number has to be bigger than 0.
	*/

	// Festival of Laughter: Prints all the numbers between 1 the given number:
	// and replace with "Smile!" every number that divided by the given smile number
	// and replace with "Cheer!" every number that divided by the given cheer number
	// and replace with "Festival!" every number that divided by both of them
	/* Example:
	6, smile: 2, cheer: 3 : 1, Smile!, Cheer!, Smile!, 5, Festival!
	*/
	return 0;
}
