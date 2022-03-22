#include <iostream>
#include <cmath>

int main (void) {
  double result = 0;
  int lim_inf = 10;
  int lim_sup = 100;
  for(int i = lim_inf; i<=lim_sup; i++){
    if(i%2 != 0){
      result = result + 1.0/i;
    }
  }
  std::cout<<result<<"\n";
}
