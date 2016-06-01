#include <iostream>
using namespace std;

int main()
{
int n=100;
int X[n];
bool bad=1;

for (int i=0; i<n; i++){
  bad=1;
  while(bad) {
    X[i]=rand()%n;
    if(X[i]!=i){bad=0;}
  }
}

for (int i=0; i<n; i++){
  cout << i << ": " << X[i] << "\n";
}

return 0;
}
