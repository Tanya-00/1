#include <iostream>
#include <string>
using namespace std;
enum GENDER {
    U , M, F
};

// 1. Создать несколько Human.
// 2. Добавить несколько дополнительных полей (не забывать добавить значимые поля в конструктор)
// 3. Добавить getter'ы и setter'ы
// 4. Продемонстрировать обращение к полям объектов дочерних и родительских классов
// 5. Добавить несколько наследников от различных родителей (сделать дерево из 5 классов)

class Human {
    int age;
    string fio;
    GENDER gender;
public:
    Human(int age, GENDER gender, string fio) {
      this->  gender = gender;
      this-> fio = fio ;
      this-> age = age;
    }

    int getAge() const {
        return age;
    }

    void setAge(int age) {
        this->age = age;
    }

    GENDER getGender() const {
        return gender;
    }

    void setGender(GENDER gender) {
        this->gender = gender;
    }

    string getFio() const {
        return fio;
    }

    void setFio(string fio) {
        this->fio = fio;
    }
};

class BloodDonor : public Human {
    int amountOfBlood;
public:
    BloodDonor(int age, GENDER gender, string fio, int amountOfBlood) : Human(age, gender,fio) {
        this->amountOfBlood = amountOfBlood;
    }

     int getAmountOfBlood()  {
        return amountOfBlood;
    }

    void setAmountOfBlood(int amountOfBlood) {
        this->amountOfBlood = amountOfBlood;
    }
};

class Donor: public BloodDonor {

};

class Blood: public Donor {

};

class Re: public Blood {

};

class ill: public Human {

};

int main() {
    Human adam(24, GENDER::M,"fg");
    Human tanya(19,GENDER::F,"DFGS" );
    BloodDonor helga(25, GENDER::F, "ADA", 1 );

    cout << tanya.getAge() << endl;
    cout << adam.getFio() << endl;

    cout << helga.getAge() << endl;
    cout << helga.getGender() << endl;
    cout << helga.getAmountOfBlood() << endl;

    return 0;
}
