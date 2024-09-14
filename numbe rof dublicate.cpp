#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
   vector<int>a={1,2,3,1,1,2};
     cout<<a.size()<<endl;
  sort(a.begin(), a.end());
    vector<int> i;
    int p=0;
    while (p < a.size())
    {
        int count = 1;
        for (int j = p + 1; j <a.size(); j++)
        {
            if (a[p] == a[j]){
                count++;
            }
        }
        i.push_back(count);
        p = p + count;
    }
    sort(i.begin(), i.end());
    for (int k = 0; k < i.size(); k++)
    {
        if (i[k] == i[k + 1]){
            cout << "flase" << endl;
            return 0;
        }
    }
    cout << "true" << endl;
    return 0;
}