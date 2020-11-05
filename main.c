# include <stdio.h>
# include "myMath.h"
double func1(double x);
double func2(double x);
double func3(double x);
int main(int argc, char const *argv[])
{
    double x ;
    printf("Please insert a real number:  \n");
    scanf("%lf",&x);
    double temp = func1(x);
    printf("The value of f(x) = e^x + x^3 -2 at the point %0.4f is : %0.4f\n",x,temp);
    temp = func2(x);
    printf("The value of f(x) = 3*x + 2x^2 at the point %0.4f is : %0.4f\n",x,temp);
    temp = func3(x);
    printf("The value of f(x) = (4*x^3)/5 -2*x at the point %0.4f is : %0.4f\n",x,temp);
    return 0;
}
double func1(double x){
    int y = x;
    double z , temp;
    z = Exponent(y);
    temp =  Power(x,3);
    z = add(z,temp);
    z = sub(z,2);
    return z;
}
double func2(double x){
    double z ,temp;
    z = mul(x,3);
    temp = Power(x,2);
    temp = mul(temp,2);
    z  = add(z,temp);
    return z;
}
double func3(double x){
    double z ,temp;
    z = Power(x,3);
    z = mul(z,4);
    z = div(z,5);
    temp = mul(x,2);
    z = sub(z,temp);
    return z;
}