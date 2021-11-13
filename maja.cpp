#include <iostream>
#include <vector>

class Maja {

    std::string materials;
    std::string krasa;
    int izmers; // 0 - mazs, 1 - videjs, 2 - liels
    int stavuskaits; 
    float cena;
    bool majastips; // 0 - daudzdzivoklu, 1 - privatmaja
    int stavoklis; // 0 - tikko sakusies celtnieciba, 1 - buvnieciba notiek, 2 - buvets, 3 - nepieciesams remonts

public:
    Maja(std::string materials, std::string krasa, int izmers, 
        int stavuskaits, float cena, bool majatips, int stavoklis) {

        this->materials = materials;
        this->krasa = krasa;
        this->izmers = izmers;
        this->stavuskaits = stavuskaits;
        this->cena = cena;
        this->majastips = majastips;
        this->stavoklis = stavoklis;
    }

    void state() {

        if (this->stavoklis == 0) {
            std::cout << this->krasa << " maja no " << this->materials << "- tikko sakusies celtnieciba" << std::endl;
        }
        else if (this->stavoklis == 1) {
            std::cout << this->krasa << " maja no " << this->materials << "- buvnieciba notiek" << std::endl;
        }
        else if (this->stavoklis == 2) {
            std::cout << this->krasa << " maja no " << this->materials << "- buvets" << std::endl;
        }
        else {
            std::cout << this->krasa << " maja no " << this->materials << "- nepieciesams remonts" << std::endl;
        }

    }

};

int main()
{
    Maja maja1("kiegela", "sarkana", 2, 5, 1200000, true, 1);

    maja1.state();

    Maja maja2("akmens", "dzeltens", 0, 2, 400000, false, 3);

    maja2.state();

    return 0;
}
