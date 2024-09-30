/*lcm is the least common factor
for two numbers with no common factor(i.e coprime) lcm is product of those two
if one number divides the other lcm is biggest of those two
*/
#include<bits/stdc++.h>
using namespace std;

//1
int lcm(int a,int b)
{
    int res=max(a,b);
    while(true)
    {
        if(res%a==0 && res%b==0)
            return res;
        res++;
    }
    return res;
    //time complexity O(a*b-max(a,b))
}

//2
int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int lcmEfficient(int a,int b)
{
    //a*b=gcd(a,b)*lcm(a,b)
    return (a*b)/gcd(a,b);
    //timecomplexity O(log(min(a,b)))
}
