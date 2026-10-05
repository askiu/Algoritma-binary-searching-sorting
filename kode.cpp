#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr, int n) {
    int i, j, temp;
    int tukar; // flag untuk optimasi
    
    // Loop untuk setiap putaran
    for (i = 0; i < n - 1; i++) {
        tukar = 0; // reset flag
        
        // Loop untuk membandingkan elemen berdekatan
        for (j = 0; j < n - i - 1; j++) {
            // Jika elemen kiri lebih besar, tukar
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                tukar = 1;
            }
        }
        
        // Jika tidak ada pertukaran, array sudah terurut
        if (tukar == 0) {
            break;
        }
    }

    
}

int main(){
    int N;
    cin >> N;

    vector<int> a(N);

    for(int i=0; i<N; i++){
        cin >> a[i];
    }

    cout << "BEFORE: " << '\n';

    for(int i=0; i<N; i++){
        cout << a[i] << " ";
    }

    bubbleSort(a, N);

    cout << '\n' << '\n';

    cout << "AFTER: " << '\n';

    for(int i=0; i<N; i++){
        cout << a[i] << " ";
    }

    return 0;
}