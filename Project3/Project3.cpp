#include <iostream>
#include <cstring>
#include <string> 
using namespace std;

struct animal {
    char name[10];
    char type[10];
    char sound[10];
    int age;
};


void showAnimal(animal animal) {
    cout << "animal: " << animal.name << ". " << animal.type << "  " << animal.sound << " " << animal.age << endl;
}

void guessAnimalBySound(animal animal[], int size, char* input) {
    for (int i = 0; i < size; i++) {
        if (strstr(animal[i].sound, input) != 0) {
            showAnimal(animal[i]);
        }
    }
}

void  getAnimalYoungerThan(animal animal[], int size, int input) {
    for (int i = 0; i < size; i++) {
        if (animal[i].age < input) {
            showAnimal(animal[i]);
        }
    }
}

int main() {
    setlocale(LC_ALL, "RUS");

    animal animals[3];

    animals[0] = { "Bobik", "dog", "Woof", 15 };
    animals[1] = { "Barsik", "Cat", "Mуow", 10 };
    animals[2] = { "Balu", "bear", "growl", 20 };

    int input;
    
    cout << "Введите возраст животинки: ";
    cin >> input;

    getAnimalYoungerThan(animals, 3, input);

    return 0;
}










/*#include <iostream>
#include <cstring>
#include <string> // Add string header file to use string data type
using namespace std;

struct ActIng {
    int id;
    string RusName; // Update type to string for names
    string EngName;
    string LatName;
};

struct med {
    int id;
    string name; // Update type to string for names
    string medForm;
    double dose;
    string doseUnit; // Update type to string for units
    string product;
    ActIng* ptr;
};

void showMedicine(med medicine) {
    cout << "Medicine: " << medicine.id << ". " << medicine.name << " - " << medicine.ptr->RusName << endl;
}

med* searchMedicineByName(med* meds, int numMeds, string name) {
    for (int i = 0; i < numMeds; i++) {
        if (meds[i].name == name) {
            return &meds[i];
        }
    }
    return nullptr;
}

void findMedByPartName(med medicine[], int size, string input) { // Update type to string for input
    for (int i = 0; i < size; i++) {
        if (medicine[i].name.find(input) != string::npos) { // Use string::find() for partial match
            showMedicine(medicine[i]);
        }
    }
}

void findMedByActive(med medicine[], int size, string input) { // Update type to string for input
    for (int i = 0; i < size; i++) {
        if (medicine[i].ptr->RusName == input || medicine[i].ptr->EngName == input || medicine[i].ptr->LatName == input) {
            showMedicine(medicine[i]);
        }
    }
}

int main() {
    setlocale(LC_ALL, "RUS");
    srand(time(NULL)); // Add initialization of random seed using srand

    ActIng acting[2] = { {1, "Кеторол", "Анальгин", "Аспирин"}, {2, "Ketorolacum", "Metamizolum natrium", "Acidum acetylsalicylicum"} };

    med meds[3] = { {1, "Paracetamol", "form", 250, "mg", "product", &acting[0]},
                    {2, "Water", "form", 0, "ml", "product", &acting[1]},
                    {3, "Tea", "form", 0, "ml", "product", &acting[0]} };

    showMedicine(meds[1]);
    cout << endl;
    showMedicine(meds[2]);
    cout << endl;

    return 0;
}*/

/*#include <iostream>
#include <cstring>
#include <string> 
using namespace std;

struct animal {
    char name[10];
    char type[10];
    char sound[10];
    int age;
};


void showAnimal(animal animal) {
    cout << "animal: " << animal.name << ". " << animal.type << "  " << animal.sound << " " << animal.age << endl;
}

void guessAnimalBySound(animal animal[], int size, char* input) {
    for (int i = 0; i < size; i++) {
        if (strstr(animal[i].sound, input) != 0) {
            showAnimal(animal[i]);
        }
    }
}

void  getAnimalYoungerThan(animal animal[], int size, int input) {
    for (int i = 0; i < size; i++) {
        if (animal[i].age < input) {
            showAnimal(animal[i]);
        }
    }
}

int main() {
    setlocale(LC_ALL, "RUS");

    animal animals[3];

    animals[0] = { "Bobik", "dog", "Woof", 15 };
    animals[1] = { "Barsik", "Cat", "Mуow", 10 };
    animals[2] = { "Balu", "bear", "growl", 20 };

    int input;
    
    cout << "Введите возраст животинки: ";
    cin >> input;

    getAnimalYoungerThan(animals, 3, input);

    return 0;
}*/