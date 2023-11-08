// #include<stdio.h>

// int main()
// {
//     printf("hello world");

//     return 0;

// }

//  #include<stdio.h>

// int main()
// {
//     int a=76;
//     int* ptra=&a;

// printf("THE ADDRESS OF POINTER TO A IS %p\n",&ptra);
// printf("THE VALUE OF A IS %d", *ptra);
// return 0;
// }
// C++ implementation of the approach

// C# implementation of the approach
using System;
class GFG {

	// Function to print the character sequence
	// for the given ASCII sentence
	static void asciiToSentence(String str, int len)
	{
		int num = 0;
		for (int i = 0; i < len; i++) {

			// Append the current digit
			num = num * 10 + (str[i] - '0');

			// If num is within the required range
			if (num >= 32 && num <= 122) {

				// Convert num to char
				char ch = (char)num;
				Console.Write(ch);

				// Reset num to 0
				num = 0;
			}
		}
	}

	// Driver code
	public static void Main()
	{
		String str = "7110110110711510211111471101101107115";
		int len = str.Length;
		asciiToSentence(str, len);
	}
}
