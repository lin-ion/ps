#include <algorithm>
#include <iostream>
#include <ranges>
#include <string>
#include <vector>

using namespace std;

int solve(vector<string> words)
{
    int cnt = 0;
    for (auto&& word : words)
    {
        bool group_word = true;
        vector<string::value_type> m{};
        m.push_back(word.at(0));
        for (auto&& c : word | views::drop(1))
        {
            if (m.back() == c)
            {
                continue;
            }
            else
            {
                if (ranges::contains(m, c))
                {
                    group_word = false;
                    break;
                }
                else
                {
                    m.push_back(c);
                }
            }
        }

        if (group_word)
        {
            cnt += 1;
        }
    }

    return cnt;
}

int main()
{
    size_t N;
    cin >> N;

    vector<string> words(N);

    for (auto&& word : words)
    {
        cin >> word;
    }

    cout << solve(words) << '\n';

    return 0;
}
