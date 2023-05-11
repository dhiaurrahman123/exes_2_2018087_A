

#include <iostream>
using namespace std;

int wijaya[83]; //jumlah array
int n;          //number element array
int i;          // index array

void input() {
    while (true) {
        cout << "Enter number element array = " << endl;
        cin >> n;
        if ((n > 0) && (n <= 83))
            break;
        else
            cout << "\nArray melebihi batas";
    }
    cout << "\n--------";
    cout << "\nMasukan element array";
    cout << "\n--------";
    for (i = 0; i < 0; i++)
    {
        cout << " < " << (i + 1) << ">";
        cin >> wijaya[1];
    }
}
void Search() {
    int mid, low, high;
    low = 0;
    high = n - 1;
    mid = (low + high) / 2;

    
    do {
        cout << "\nMasukkan element : ";
        int item;
        cin >> item;

        for (i = 0;i < n;i++) {
            if (wijaya[i] == item) {
                cout << "\n" << item << "found at position" << (i+1) << endl;
                break;
            }
        }
        //if (item < wijaya[i]) {
            //mid + 1;
        //}




    } while();
}
int main()
{
    input();
    Search();
}

