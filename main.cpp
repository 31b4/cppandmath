#include <iostream>

void masodfokuMegoldoKeplet(double a,double b,double c) {
    double diszkriminans = b * b - 4 * a * c;
    if(diszkriminans < 0){ // nincs megoldas
        std::cout<<"nincs megoldas";
    }
    else if(diszkriminans == 0){ // 1 megoldas
        std::cout<<"x= " << -b/(2*a);
    }
    else{ // 2 megoldas
        double x1 = (-b + sqrt(diszkriminans)) / (2 * a);
        double x2 = (-b - sqrt(diszkriminans)) / (2 * a);
        std::cout<<"x1= " << x1;
        std::cout<<"\nx2= " << x2;
    }
}

int main() {
    masodfokuMegoldoKeplet(2, -6, 1);
    return 0;
}