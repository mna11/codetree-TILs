#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

bool Pred(const string& str1, const string& str2)
{
    return str1.size() > str2.size();
}


int main() {
    int N(0);
    cin >> N;
    vector<string> vec(N);
    for (int i = 0; i < vec.size(); ++i)
        cin >> vec[i];


    int max_sum(-1);
    int sum(0);
    for (int i = 0; i < vec.size(); ++i)
    {
        for (int j = i + 1; j < vec.size(); ++j)
        {
            for (int k = j + 1; k < vec.size(); ++k)
            {
                vector<string> sSelect = { vec[i], vec[j], vec[k] };
                sort(sSelect.begin(), sSelect.end(), Pred);
                bool bTarget = (sSelect.size() >= 3
                    && sSelect[0].compare("7311") == 0
                    && sSelect[1].compare("522") == 0
                    && sSelect[2].compare("6") == 0);
                sum = 0;
                bool bOk(true);
                for (int l = 1; l <= sSelect[0].size(); ++l)
                {
                    int digit_sum(0);
                    for (int idx = 0; idx < 3; ++idx)
                    {
                        if (l > sSelect[idx].size()) continue;
                        digit_sum += sSelect[idx][sSelect[idx].size() - l] - '0';
                    }
                    if (digit_sum >= 10) {
                        bOk = false;
                        break;
                    }
                }
                if (bOk) {
                    sum = stoi(vec[i]) + stoi(vec[j]) + stoi(vec[k]);
                    max_sum = max(max_sum, sum);
                }
            }
        }
    }
    cout << max_sum << flush;
    return 0;
}