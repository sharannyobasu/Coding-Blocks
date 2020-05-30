#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;
class car{
    public:
    int x;
    string car_name;
    car(string name,int x)
    {
        car_name=name;
        this->x=x;  
    }
    int value()
    {
        return x;
    }
};
bool compare(car a,car b)
{
    int da=a.value();
    int db=b.value();
    if(da==db)
    {
        return a.car_name<b.car_name;
    }
    return da>db;
}
int main()
{
    int val;
    cin>>val;
    int n;
    cin>>n;
    vector<car> v;
    for(int i=0;i<n;i++)
    {
        int x;
        string name;
        cin>>name>>x;
        car temp(name,x);
        if(x>=val)
        {
            v.push_back(temp);
        }    
    }
    
    sort(v.begin(),v.end(),compare);

    for(auto c:v)
    {
        cout<<c.car_name<<" "<<c.x<<endl;
    }
}
