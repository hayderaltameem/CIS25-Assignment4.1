
#include <iostream>
#include <string>
using namespace std;

int main() {
    // First 10 records from the Kaggle Iris dataset
    int ids[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    double sepalLength[10] = {
        5.1, 4.9, 4.7, 4.6, 5.0,
        5.4, 4.6, 5.0, 4.4, 4.9
    };

    double sepalWidth[10] = {
        3.5, 3.0, 3.2, 3.1, 3.6,
        3.9, 3.4, 3.4, 2.9, 3.1
    };

    string species[10] = {
        "Iris-setosa", "Iris-setosa",
        "Iris-setosa", "Iris-setosa",
        "Iris-setosa", "Iris-setosa",
        "Iris-setosa", "Iris-setosa",
        "Iris-setosa", "Iris-setosa"
    };

    // Pointer to the first sepal length
    double* lengthPtr = sepalLength;

    cout << "Kaggle Iris Dataset - First 10 Records\n";
    cout << "--------------------------------------\n";

    for (int i = 0; i < 10; i++) {
        cout << "ID: " << ids[i]
             << " | Length: " << sepalLength[i]
             << " | Width: " << sepalWidth[i]
             << " | Species: " << species[i] << endl;
    }

    cout << "\nFirst sepal length using pointer: "
         << *lengthPtr << " cm" << endl;

    return 0;
}
