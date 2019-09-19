#include<stdio.h>
#include<iostream>
#include<limits.h>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        int r=0,sum=0;
        long res,rr;
        res = 0;
        while(x != 0)
        {
            rr = (long)x%10;
	    res=res*10+rr;
            x = x/10;
        }
        if(res > INT_MAX || res < INT_MIN)
        {
            return 0;
        }
        return (int)res;
    }
};
int main(void)
{
	int input;
	cin >> input;
	Solution sol;
	cout << sol.reverse(input) << endl;
}
