#include<stdio.h>
#include<iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0 || (x!=0 && x%10==0)) //ㄒ猵 
        {
            return false;
        }
        int reverseNum = 0;
        while(x > reverseNum) //盢计ちΘ耞琌癹ゅゅ计>计ボち澄禬筁 
        {
            reverseNum = reverseNum*10 + x%10;
            x = x/10;
        }
        //(x == reverseNum/10) 计计耞ゅ 
        return (x == reverseNum) || (x == reverseNum/10);
    }
};

int main(void)
{
	int input;
	cin >> input;
	Solution sol;
	cout << sol.isPalindrome(input) << endl;
}
