#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string init;
    cin >> init;
    int N = init.size();

    list<char> li;
    list<char>::iterator iter = li.end();

    for (int i = 0; i < N; i++)
    {
        li.push_back(init.at(i));
    }


    int M;
    cin >> M;

    for (int i = 0; i < M; i++)
    {
        char com;
        cin >> com;
        if (com == 'L')
        {
            if (iter != li.begin())
            {
                iter--;
            }
        }
        else if (com == 'D')
        {
            if (iter != li.end())
            {
                iter++;
            }
        }
        else if (com == 'B')
        {
            if (iter != li.begin())
            {
                iter--;
                iter = li.erase(iter);
            }
        }
        else if (com == 'P')
        {
            char op;
            cin >> op;
            li.insert(iter, op);
        }
    }

    while (!li.empty())
    {
        char temp = li.front();
        li.pop_front();
        cout << temp;
    }
    cout << '\n';

    return 0;
}