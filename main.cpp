#include <iostream>
class Halmazok {
    public:
        double szam{};
    bool R = false; // valos szamok
    bool Q = false; // racionalis szamok
    bool Z = false; // egesz szamok
    bool N = false; // termeszetes szamok

    std::string Megoldas() {
        std::string  result;
        if (R) result += "valos, ";
        if (Q) result += "racionalis, ";
        if (Z) result += "egesz, ";
        if (N) result += "termeszetes, ";
        result = result.substr(0, result.size()-2);
        result += " szam halmazba tartozik: "+ std::to_string(szam);
        return result;
    }
};

bool egeszSzam(double szam) {
    return (szam - static_cast<int>(szam)) == 0.0;
}

bool pozitivSzam (double szam) {
    return szam > 0;
}
std::string szamhalmazAzonosito(Halmazok x){
    x.R = true;
    x.Q = true;
    if (egeszSzam(x.szam)){
        x.Z = true;
    }
    if (pozitivSzam(x.szam) and x.Z){
        x.N = true;
    }
    return x.Megoldas();
}

int main() {
    Halmazok x;
    x.szam=-1.6;
    std::cout << szamhalmazAzonosito(x);
    return 0;
}
