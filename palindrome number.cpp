#include<stdio.h>
#include<iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0 || (x!=0 && x%10==0)) //�ҥ~���p 
        {
            return false;
        }
        int reverseNum = 0;
        while(x > reverseNum) //�N�Ʀr�����@�b�h�P�_�O�_�j��A�^���>�Ʀr�ɪ�ܤ��ζW�L�@�b 
        {
            reverseNum = reverseNum*10 + x%10;
            x = x/10;
        }
        //(x == reverseNum/10) �Ʀr���_�ƮɧP�_�^�� 
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
