/*Write a function that computes the sum of digits in an integer. Use the following 
function header:
int SumDigits(long n)
For example, SumDigits(234) returns the value of 2+3+4, i.e. 9 or SumDigits(1347) 
reurns the value of 1+3+4+7, i.e. 15. Write and test the program with user defined 
input.
 HINT: Use the % operator to extract a digit and the / operator to remove the 
extracted digit. For example, to extract 4 from 234 use 234%10 (=4). To remove 4 
from 234, use 234/10 (=23). Use the loop to repeatedly extract and remove a digit 
until all digits are extracted.*/
#include<iostream>
using namespace std;
int SumDigits(long n);//Function Proyotype
int main()
{
	cout << "The sum of 1234 is " << SumDigits(1234);
	
	return 0;
}
int SumDigits(long n)
{
	int sum = 0;
	while (n % 10 != 0)
	{
		sum += n % 10;
		n = n / 10;
	}
	sum += n;
	return sum;
}