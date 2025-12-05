#include <iostream>
using namespace std;
long long int TempSoln(int n) {
    int s=0;
     int e =n;
    long long int mid =s+ (e-s)/2;
    long long int ans=-1;
    while (s<=e) {
        long long int sq= mid*mid;
        if (sq==n) 
            return mid;
      if (sq<n) {
        ans =mid;
        s = mid +1 ;
      } 
      else {
        e =mid-1;
      }
     mid =s + (e-s)/2; 
    }
    return ans;
}

double PreciseSoln(int n,int tempsoln,int precision) {
    double factor =1;
    double ans =tempsoln;
    for (int i=0;i<precision;i++) {
      factor = factor/10;
      for (double j=tempsoln;j*j<=n;j=j+factor) {
        ans =j ;

      }
    }
    return ans ;
}
int main () {
    int n;
    cout << "Enter the Number" << endl;
    cin >> n;

    int tempsoln=TempSoln(n);
    cout<< "Answer is " << PreciseSoln(n,tempsoln,3) ;
    return 0;
}