//        ****************  Author :  Khan Israk Ahmed  *************************\
//        ****************  Date:    19-08-2023     *************************\


#include <bits/stdc++.h>
using namespace std;
void nativeSearch(string text, string src)
{
    int sizeOfString = text.size();
    int sizeOfPattern = src.size();
    for (int i = 0; i < sizeOfString - sizeOfPattern; i++) // This ensures that the pattern won't go beyond the end of the text.
    {
        int j;

        for (j = 0; j < sizeOfPattern; j++) // For Current Index match
        {
            if (text[i + j] != src[j])
                break;
        }
        if (j == sizeOfPattern)
        {
            cout << "Pattern found" << endl;
        }
        else
            cout << "Pattern Not Found" << endl;
    }
}

int main()
{
    string text = "AABAACAADAABAAABAA";
    string src = "AABA";

    nativeSearch(text, src);
    return 0;
}
