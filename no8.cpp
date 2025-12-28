#include <iostream>
using namespace std;

const int MAKS = 13;


void inputTim(string tim[]){
    system("cls");
    cout << "===== Input Nama Tim =====\n\n";
    
    cin.ignore(); 
    
    for(int i = 0; i < MAKS; i++){
        cout << "Tim ke-" << (i+1) << ": ";
        getline(cin, tim[i]); // membaca nama tim lebih dari 1 kata
    }
}

void tampilTim(string tim[]){
    system("cls");
    cout << "===== Daftar Tim Peserta =====\n\n";
    
    int i = 0;
    while(i < MAKS){
        cout << (i+1) << ". " << tim[i] << endl;
        i++;
    }
    cout << endl;
    system("pause");
}

int main(){
    int pilih;
    string tim[MAKS];
    
    do{
        system("cls");
        cout << "===== MENU DATA TIM PIALA DUNIA =====\n\n";
        cout << "1. Input Data Tim\n";
        cout << "2. Tampil Data Tim\n";
        cout << "3. Keluar\n";
        cout << "Pilih: ";
        cin >> pilih;

        // error handling input bukan angka
        if(cin.fail()){
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Input harus angka!\n";
            system("pause");
            continue;
        }
        
        switch(pilih){
            case 1:
                inputTim(tim);
                break;
            case 2:
                tampilTim(tim);
                break;
            case 3:
                cout << "Keluar...\n";
                break;
            default:
                cout << "Pilihan tidak tersedia!\n\n";
                system("pause");
        }
    }while(pilih != 3);
    
    return 0;
}
