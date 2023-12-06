#include <iostream>
using namespace std;


void loopArray() {
	// Write a program that displays the contents of an array of integers, storing people’s ages, forwards and in reverse.
	int ages[10] = { 29,34,21,19,16,45,34,57,99,40 };

	for (auto age : ages)  // Loop through each
		cout << age << " ";
	cout << endl;
	for (int index = size(ages) - 1; index >= 0; index--)
		cout << ages[index] << " ";
}


void studentGrade() {
	// Design and write a program to output a student’s year average and letter grade based on the average of 6 module results (percentages) and state if they have passed or not.
	int results = 0;
	for (int i = 0; i < 6; i++) {  // Add all results together
		cout << "Enter module " << i + 1 << " percentage: ";
		int temp = 0;
		cin >> temp;
		results += temp;
	}
	results /= 6;  // Get average
	string grade;
	if (results >= 85)
		grade = "A*";
	else if (85 > results && results >= 70)
		grade = "A";
	else if (70 > results && results >= 60)
		grade = "B";
	else if (60 > results && results >= 50)
		grade = "C";
	else if (50 > results && results >= 40)
		grade = "D";
	else if (40 > results && results >= 30)
		grade = "E";
	else
		grade = "F";
	cout << "Your average grade is " << grade << " with a score of " << results << "%, meaning you have " << (results >= 40 ? "passed!" : "failed.") << endl;
}


void square() {
	// Write a program that will populate an array of 20 integers with the squared value of the loop counter used to index the array.
	int nums[20];
	for (int i = 0; i < size(nums); i++)
		nums[i] = pow(i, 2);
	for (auto num : nums)
		cout << num << " ";
	cout << endl;
	for (int i = size(nums) - 1; i >= 0; i--)
		cout << nums[i] << " ";
}


void calculator() {
	// Write a program that inputs two values from the user and then displays a menu of choices of what to do with the two values.
	int num1 = 0;
	int num2 = 0;
	char choice = ' ';
	cout << "Enter number 1: ";
	cin >> num1;
	cout << "Enter number 2: ";
	cin >> num2;
	while (choice != 'Q' && choice != 'q') {
		cout << endl << "1 - Add them" << endl << "2 - Multiply them" << endl << "3 - Divide them" << endl << "Q - Exit" << endl << ": ";
		cin >> choice;
		
		switch (choice) {
			case '1':
				cout << num1 + num2 << endl;
				break;
			case '2':
				cout << num1 * num2 << endl;
				break;
			case '3':
				cout << num1 / num2 << endl;
				break;
		}
	}
}


void reverseArray() {
	// Write a program that populates half of an array with values and the other half in reverse.
	int nums[12] = { 10, 9, 8, 7, 6, 5 };

	for (int i = size(nums) / 2; i > 0; i--)
		nums[i - 1 + size(nums) / 2] = nums[size(nums) / 2 - i];
	for (auto num : nums)
		cout << num << " ";
}


void filterOdd() {
	// Write a program to get the user to input some numbers and then output which ones are odd.
	int length = 0;
	cout << "How many numbers would you like to enter? (max 20): ";
	cin >> length;
	if (length > 20) {
		cout << length << " is beyond the maximum of 20";
		return;
	}
	int nums[20];
	for (int i = 0; i < length; i++) {
		cout << "Enter number " << i + 1 << ": ";
		cin >> nums[i];
	}
	cout << endl;
	for (int i = 0; i < length; i++) {
		if (nums[i] % 2)
			cout << nums[i] << (i == length - 4 ? " and " : (i >= length - 3 ? "" : ", "));  // Format number output
	}
	cout << " are all odd.";
}


int main() {
	enum class ESelection {
		eNone,
		eLoopArray,
		eStudentGrade,
		eSquare,
		eCalculator,
		eReverseArray,
		eFilterOdd
	};
	int userInput;
	do {
		cout << "******** Main Menu ********" << endl << endl  // Output options
			<< "1. Loop Array" << endl
			<< "2. Student Grade" << endl
			<< "3. Square" << endl
			<< "4. Calculator" << endl
			<< "5. Reverse Array" << endl
			<< "6. Filter Odd Numbers" << endl
			<< "7. Quit" << endl << endl
			<< "Your choice: ";
		cin >> userInput;

		system("cls");  // Clear screen

		ESelection userSelection{ static_cast<ESelection>(userInput) };  // Convert to enum

		switch (userSelection) {  // Enum responses
		case ESelection::eLoopArray:
			cout << "******** Loop Array *******" << endl << endl;
			loopArray();
			break;
		case ESelection::eStudentGrade:
			cout << "****** Student Grade ******" << endl << endl;
			studentGrade();
			break;
		case ESelection::eSquare:
			cout << "********* Square **********" << endl << endl;
			square();
			break;
		case ESelection::eCalculator:
			cout << "******** Calculator *******" << endl << endl;
			calculator();
			break;
		case ESelection::eReverseArray:
			cout << "****** Reverse Array ******" << endl << endl;
			reverseArray();
			break;
		case ESelection::eFilterOdd:
			cout << "******** Filter Odd *******" << endl << endl;
			filterOdd();
			break;
		default:
			userInput = 7;  // Quit
		}

		char temp = getchar();  // Clear input queue
		cout << endl << endl << "Press Enter to return to main menu." << endl;
		while (getchar()!='\n');  // Wait for user to press enter
		system("cls");  // Clear screen
	
	} while (userInput != 7);

	return 0;
}
