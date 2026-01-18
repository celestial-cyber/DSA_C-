//#include <iostream>
using namespace std;

// swap function
void swapElements(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int array[], int n) {
    int flag = 0;

    for (int i = 0; i < n - 1; i++) {
        flag = 0;

        for (int j = 0; j < n - 1 - i; j++) {
            // j = n - 1 - i because we want to reduce 1 comparisons in every pass
            // outer loop will repeat the passes
            // inner loop is for the swapping
            if (array[j] > array[j + 1]) {
                swapElements(array[j], array[j + 1]);
                flag = 1;
            }
        }

        if (flag == 0) {
            break;
        }
    }

    // flag variables denotes if the comparisons is made or not
    // if flag = 0 means no comparisons were made
}

// main function
int main() {
    int array[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(array) / sizeof(array[0]);

    //cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        //cout << array[i] << " ";
    }

    bubbleSort(array, n);

    //cout << "\nSorted array: ";
    for (int i = 0; i < n; i++) {
        //cout << array[i] << " ";
    }

    return 0;
}
