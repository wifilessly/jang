 #include<stdio.h>
 // #define PI 3.14159265
 int main(){
    int radius=5;
    const double PI=3.14;
    double cir=2*radius*PI;
    PI=3.141592;
    printf("r:%d,circumference:%1f\n",radius,cir);
    return 0;
}