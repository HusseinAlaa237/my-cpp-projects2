#include <iostream>
#include <array>
#include <string.h>
#include <cmath>
#include <cctype>
#include <algorithm>
#include <vector>
#include <iomanip>
/*(10==100? cout<<"h":cout<<5);
array<int,4> aa[4]={1,2,3,4};
using hussein=long long;
cout<<fmod(11.5,2); ===> %
cout<<trunc(4.7); ===> يقص العلامه*
toupper
tolower
isspase*/
#include <iostream>
using namespace std;
int maxOfThree(int a, int b, int c)
{
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max; 
}
int main()
{
    int num1, num2, num3;
    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;
    cout << "Maximum of the three numbers is: " << maxOfThree(num1, num2, num3) << endl;
    return 0;
}   


// This program defines a function to find the ل of three integers