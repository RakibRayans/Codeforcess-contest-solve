#include<iostream>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    bool ok = true;
    if(a.size() != b.size()) {
        cout << "No" << endl;
        return 0;
    }
    else {
            int L = a.size();
        for(int i = 0 ; i < L; i++) {
            if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u') {
                if((b[i] == 'a' || b[i] == 'e' || b[i] == 'i' || b[i] == 'o' || b[i] == 'u'))
                    ok = true;
                else ok = false;
                if(ok == false) {
                    cout << "No" << endl;
                    return 0;
                }
            }
            else {
                if(b[i] == 'a' || b[i] == 'e' || b[i] == 'i' || b[i] == 'o' || b[i] == 'u') {
                   ok = false;
                   cout << "No" << endl;
                   return 0;
                }
                else {
                    ok = true;
                }

            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}
