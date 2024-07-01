#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string S;
    cin >> S;

    string *split = new string[S.size()];

    for (int i = 0; i < S.size(); i++)
    {
        split[i] = S.substr(i);
    }

    sort(split, split + S.size());

    for (int i = 0; i < S.size(); i++)
    {
        cout << split[i] << '\n';
    }

    return 0;
}

// 시간 복잡도 O(n^2)