// CPPTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void Func()
{   // first line of Func().
            int dummy = 0;
            int iLocal = 0;	// init iLocal in Func().
            iLocal++;

            string fourtype = "??????????"; //#bp3
            string s1 = "hello"; //#bp4
            string s2 = "World"; //#bp6
        }
int recursive(int m)
        {
            if (m <= 1)
                return 1;
            return m * recursive(m - 1);
        }
		int sum(int i,int j)
		{
			return i + j;
		}
int main()
{
for (int i = 1; i < 100; i++)
            {
                int j = i; //#bp1
                j++;
            }
int m = 10;
Func();
recursive(6);
sum(10, 20);
    std::cout << "Hello World!\n";
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
