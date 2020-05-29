#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> a{1,2,3,4,5};
    a.push_back(16); //inserts an element
    a.pop_back(); //deletes an element
    a.pop_back();
    a.insert(a.begin()+2,34); //inserts at a particular position
    a.insert(a.begin()+3,4,23); //inserts a value at a particuar position for 4 times.
    a.erase(a.begin()+1);
    a.push_back(88);
    cout<<a.size()<<endl;
    cout<<a.capacity()<<endl;
    cout<<a.front()<<endl;
    cout<<a.back()<<endl;
    a.resize(21);
    cout<<a.capacity()<<endl;
    
    
    
    
    
    for(int x:a)
    {
        cout<<x<<" ";
    }
    
}
