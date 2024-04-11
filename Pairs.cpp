#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'pairs' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. INTEGER_ARRAY arr
 */

int pairs(int k, vector<int> arr)
{
    std::set<int> s;
    int count = 0;

    for (const auto& n : arr)
    {
        s.insert(n);
        
        if (s.find(n + k) != s.end()) count++;
        if (s.find(n - k) != s.end()) count++;
    }

    return count;
}
