#include <iostream>
using namespace std;
// Here we created an MACRO to used the PI value, It will not take any space or memory:
#define PI 3.14
// Global & Local variable in functions:
void a(int &i)
{
    char ch = 'a'; // This is local variable
    cout << "ch value in local variable: " << ch << endl;
    cout << "i value taking reference from the main function: " << i << endl; // This is global variable taking reference form the main function:
}
// This is for the INLINE function, in this no memory extra usage, no function call overhead:
inline int getMax(int a, int b)
{
    return (a > b) ? a : b;
}
// This is for the DEFAULT ARGUMENT:
void print(int arr[], int size, int start = 0)
{
    for (int i = start; i < size; i++)
    {
        cout << "Value of index " << i << " is: " << arr[i] << endl;
    }
}
int main()
{
    // This is for the MACRO:
    int radius = 5;
    // int pi = 3.14;
    int area = PI * radius * radius;
    cout << "The area of the circle is: " << area << "cm" << endl;

    // This is for the GLOBAL VARIABLES:
    int i = 5; // This is global variable for the main function:
    {
        int i = 2;
        cout << "i value in local variable: " << i << endl;
    }
    cout << "i value in global variable: " << i << endl;
    // Calling the function :
    a(i);

    // This is for the INLINE fUNCTIONS:
    int a = 1;
    int b = 2;
    int ans = 0;
    ans = getMax(a, b);
    cout << "The answer is: " << ans << endl;
    a = a + 3;
    b = b + 1;
    ans = getMax(a, b);
    cout << "The answer is: " << ans << endl;

    // This is for the DEFAULT ARGUMENT:
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    // It will use the default argument:
    cout << "It will use the default argument" << endl;
    print(arr, size);
    // It will use the initial argument:
    cout << "It will use the initial argument" << endl;
    print(arr, size, 2);
}