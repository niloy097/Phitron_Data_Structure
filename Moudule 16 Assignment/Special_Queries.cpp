#include<bits/stdc++.h>
using namespace std;
int main()

{

    int q;
    cin >> q;
    queue<string> line;
    while(q--)
    {
        int n;
        cin >> n;
        getchar();
        if(n == 0)
        {
            string name;
            cin >> name;
            line.push(name);
        }
        else
        {
            if(line.empty()) cout << "Invalid" << endl;
            else
            {
                cout << line.front() << endl;
                line.pop();
            }
        }
    }

    return 0;
}