#include <iostream>
#include <string>
using namespace std;

int arr[20];    // deklarasi variable global array a dengan ukuran 20
int n;          // deklarasi variable global n untuk menyimpan banyaknya elemen pada array

void input() {
    while (true) {
        cout << "masukkan banyaknya elemen pada array: "<< endl;
        cin >> n;
        if (n <= 20)
            break;
        else{
            cout << "\nArray dapat mempunyai maksimal 20 elemen. \n" << endl;
        }
    }
    cout << endl;
    cout << "====================" << endl;
    cout << "masukkan elemen array" << endl;
    cout << "====================" << endl;

    for (int i = 0; i <n; i++){
        cout << "data ke-" << (i+1) << ";";
    }
}

void bubbleSortArray(){
    int pass = 1; //step satu

    do 
    {
        for (int j = 0; j <= n -1-pass;j++)
        {//step 2
            if(arr[j] > arr[j+1]){
                int temp;
                temp = arr [j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }

        }
        pass = pass +1; //step 4
    }while (pass <= n -1);//step 5
}

    