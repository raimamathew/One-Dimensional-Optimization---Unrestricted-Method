#include<iostream.h>
#include<conio.h>
float func(float x_point)
{
return(x_point*(x_point-1.5));
}

void main()
{
 float step_positive = 0.05;
 float step_negative = -0.05;
 float x_point=0;
 float cur_func=0,nex_pointt_func=0;
 cur_func = func(x_point);
 x_point = x_point + step_negative;
 nex_pointt_func = func(x_point);

 if(nex_pointt_func < cur_func)
 {
  while(cur_func > nex_pointt_func)
  {
   cur_func = nex_pointt_func;
   x_point=x_point+step_negative;
   nex_pointt_func = func(x_point);
  }
 }
 else
 {
  x_point=0.0;
  x_point=x_point+step_positive;
  nex_pointt_func = func(x_point);
  while (nex_pointt_func < cur_func)
  {
   cur_func = nex_pointt_func;
   x_point = x_point+step_positive;
   nex_pointt_func = func(x_point);
  }
 }
 cout<<"Optimization point is: "<<x_point;
getch();
 }

