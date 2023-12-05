#include <iostream>
using namespace std;


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



	//// Write a program that displays the contents of an array of integers, storing people’s ages, forwards and in reverse.
	//int ages[10] = { 29,34,21,19,16,45,34,57,99,40 };

	//for (auto age : ages)  // Loop through each
	//	cout << age << " ";
	//cout << endl;
	//for (int index = size(ages) - 1; index >= 0; index--)
	//	cout << ages[index] << " ";


	//// Design and write a program to output a student’s year average and letter grade based on the average of 6 module results (percentages) and state if they have passed or not.
	//int results = 0;
	//for (int i = 0; i < 6; i++) {  // Add all results together
	//	cout << "Enter module " << i + 1 << " percentage: ";
	//	int temp = 0;
	//	cin >> temp;
	//	results += temp;
	//}
	//results /= 6;  // Get average
	//char grade = ' ';
	//if (results >= 85) {
	//	grade = 'A*';
	//}
	//else if (85 > results >= 70) {
	//	grade = 'A';
	//}
	//else if (70 > results && results >= 60)
	//	grade = 'B';
	//else if (60 > results && results >= 50)
	//	grade = 'C';
	//else if (50 > results && results >= 40)
	//	grade = 'D';
	//else if (40 > results && results >= 30)
	//	grade = 'E';
	//else
	//	grade = 'F';
	//cout << "Your average grade is " << grade << " with a score of " << results << ", meaning you have " << (results >= 40 ? "passed!" : "failed.") << endl;


	//// Write a program that will populate an array of 20 integers with the squared value of the loop counter used to index the array.
	//int nums[20];
	//for (int i = 0; i < size(nums); i++)
	//	nums[i] = pow(i, 2);
	//for (auto num : nums)
	//	cout << num << " ";
	//cout << endl;
	//for (int i = size(nums) - 1; i >= 0; i--)
	//	cout << nums[i] << " ";


	//// Write a program that inputs two values from the user and then displays a menu of choices of what to do with the two values.
	//int num1 = 0;
	//int num2 = 0;
	//char choice = ' ';
	//cout << "Enter number 1: ";
	//cin >> num1;
	//cout << "Enter number 2: ";
	//cin >> num2;

	//while (choice != 'Q' && choice != 'q') {
	//	cout << endl << "1 - Add them" << endl << "2 - Multiply them" << endl << "3 - Divide them" << endl << "Q - Exit" << endl << ": ";
	//	cin >> choice;
	//	
	//	switch (choice) {
	//		case '1':
	//			cout << num1 + num2 << endl;
	//			break;
	//		case '2':
	//			cout << num1 * num2 << endl;
	//			break;
	//		case '3':
	//			cout << num1 / num2 << endl;
	//			break;
	//	}
	//}


	//// Write a program that populates half of an array with values and the other half in reverse.
	//int nums[12] = { 10, 9, 8, 7, 6, 5 };

	//for (int i = size(nums) / 2; i > 0; i--)
	//	nums[i - 1 + size(nums) / 2] = nums[size(nums) / 2 - i];
	//for (auto num : nums)
	//	cout << num << " ";


	//// Write a program to get the user to input some numbers and then output which ones are odd.
	//int length = 0;
	//cout << "How many numbers would you like to enter? (max 20): ";
	//cin >> length;
	//if (length > 20) {
	//	cout << length << " is beyond the maximum of 20";
	//	return 0;
	//}
	//int nums[20];
	//for (int i = 0; i < length; i++) {
	//	cout << "Enter number " << i << ": ";
	//	cin >> nums[i];
	//}
	//cout << endl;
	//for (int i = 0; i < length; i++) {
	//	if (nums[i] % 2)
	//		cout << (i == length - 1 ? " and " : "") << nums[i] << (i >= length - 3 ? "" : ", ");
	//}
	//cout << " are all odd.";


	return 0;
}
