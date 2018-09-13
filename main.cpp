#include <iostream>

using namespace std;
int gcd(int x,int y)
  { //using;
//x          y
//135         20       %(135 / 20) = 15
// 15         20       %(20 / 15) = 5
// 15          5       %(15 / 5) = 0
 // 0          5       GCD = 5   )
  int z =1;
  int t;
  if(x>y)
    {
        do{
             z = (x%y);
             t = y;
            x=y;
            y=z;
        } while(z>0);
      return t;

    }
  else

        do{
             z = (y%x);
             t = x;
            y=x;
            x=z;
        } while(z>0);
      return t;
  }
int main()
{ int x,y;
cout<<"Enter First Number";
   cin >> x;
   cout<<"Enter Second Number";
   cin >> y;
   int r = gcd(x,y);

    cout <<"The GCD is :" << r;
}
