#include <iostream>

int main() {
    std::cout <<"\t \t All Prime Number: \n";
    int num = 2;
    int i = 2;
    bool prime = true;
    while (true) {
        while (prime) {
            if (num % i == 0 && i <= num / 2) {
                prime = false;
            }
            else if (i > num/2) {
                std::cout<<num<<" ";
                prime = false;
            }
            i++;
        }
        i = 2;
        num++;
        prime = true;
    }    return 0;
}
