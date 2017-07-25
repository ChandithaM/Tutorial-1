/*
 * Task1.3.cpp
 *
 *  Created on: 20/07/2017
 *      Author: Chanditha
 */

#include <iostream>
#include <string>
using namespace std;

/*
int main() {


	//initiating all the variables

	int oddNum, evenNum, evenSum, nums, squareNum;
	int firstNum = 0;
	int secondNum = 0;

	//unrequired heading
	cout << "Welcome to useless number show: \n";
	cout << "----------------------------------------------\n";

	//(B)loop to make sure 2nd number is greater than 1st and not equal
	while(firstNum>=secondNum){

		//(A)
		cout << "Enter an integer: ";
		cin >> firstNum;

		cout << "Enter a greater integer: ";
		cin >> secondNum;

	}

	//(C)

	//condition if first number is even
	if (firstNum%2 == 0){
		oddNum = firstNum + 1;
	}

	//condition if first number is odd
	else {
		oddNum = firstNum + 2;
	}
	cout << "Odd Numbers between these integers: ";

	//getting number of odd numbers
	int oddArraySize = ((secondNum - firstNum)/2);

	//creating an Array with odd numbers for later use.
	int oddArray[oddArraySize];

	//loop to keep finding next odd number till last integer
	for(int j = 0; j<oddArraySize; j++){
		oddArray[j] = oddNum;
		 cout << oddNum << ", ";
		 oddNum = oddNum +2;
	}
	cout << "that's it.\n";


	//(D)

	if(firstNum%2 == 0){
		evenNum = firstNum + 2;
	}

	else evenNum = firstNum + 1;

	evenSum = 0;

	while(evenNum<secondNum){
		evenSum = evenSum + evenNum;
		evenNum = evenNum + 2;
	}

	cout << "Sum of all even numbers between these integers: " << evenSum <<"\n";


	//(E)

	cout << "First 10 integers between them: ";
	nums = firstNum + 1;
	for(int i = 0; i<10;i++){
		if(nums<secondNum){
			cout << nums << ", ";
			nums++;
		}
	}
	cout << "nope, that's it.\n";


	//(F)
	cout << "The following shows the squares of the respective odd number: ";
	//condition that goes through the odd numbers stored in the Array and squares each of them.
	for(int i = 0; i<oddArraySize;i++){
		squareNum = oddArray[i]*oddArray[i];
		cout << squareNum <<", ";

	}

	cout <<"the end.";

	}

*/

