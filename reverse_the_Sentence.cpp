/*Reverse the Sentence

Given a sentence, reverse the entire sentence word-by-word.
Note: Solve using stack or in-place swap. Do not simply scan, split and print in reverse order.

Input Format

First line of input contains T - number of test cases. Its followed by T lines, each contains a sentence S of space separated words of lowercase english alphabet. All the words are separated by a single space.

Constraints

1 <= T <= 1000
1 <= len(S) <= 1000

Output Format

For each test case, print the reversed sentence, separated by newline.

Sample Input 0

3
hello world
a b c d
data structures and algorithms
Sample Output 0

world hello
d c b a
algorithms and structures data
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int top=-1;
string a[1000000];
void push(string val)
{
    if(top<-1)
    {
        top=-1;
    }
      a[++top]=val;    
}

long int pop()
{
    int res=top;
    top--;
    return res;
}


int main() {
    long long int tt,ans;
        cin>>tt;
    getchar();
        while(tt--)
        {
            string str="";
            string nstr="";
            getline(cin,str);
            str=str+"!";
            for(int i=0;i<str.length();i++)
            {
                if(str[i]!=' '&&str[i]!='!')
                {
                    nstr=nstr+str[i];
                }
                else
                {
                    push(nstr);
                    nstr="";
                }
                
            }
             while(top!=-1)
             {
                 ans=pop();
                   cout<<a[ans]<<" ";
             }
            cout<<endl;
           
        }
    return 0;
}
