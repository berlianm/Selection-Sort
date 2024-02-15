#include <iostream>

using namespace std;

void selectionSort(int *array, int size) {
    int i, j, imin, temp;
    for(i = 0; i<size-1; i++) {
        imin = i;   //get index of minimum data
        for(j = i+1; j<size; j++)
            if(array[j] < array[imin])
                imin = j;
            //placing in correct position
            temp = array[i];
            array[i] = array[imin];
            array[imin] = temp;
   }
}
int main()
{
    int array[100000], n, i, j;
    cout << "Masukkan banyak elemen: ";
    cin >> n;
    cout << "Masukkan nilai: \n";
    for (i = 0; i < n; i++){
        cin >> array[i];
    }
    selectionSort(array, n);
    cout << "Hasil pengurutan sebagai berikut:\n";
    for (i = 0; i < n; i++){
        cout << array[i] << " ";
    }
    cout << "\n";
    return 0;
}
