#include <iostream>

using namespace std;

void eliminasi(int n, int k){
    int *astro = new int[n];

        for(int i = 0; i < n; i++){
            astro[i] = i + 1;
        }

    int jumlah = n;
    int posisi = 0;

    cout << endl;
    cout << "Urutan astronout eliminasi : ";
        while(jumlah > 1){
            int posisielim = (posisi + k - 1) % jumlah;
            int elim = astro[posisielim];

            cout << elim;
            
            if(jumlah > 2){
                cout << " " ;
            } if(elim % 2 == 0){
                k = k + 2;
            } else {
                k = k -1;
                    if(k < 2){
                        k = 2;
                    }
                }
            for(int i = posisielim; i < jumlah - 1; i++){
                astro[i] = astro [i + 1];
                    }
                jumlah--;

                if(posisielim == jumlah){
                    posisi = 0;
                } else {
                    posisi = posisielim;
                }
            }
        cout << endl;
        cout << "Astronout Tersisa : " << astro[0] << endl;
        cout << "Nilai k terakhir : " << k << endl;
        delete[] astro;
}

int main(){
    int n, k;

    cout << "Masukkan jumlah astronout (n) : ";
    cin >> n;
    cout << "Masukkan nilai astronout eliminasi : ";
    cin >> k;

    if(n < 1){
        cout << "Jumlah harus lebih dari 0!" << endl;
        return 0;
        }
    if (k < 2){
        k = 2;
        }

    eliminasi(n, k);

    return 0;
}