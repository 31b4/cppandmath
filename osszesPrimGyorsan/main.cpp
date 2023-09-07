#include <iostream>

int main() {
    std::cout <<"\t \t All Prime Number: \n";
    std::cout<<"2 ";//kiirjuk hogy lehessen 3-tol kettesével haladni
    int num = 3;
    int i = 3;
    bool prime = true;
    while (true) {
        while (prime) {
            if (num % i == 0 && i <= num / 2) {
                prime = false;
            }
            else if (i > num/2) {//szam felenel nagyobb oszto nincs
                std::cout<<num<<" ";
                prime = false;
            }
            i+=2;//csak paratlan szamokat nezunk szoval kettesével haladhatunk
        }
        i = 2;
        num+=2;//csak paratlan primszamok vannak szoval 3-tol kettesével haladhatunk
        prime = true;
    }    return 0;
}
