#include<iostream>
#include<cmath>
using namespace std;
int adiff(int A,int B)
{
  int C,i=0;
  while (i == 0)
  {
    if(A>360)
    {
      A -= 360;
    }
    else
    {
      i++;
    }
  }
  i=0;

  while (i == 0)
  {
    if(B>=360)
    {
      B -= 360;
    }
    else
    {
      i++;
    }
    
  }
  x=A-B;
  y=(360-B)+A;
  if(x<0)
  {
    x=x*x-1;
  }
  if(y<0)
  {
    y=y*-1;
  }
  if(x <= y)
  {
    return x;
  }
  else
  {
    return y;
  }
}

int main(){
  cout << adiff(180,270) << endl;
  cout << adiff(210,45) << endl;
  cout << adiff(0,360) << endl;
  cout << adiff(10,350) << endl;
  cout << adiff(95,260) << endl;
  cout << adiff(90,-90) << endl;
  cout << adiff(1000,280) << endl;
  cout << adiff(60,244) << endl;
}
