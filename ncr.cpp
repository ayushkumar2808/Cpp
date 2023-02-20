  #include <iostream>
  using namespace std;

  int factorial(int a){
    
    int sum=1;;
    for(int i=1;i<=a;i++){
    sum*=i;

    }
    return sum;
  }

  int main(){
    int n,r;
    cin>>n>>r;
    int num= factorial(n);
    int den= factorial(r)*factorial(n-r);
    cout<<num/den;

  }