// 6200000000000005

#include <iostream>
#include <string>

using namespace std;

string GetCreditCardNumber()
{
    string credit_card_no;
    cout << "Enter your credit card number : ";
    cin >> credit_card_no;
    return credit_card_no;
}

int AddEvenIndexedNumbers(string credit_card_no)
{
    int k = 0;
    for (int i = credit_card_no.length() - 2; i >= 0; i -= 2)
    {
        char num = credit_card_no[i];
        int a = num - '0';
        int twice_a = 2 * a;
        string str = to_string(twice_a);
        if (str.length() == 2)
        {
            char first = str[0];
            char second = str[1];
            int num_first = first - '0';
            int num_second = second - '0';
            twice_a = num_first + num_second;
        }
        k = k + twice_a;
    }
    return k;
}

int AddOddIndexedNumbers(string credit_card_no)
{
    int k = 0;
    for (int i = credit_card_no.length() - 1; i >= 0; i -= 2)
    {
        char a = credit_card_no[i];
        int num = a - '0';
        k = k + num;
    }
    return k;
}

int main()
{
    string credit_card_no = GetCreditCardNumber();
    int add = AddEvenIndexedNumbers(credit_card_no) + AddOddIndexedNumbers(credit_card_no);

    if (add % 10 == 0)
    {
        cout << "Your Credit Card number is valid" << endl;
    }
    else
    {
        cout << "Your Credit Card number is invalid" << endl;
    }
    return 0;
}