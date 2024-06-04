#include<bits/stdc++.h>

using namespace std;

double factorial(int x){
    if(x <= 1) return 1;
    return x*factorial(x-1);
}

double myCos(double x) 
{
    if(x < 0) x = abs(x);
    while(x >= 2*M_PI) x -= 2*M_PI;
    double ans = 1.0f;

    int i = 2;
    while(i<=100){
        ans += pow(-1,i/2)*(pow(x,i)/factorial(i));
        i+=2;
    }
    return ans;
}

int main(){

    cout<<myCos(-1*M_PI/3) - cos(M_PI/3);


    return 0;
}