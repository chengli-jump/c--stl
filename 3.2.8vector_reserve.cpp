#include <iostream>
using namespace std;

#include <vector>

void test01()
{
    vector<int> v;

    //预留空间
    v.reserve(1000);
    int num = 0;
    int *p = NULL;
    for (int i=0; i<1000; i++)
    {
        v.push_back(i);
        if(p != &v[0])
        {
            p = &v[0];
            num++;
        }
    }
    cout <<"num: " << num << endl;
}
int main()
{
    test01();
    system("pause");
}