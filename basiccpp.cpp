// basiccpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
    std::cout << "this is our second line\n";
    
    short int a;
    std::cout<<sizeof(a);

    //print max value of short int
    std::cout << "\nMax value of short int: " << SHRT_MAX;

    char b = 98;
    std::cout << "\n"<<b;
    //what is the b code in ansii table
    std::cout << "\n" << (int)b;

    //let wirte a program to print the ansii table
    for (int i = 0; i < 256; i++)
    {
		std::cout << i << " : " << (char)i << std::endl;
	}   
    std::cout << "--------------*---------------\n";
    //simple comparison of two numbers that are entered by user
    int x, y, max;
    std::cout << "enter two numbers:";
    std::cin >> x >> y;
    //let's assume x is greater than y;
    max = x;

    if (y>max)
       max = y;
    
    std::cout << "\nthe biggest number is: " << max;
    std::cout << "--------------*---------------\n";

    //imagine we want pick the biggest nuber that our user 
    //first we agree with our user to enter -1 to stop entering numbers
    //then we will print the biggest number
    int number, biggest;
    std::cout << "enter a numbers i will found the biggest one :\n";
    std::cout << "remember you can stop entering numbers by entering -1\n";
    std::cin >> number;
    biggest = number;
    while (number != -1)
    {
        std::cout << "enter a number:";
        std::cin >> number;
            if (number > biggest)
                biggest = number;
    }
    std::cout << "the biggest number is:" << biggest;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
