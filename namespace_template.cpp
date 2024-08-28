#include<bits/stdc++.h>
using namespace std;
namespace my_space
{
    template <typename T> class myvector
    {
        T* a;
        int element=0;
        public:
        myvector(string ans)
        {
            this->a = (T*)malloc(sizeof(T)*sizeof(ans));
            for(int i=0; i<ans.size(); i++)
            {
                this->a[i] = ans[i];
            }
            this->element = ans.size();
        }
        myvector(int si)
        {
            this->a = (T*)malloc(sizeof(T)*(si));
            this->element = si;
        }
        myvector(vector<T> a) 
        {
            this->a = (T*)malloc(sizeof(T)*sizeof(a));
            for(int i=0; i<a.size(); i++)
            {
                this->a[i]=a[i];
            }
            this->element=a.size();
        }
        myvector operator+(myvector &a1)
        {
            int m = a1.mysizeof();
            int si = m+this->element;
            myvector<T> temp(si);
            for(int i=0; i<this->element; i++)
            {
                temp.a[i] = this->a[i];
            }
            int j=0;
            for(int i=this->element; i<temp.mysizeof(); i++)
            {
                temp.a[i] = a1.a[j];
                j++;
            }
            return temp;
        }
        void print_s();
        void print_a();
        int mysizeof();
        ~myvector()
        {
            delete this->a;
        }
    };
}
template <typename T > void my_space::myvector<T>:: print_s()
{
    int n1 = myvector<T>::element;
    for(int i=0; i<n1; i++)
    {
        cout<<a[i];
    }
    cout<<endl;
} 
template <typename T> void my_space::myvector<T>:: print_a()
{
    int n1 = myvector<T>::element;
    for(int i=0; i<n1; i++)
    {
        cout<<a[i]<<",";
    }
    cout<<endl;
}
template <typename T> int my_space::myvector<T>:: mysizeof()
{
    return myvector<T>::element;
}
int main()
{
    vector<int> data_int1 = {1,2,3,3,4,5,6};
    vector<int> data_int2 {3,4,2,2,2,4,2,4,12};
    string a = "aryan ";
    string b = "gupta";
    vector<char> data1 = {'1','a','b','4','5','6'};
    my_space::myvector<char> p_c = my_space::myvector<char>(data1);
    my_space::myvector<char> p1_c = my_space::myvector<char>(data1);
    my_space::myvector<char> p2_c = p_c+p1_c;
    p2_c.print_s();
    cout<<p2_c.mysizeof()<<endl;
    my_space::myvector<char> p_i = my_space::myvector<char>(a);
    my_space::myvector<char> p1_i = my_space::myvector<char>(b);
    my_space::myvector<char> p2_i = p_i+p1_i;
    p2_i.print_s();
    cout<<p2_i.mysizeof()<<endl;
    my_space::myvector<int> p = my_space::myvector<int>(data_int1);
    my_space::myvector<int> p1 = my_space::myvector<int>(data_int2);
    my_space::myvector<int> p2 = p+p1;
    p2.print_a();
    cout<<p2.mysizeof()<<endl;
}