#include <iostream>
using namespace std;

int main()
{
srand (time(NULL));
int n=100;
int X[n];
bool done=1;

for (int i=0; i<n; i++){
  done=0;
  while(!done) {
    X[i]=rand()%n;
    if(X[i]!=i){done=1;}
  }
}

for (int i=0; i<n; i++){
  if(X[X[X[i]]]==i){cout << i << " " << X[i] << " " << X[X[i]] << "\n";}
}

/*
for (int i=0; i<n; i++){
  cout << i << ": " << X[i] << "\n";
}
*/

return 0;
}
