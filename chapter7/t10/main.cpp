#include <iostream>
using namespace std;

double calculate(double v1,double v2,double (*p)(double,double))
{
  return p(v1,v2);
}

double add(double add1 ,double add2)
{
  return (add1+add2);
}
double sub(double v1,double v2)
{
  return (v1-v2);
}
double multiply(double v1,double v2)
{
  return v1*v2;
}
double devide (double v1,double v2)
{
  if(v2!=0){
    return v1/v2;
  }
  cout <<"ERROR Divide ZERO!"<<endl;
  return 0;
}
int main (){
  double x,y;
  x=y=0;
  double (*pf[4])(double,double);
  pf[0]=add;
  pf[1]=sub;
  pf[2]=multiply;
  pf[3]=devide;
  cout<<"Please Input two Double Number:";
  cin>>x;
  cin>>y;
  cout<<x<<" "<<y<<endl;
  for (int i=0;i<4;i++)
    {
      cout<<*pf[i]<<"------>"<<calculate(x,y,pf[i])<<endl;
    }
}

















