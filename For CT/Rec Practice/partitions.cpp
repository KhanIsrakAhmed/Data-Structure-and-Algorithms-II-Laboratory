#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(string str, int left, int right)
{
    if (left >= right)
        return true;
    else
    {
        if (str[left] == str[right])
        {
            bool friend_ = isPalindrome(str, left + 1, right - 1);
            return friend_;
        }
        else
            return false;
    }
}

void findAllPalindromicPartitions(string str, int start, vector<string> &current, vector<vector<string>> &result)
{
    if (start == str.length())
    {
        result.push_back(current);
        return;
    }

    for (int end = start; end < str.length(); end++)
    {
        if (isPalindrome(str, start, end))
        {
            string palindrome = str.substr(start, end - start + 1);
            current.push_back(palindrome);
            findAllPalindromicPartitions(str, end + 1, current, result);
            current.pop_back();
        }
    }
}

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;

    vector<vector<string>> palindromicPartitions;
    vector<string> current;

    findAllPalindromicPartitions(str, 0, current, palindromicPartitions);

    cout << "All possible palindromic partitions of the given string are:" << endl;
    for (int i = 0; i < palindromicPartitions.size(); i++)
    {
        for (int j = 0; j < palindromicPartitions[i].size(); j++)
        {
            cout << palindromicPartitions[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
