/*Implement Stack

Perform push and pop operations on stack. Implement Stacks and avoid using inbuilt library.

Input Format

First line of input contains T - number of operations. Its followed by T lines, each line contains either "push x" or "pop".

Constraints

1 <= T <= 10000
-100 <= x <= 100

Output Format

For each "pop" operation, print the popped element, separated by newline. If the stack is empty, print "Empty".

Sample Input 0

8
push 5
pop
pop
push 10
push -15
pop
push -10
pop
Sample Output 0

5
Empty
-15
-10

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() 
{
    int tt,a[100];
    cin>>tt;
    int top = -1;
    while(tt--)
    {
        string str;
        cin>>str;
        if(str == "push")
        {
            int d;
            cin>>d;
           
            a[++top]=d;
        }
        else
        {
            if(top != -1)
            {
                cout << a[top--] << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }
    return 0;
}

