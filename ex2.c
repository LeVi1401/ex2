/******************
Name:
ID:
Assignment: ex2
*******************/

#include <stdio.h>

int main() {
  	int choice, clear;
  	do
  	{
  		printf("Choose an option:\n	1. Happy Face\n 	2. Balanced Number\n	3. Generous Number\n	4. Circle Of Joy\n	5. Happy Numbers\n	6. Festival Of Laughter\n	7. Exit\n");
  		scanf(" %d",&choice);

  		switch(choice)
  		{
  		// Case 1: Draw Happy Face with given symbols for eyes, nose and mouse
  		case 1:
  			do
  			{
  				clear = scanf("%*[^\n]%*c");
  			}while(clear == -1);
  			char eye, nose, mouth;
  			int size;
  			//getting the face parts
  			printf("Enter symbols for the eyes, nose, and mouth:\n");
  			scanf(" %c %c %c", &eye, &nose, &mouth);
  			//getting face size
  			printf("Enter face size:\n");
  			scanf(" %d", &size);
  			//input validation
  			while(size <= 0 || size%2 == 0)
  			{
  				do
  				{
  					clear = scanf("%*[^\n]%*c");
  				}while(clear == -1);
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
  			do
  			{
  				clear = scanf("%*[^\n]%*c");
  			}while(clear == -1);
  			int balNum, right = 0, left, length = 0;
  			//getting the number
  			printf("Enter a number:\n");
  			scanf(" %d", &balNum);
  			//input validation
  			while(balNum <= 0)
  			{
  				do
  				{
  					clear = scanf("%*[^\n]%*c");
  				}while(clear == -1);
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
  			do
  			{
  				clear = scanf("%*[^\n]%*c");
  			}while(clear == -1);
  			int genNum, divSum = 0;
  			//getting the number
  			printf("Enter a number:\n");
  			scanf(" %d", &genNum);
  			//input validation
  			while(genNum <= 0)
  			{
  				do
  				{
  					clear = scanf("%*[^\n]%*c");
  				}while(clear == -1);
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
  			do
  			{
  				clear = scanf("%*[^\n]%*c");
  			}while(clear == -1);
  			int cirNum, cirRevNum, flag = 1, flagRev = 1, temp;
  			//getting the number
  			printf("Enter a number:\n");
  			scanf(" %d", &cirNum);
  			//input validation
  			while(cirNum <= 0)
  			{
  				do
  				{
  					clear = scanf("%*[^\n]%*c");
  				}while(clear == -1);
  				printf("Only positive number is allowed, please try again:\n");
  				scanf(" %d", &cirNum);
  			}
  			temp = cirNum;
  			cirRevNum = 0;
  			//getting the reversed number while keeping the original
  			while (temp != 0)
  			{
  				cirRevNum *= 10;
  				cirRevNum += temp % 10;
  				temp /= 10;
  			}
  			//checking if normal number is prime
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
  					break;
  				}
  			}
  			if ((cirNum != 1) && (flag && flagRev))
  				printf("This number completes the circle of joy!\n");
  			else
  				printf("The circle remains incomplete.\n");
  			break;
  		case 5:
  			do
  			{
  				clear = scanf("%*[^\n]%*c");
  			}while(clear == -1);
			int hapNum, tempHapNum, sumD, d;
  			//getting the number
  			printf("Enter a number:\n");
  			scanf(" %d", &hapNum);
  			//input validation
  			while(hapNum <= 0)
  			{
  				do
  				{
  					clear = scanf("%*[^\n]%*c");
  				}while(clear == -1);
  				printf("Only positive number is allowed, please try again:\n");
  				scanf(" %d", &cirNum);
  			}
  			//print for later
  			printf("Between 1 and %d only these numbers bring happiness:", hapNum);
  			//going through all the numbers from 1 to the chosen number
  			for(int i = 1 ; i <= hapNum ; i++)
  			{
  				//reseting for the calculation
  				tempHapNum = i;
  				sumD = 0;
  				//check wether the number is happy or not (1 = happy, 4 = unhappy)
  				while (tempHapNum != 4 && tempHapNum != 1)
  				{
  					//progress a step
  					while (tempHapNum != 0)
  					{
  						d = tempHapNum % 10;
  						tempHapNum /= 10;
  						sumD += (d * d);
  					}
  					tempHapNum = sumD;
  					sumD = 0;
  				}
  				//print the happy number
  				if (tempHapNum == 1)
  					printf(" %d", i);
  			}
  			//space at the end of the line
  			printf(" \n");
  			break;
  		case 6:
  			do
  			{
  				clear = scanf("%*[^\n]%*c");
  			}while(clear == -1);
  			int smileNum = 0, cheerNum = 0, n;
  			//getting the numbers and the correct format
  			printf("Enter a smile and cheer number:\n");
  			scanf("smile: %d, cheer: %d", &smileNum, &cheerNum);
  			//input validation
  			while (smileNum == 0 || cheerNum == 0 || (smileNum == cheerNum))
  			{
  				do
  				{
  					clear = scanf("%*[^\n]%*c");
  				}while(clear == -1);
				printf("Only 2 different positive numbers in the given format are allowed for the festival, please try again:\n");
  				scanf("smile: %d, cheer: %d", &smileNum, &cheerNum);
  			}
  			do
  			{
  				clear = scanf("%*[^\n]%*c");
  			}while(clear == -1);
  			//getting the maximum number
			printf("Enter maximum number for the festival:\n");
  			scanf(" %d", &n);
  			//input validation
  			while (n <= 0)
  			{
  				scanf("%*[^\n]");
  				scanf("%*c");
  				printf("Only positive maximum number is allowed, please try again:\n");
  				scanf(" %d", &n);
  			}
			//printing the numbers while changing to cheer, smile and festival when necessary
  			for (int i = 1 ; i <= n ; i++)
  			{
  				if (i % smileNum == 0)
  					if (i % cheerNum == 0)
  						printf("Festival!\n");
  					else
  						printf("Smile!\n");
  				else
  					if (i % cheerNum == 0)
  						printf("Cheer!\n");
  					else
  						printf("%d\n", i);
  			}
  			break;
  		case 7:
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
