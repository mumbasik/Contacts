

#include <iostream>
using namespace std;
class Contacts {
    char* fi;
    int workphone;
    int homephone;
    int phone;
    char* info;

public:
    Contacts() {
        fi = nullptr;
        workphone = 0;
        homephone = 0;
        phone = 0;
        info = nullptr;
    }
    Contacts(const char* name, int work, int home, int phone, const char* inf) {
        fi = new char[strlen(name) + 1];
        strcpy_s(fi, strlen(name) + 1, name);
        workphone = work;
        homephone = home;
        this->phone = phone;
        info = new char[strlen(inf) + 1];
        strcpy_s(info, strlen(inf) + 1, inf);
    }
    void Check() {
        if (fi != nullptr) {
            delete[] fi;
        }
    }
    void Cheak() {
        if (info != nullptr) {
            delete[] info;
        }
    }
    void Cout() {
        if (fi == nullptr && info == nullptr) {
            cout << "Nothing" << endl;
            return;
        }
        cout << "Fio: " << fi << "\n";
        cout << "Workphone: " << workphone << "\n";
        cout << "Homephone: " << homephone << "\n";
        cout << "Contact phone: " << phone << "\n";
        cout << "Information: " << info << "\n";
    }
    
    ~Contacts() {
        
    }
    
};
void Print(Contacts* fio) {
    for (int i = 0; i < 3; i++) {
        fio[i].Cout();
    }
}

void main()
{
    Contacts* fio = new  Contacts[3];
    fio[0] = Contacts("Ivanov, Ivan, Ivanovich ", 654646456 , 232312342, 34897789, "Graphic designer for 10 years");
    fio[1] = Contacts("Pertov, Anatoly, Sergeevich ", 658465409, 43278974, 342423, "Engineer in Microsoft");
    fio[2] = Contacts("Lyakhovetskyi, Leonid, Leonidovich ", 34243243, 9650806, 214124, "Best mentor in computer academy IT-STEP");
    Print(fio);
    delete[] fio;

    
}


