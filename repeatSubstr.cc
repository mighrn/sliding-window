#pragma once

#include <vector>
#include <unordered_set>
#include <string>

using namespace std;

vector<string> repeats(string const & s, int const & k)
{
    unordered_set<string> hashTable;
    vector<string> results;

    for (int i = 0; i < s.size() - k; i++)
    {
        string const sub = s.substr(i, k);

        if (hashTable.find(sub) == hashTable.end())
        {
            //substr not in hashtable yet, so insert it
            hashTable.insert(sub);
        }
        else
        {
            //substr previously found, add it to the results
            results.push_back(sub);
        }
    }

    return results;
}
