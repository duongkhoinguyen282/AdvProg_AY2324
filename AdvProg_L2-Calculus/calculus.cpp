#include <iostream>
#include <string>
#include <cmath>

using std::string;
using std::cout;
using std::endl;
using std::stod;


double factorial(int x){
    if(x <= 1) return 1;
    return x*factorial(x-1);
}

/***
    Args:
        x (double): a number
    Returns:
        double: cosine of x
***/
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

/***
    Args:
        x (double): a number
    Returns:
        double: sine of x
***/
double mySin(double x)
{
    while(x >= 2*M_PI) x -= 2*M_PI;
    while(x < -2*M_PI) x += 2*M_PI;
    double ans = 0;

    int i = 1;
    while(i<=100){
        ans += pow(-1,i/2)*(pow(x,i)/factorial(i));
        i+=2;
    }
    return ans;
}


/***
    Args:
        x (double): a number
    Returns:
        double: square root of x
***/
double mySqrt(double x) {
    if (x < 0) {
        cout << "Invalid argument" << endl;
        exit(1);
    }
    double n = x;

    while(n >= 100) n/=10;

    double ans = 0, result = 0;

    do{
        ans = result;
        n = 0.5*(n+x/n);
        result = n;
    }while(abs(result - ans) > 0.001);
    
    return ans;

    // return pow(x,1/2);
}
