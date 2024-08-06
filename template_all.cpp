#include<bits/stdc++.h>
using namespace std;
template <typename T> class my_string
{
    vector<T> str;
    public:
    my_string()
    {}
    my_string(vector<char> s)
    {
        this->str = s;
    }
    my_string(string s)
    {
        for(int i=0; i<s.size(); i++)
        {
            this->str.push_back(s[i]);
        }
    }
    my_string operator+(my_string s)
    {
        my_string res;
        for(int i=0; i<this->str.size(); i++)
        {
            res.str.push_back(this->str[i]);
        }
        for(int i=0; i<s.str.size(); i++)
        {
            res.str.push_back(s.str[i]);
        }
        return res;
    }
    my_string operator=(my_string s)
    {
        this->str = s.str;
        s.str = "";
        return *this;
    }
    ~my_string()
    {
        while(str.size()!=0)
        {
            this->str.pop_back();
        }
    }
    string op1()
    {
        string s="";
        for(int i=0; i<this->str.size(); i++)
        {
            s = s + this->str[i];
        }
        return s;
    }
    friend ostream& operator<<(ostream& out, my_string &s);
    friend istream& operator>>(istream& in, my_string &s);
};
ostream& operator<<(ostream& out, my_string<char> &s)
{
    for(int i=0; i<s.str.size(); i++)
    {
        out<<s.str[i];
    }
    return out;
}
istream& operator>>(istream& in, my_string<char> &s)
{
    int t;
    cout<<"Enter the alphabets"<<endl;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        s.str.push_back(' ');
        in>>s.str[i];
    }
    return in;
}
int main()
{
    my_string<char> s1("aryan is here");
    my_string<char> d;
    d  = move(s1);
    my_string<char> s2("here is aryan");
    my_string<char> d2 = s1+s2;
    cout<<d2<<endl;
    my_string<char> d3;
    cin>>d3;
    cout<<d3<<endl;
}