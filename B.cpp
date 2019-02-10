#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque <int> q;
    int n , k , m;
    cin >> n >> k >> m;
    for(int i = 0 ; i < n ; i++) {
        int x;
        cin >> x;
        q.push_back(x);
    }
    sort(q.begin() , q.end());

    while(q.size()>1 && m>0)
    {
        q.pop_front();
        m--;
    }
    if(m>k)
    {
        printf("%.8f\n",1.0*(k+q.front()));
    }
    else
        printf("%.8f\n",1.0*(m+q.front()));
    return 0;
}
