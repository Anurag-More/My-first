#include <iostream>
using namespace std;

int max(int x, int y)
{
    return x > y ? x : y;
}

float max(float x, float y)
{
    return x > y ? x : y;
}

/* The upper code has same no. of parameters and same logic but only
   different datatype of parameter so instead of using that code
   I can use the following code */

template <class T>

T max(T x, T y)
{
    return x > y ? x : y;
}

// The code which I used just now is called as funcltion template

int main()
{
    cout << max(10, 5) << endl;
    cout << max(2.3f, 1.4f) << endl;
    
    return 0;
}
