#include <iostream>

using namespace std;

    bool isPalindrome(int x) 
    {
        if(x < 0) return false;// отрицательные значения не могут быть палиндромом.
        else if(x < 10) return true; // 0 <= x <= 9 это палиндром
                else
                    {
                        long long int resverse = 0;
                        int temp = x;
                        while (x != 0) // переворачиваем число и записываем в long long int потому что оно может быть больге контейнера int = 2147483647
                            {
                                resverse = (resverse * 10) + (x % 10);
                                x /= 10;
                            };
                        return !(resverse - temp); // если число палиндом то оно самовычтется со своим перевернутым "отражением" и результатом разницы будет ноль
                    };
    };

int main()
{
    int a;
    cin>>a;
    cout<<a<<((isPalindrome(a))? " is palindrome" : " is NOT palindrome");

    return 0;
}
