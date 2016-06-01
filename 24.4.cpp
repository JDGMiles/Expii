#include <iostream>
using namespace std;

int main()
{
srand (time(NULL));
int n=15000;
int m=15000;
int X[n];
bool done=1;
int count=0;

for (int j=0; j<m; j++){
for (int i=0; i<n; i++){
  done=0;
  while(!done) {
    X[i]=rand()%n;
    if(X[i]!=i){done=1;}
  }
}

for (int i=0; i<n; i++){
  if(X[X[X[i]]]==i){/*cout << i << " " << X[i] << " " << X[X[i]] << "\n";*/ i=n; count++;}
}
}

cout << count << " out of " << m <<" = " << 100*float(count)/m <<"%.";

/*
for (int i=0; i<n; i++){
  cout << i << ": " << X[i] << "\n";
}
*/

return 0;
}
