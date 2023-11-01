/*Name:Uche Hadassah
This program computes the sum of all the digits in an integer*/
#include<iostream>
using namespace std;
int SumDigits(long n);//Function Prototype
int main()
{
	long number;
	cout << "Enter an integer:";
	cin >> number;
	cout << "The sum of all the digits in " << number << " is " << SumDigits(number) << endl;//calling the function
	return 0;
}
int SumDigits(long n)
{
	int sum = 0;
	while (n % 10 != 0)//while we have not reached the first digit
	{
		sum += n % 10;//adds the last digit to sum
		n = n / 10;// removes the last digit from n
	}
	sum += n;//adds the remaining number to sum
	return sum;
}