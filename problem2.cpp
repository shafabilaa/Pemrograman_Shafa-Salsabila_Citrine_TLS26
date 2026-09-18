#include <iostream>

using namespace std;

int nilaiHuruf(char huruf){
    return huruf - 'A' + 1;
    }

char ubahHuruf(int nilai){
    while(nilai > 26){
        nilai = nilai - 26;
        }
    return 'A' + nilai - 1;
    }

void enkripsi(char pesan[]){
    int i = 0;

    char hurufSebelum = pesan[0];
        cout << "Pesan Terenkripsi : " << pesan[0];

    i = 1;

    while(pesan[i] != '\0'){
        if(pesan[i] == ' '){
            cout << ' ';
            i++;
            continue;
            }
        
        int nilaiSekarang = nilaiHuruf (pesan[i]);
        int nilaiSebelum = nilaiHuruf(hurufSebelum);
        int nilaiBaru = nilaiSekarang + nilaiSebelum;
        char hurufBaru = ubahHuruf(nilaiBaru);
            cout << hurufBaru;

        hurufSebelum = pesan[i];
        i++;
        } 

    cout << endl;
    }

int main(){
    char pesan[100];

    cout << "Masukkan pesan yang ingin disampaikan : ";
    cin.getline(pesan, 100);

    enkripsi(pesan);

    return 0;
}
