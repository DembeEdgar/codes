#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int input=0;
  cin>>input;
  for(int i=0;i<input;i++)
{
    for(int j=0;j<input;j++)
    {
        if(j==input-1 || i==input-1|| i+j==input-1)
        {
          cout<<"* ";
        }
        else
        {
            cout<<"  ";
        }

    }
cout<<endl;
}

    return 0;
}
