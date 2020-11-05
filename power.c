# include "myMath.h"
# define e  2.718281828

double Power(double x , int y){
    double z = 1;
    int i;
    for(i =0; i< y ; i++){
        z*=x;
    }
    return z; 
}

double Exponent(int x){
    return power(e,x);
}

