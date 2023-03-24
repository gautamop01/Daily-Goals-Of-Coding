/*
A template pardmeter pack is d template parameter that accepis zero
or more template arguments (non-types, types, or templates). lo read
more about paramete pack, Cick nere.
reate a template function named reversed_binary_value. It must take
an droitraiy number or D00 vaiues as template parameters. Inese
booleans represent binary digits in reverse order. Your function must
return an integer corresponding to the binary value of the digits
epresented by the booleans. For example:
reversed_binary_value<0,0,1>() should return 4.
Input Format
he first line contains an integer, t, the number of test cases. tach of
the t subsequent lines contains a test case. A test case is described as 2
space-separated integers, t and y. respectively.
z is the value to compare against.
yrepresents the range to compare: 64 X y to 64 x y+63.
onstraints
0as65535
0SyS 1023
Ihe number of template parameters passed to
reversed_binary_value will be 16.
Output Format
Each line of output contains 64 binary characters (i.e., Os and 1's). Each
character represents one value in the range. Ihe first character
corresponds to the first value in the range. The last character
corresponds to the last value in the range. ihe character is I if the
value in the range matches A; otherwise, the chara cter is U.
Sample Input
65 1
16 0
Sample Output
0100000000000000000000000000000000000000000000000000000000000000
0000000000100000000000000000000000000000000000000000000000000000

Explanation
The second character on the first line is a 1, because the second value
in the range 64.. 127 is 65 and e is 65.
The eleventh character on the second line isa 1, because the eleventh
value in the range 0..63 is 10 and a is 10.
All other characters are zero, because the corresponding values in the
range do not match
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

template <bool a> int reversed_binary_value() { return a; }

template <bool a, bool b, bool... d> int reversed_binary_value() {
  return (reversed_binary_value<b, d...>() << 1) + a;
}

template <int n, bool...digits>
struct CheckValues {
  	static void check(int x, int y)
  	{
    	CheckValues<n-1, 0, digits...>::check(x, y);
    	CheckValues<n-1, 1, digits...>::check(x, y);
  	}
};

template <bool...digits>
struct CheckValues<0, digits...> {
  	static void check(int x, int y)
  	{
    	int z = reversed_binary_value<digits...>();
    	std::cout << (z+64*y==x);
  	}
};

int main()
{
  	int t; std::cin >> t;
  	for (int i=0; i!=t; ++i) {
		int x, y;
    	cin >> x >> y;
    	CheckValues<6>::check(x, y);
    	cout << "\n";
  	}
}
// int main() {
//     int t;
//     std::cin>>t;
//     while(t--){
//         int x,y;
//         cin>>x>>y;
//         Checkvalues<6>::check(x,y);
//         cout<<"\n";
//     }
// }
