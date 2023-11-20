#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;
int main()
{
    map<string, int> names;
    vector<string> str, res;
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        string tmp;
        cin >> tmp;
        str.push_back(tmp);
        names.insert({tmp, i});
    }
    for (int i = 0; i < m; i++)
    {
        string tmp;
        cin >> tmp;
        if (tmp[0] >= 'A' && tmp[0] <= 'Z') // 포켓몬 입력 이름
        {
            res.push_back(to_string(names[tmp]));
        }
        else // 포켓몬 번호
        {
            res.push_back(str[stoi(tmp) - 1]);
        }
    }
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << '\n';
    }
}