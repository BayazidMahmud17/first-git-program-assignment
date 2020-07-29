#include<iostream>
using namespace std;

class Max
{
    public:
    int r;
    Max(int m, int n)
    {
       logic(m,n);
    }
    private:
    void logic(int x,int y)
    {
      r=(x>y)?x:y;
    }
    
};

int main()
{
    int a,b,l;
    cout<<"Enter two integer:\n";
    cin>>a>>b;
    Max M(a,b);
    l=M.r;
    cout<<"\nLarge number is "<<l;
return 0;
}