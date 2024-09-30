/*prime-divisible by 1 and itself
composite-not prime
1 is neither prime nor composite
2 is the only even prime number
*/

#include <bits/stdc++.h>
using namespace std;

// method 1
bool isPrime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
// method 2
/* int this method we will find a pair of
numbers whose product will give the required
number*/
bool isPrimeEfficient(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
    // timecomplexity O(sqrt(n))
}
// method 3
// adding check statements n%2==0 and n%3==0 to code
bool isPrimeBestEfficient(int n)
{
    if (n == 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
