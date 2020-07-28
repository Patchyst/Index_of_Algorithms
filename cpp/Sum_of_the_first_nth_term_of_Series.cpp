#include <math.h>
using namespace std;

string seriesSum(int n){
  
  float counter = 1;
  float x = 1;

  switch(n){
      case 0:
        return "0.00";
      default:
          for (int i = 0; i < n-1; i++){
            counter += 3.00;
            x += (1/counter);
            cout << x << endl;            
      }
      
      x = (int)(x*100+0.5);
      x = (float)x/100;
      
      return to_string(x);
  }
}
