#include <iostream>
using namespace std;

int main(){

 int t1,t2,t3;
 int p,s,t;
cin >> t1 >> t2 >> t3;

if (t1 <= t2 && t1 <= t3){
     p = 1;
    if (t2 <= t3){
      s = 2;
      t = 3;
   }else{
     s = 3;
     t = 2;
   }
}else if (t2 <= t1 && t2 <= t3){
    p = 2;
    if (t1 <= t3){
     s =1;
     t=3;
   }else{
    s = 3;
    t =1;
   }
}else{
    p = 3;
    if (t1 <= t2){
        s = 1;
        t = 2;
    }else{
        s = 2;
        t = 1;
    }
    
}
cout << p << endl;
cout << s << endl;
cout << t << endl;
 
    return 0;
}