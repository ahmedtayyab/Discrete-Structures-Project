///*Take input of 2 sets each of at least three elements. Considering Cartesian Product the relation,
//Find weather these relations exist or not. Also find number of Relations.
//1. The Total number of relations
//2. Reflexive Relations
//3. Symmetric Relations
//4. Anti-Symmetric Relations
//5. Both Reflexive and Symmetric Relations
//6. Both symmetric and Anti-symmetric Relations
//Also check if set is reflexive, anti symmetric, symmetric, both reflexive and symmetric , both symmetric and anti symmetric.
//
//*/
//
//
//
//#include <iostream>
//using namespace std;
//
//void input(int arr[], int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        cin >> arr[i];
//    }
//}
//
//int main()
//{
//    cout << "Program to Find Relations Between Two Sets" << endl;
//
//    // Input for Set A
//    cout << "Enter the size of set A: ";
//    int sizeA;
//    cin >> sizeA;
//    int* setA = new int[sizeA];
//
//    cout << "Enter the elements of set A: ";
//    input(setA, sizeA);
//
//    // Input for Set B
//    cout << "Enter the size of set B: ";
//    int sizeB;
//    cin >> sizeB;
//    int* setB = new int[sizeB];
//
//    cout << "Enter the elements of set B: ";
//    input(setB, sizeB);
//
//    // Calculate Cartesian Product using dynamic array
//    int** cartesianProduct = new int* [sizeA * sizeB];
//    for (int i = 0; i < sizeA * sizeB; i++) {
//        cartesianProduct[i] = new int[2];
//    }
//
//    int k = 0;
//    for (int i = 0; i < sizeA; i++) {
//        for (int j = 0; j < sizeB; j++) {
//            cartesianProduct[k][0] = setA[i];
//            cartesianProduct[k][1] = setB[j];
//            k++;
//        }
//    }
//
//    // Display the Cartesian Product
//    cout << "---------------------------------------------------------------------------" << endl;
//    cout << endl;
//    cout << "The Cartesian Product of the two sets is: " << endl;
//    for (int i = 0; i < sizeA * sizeB; i++) {
//        cout << "(" << cartesianProduct[i][0] << ", " << cartesianProduct[i][1] << ")" << " , ";
//    }
//    cout << endl;
//    cout << "---------------------------------------------------------------------------" << endl;
//
//    // Display the Total number of relations
//    cout << "---------------------------------------------------------------------------" << endl;
//    cout << "The Total number of relations are: " << sizeA * sizeB << endl;
//    cout << "---------------------------------------------------------------------------" << endl;
//
//
//    // Check for properties of relations
//    int reflexive = 0;
//    int symmetric = 0;
//    int antiSymmetric = 0;
//    int bothReflexiveAndSymmetric = 0;
//    int bothSymmetricAndAntiSymmetric = 0;
//
//    for (int i = 0; i < sizeA * sizeB; i++) {
//        // Check for reflexive relations
//        if (cartesianProduct[i][0] == cartesianProduct[i][1]) {
//            reflexive++;
//        }
//    }
//
//    // Display if Reflexive Relations exist
//    cout << "Reflexive Relations: " << (reflexive > 0 ? "Exist" : "Do Not Exist") << endl;
//
//    for (int i = 0; i < sizeA * sizeB; i++) {
//        for (int j = i + 1; j < sizeA * sizeB; j++) {
//            // Check for symmetric relations
//            if (cartesianProduct[i][0] == cartesianProduct[j][1] && cartesianProduct[i][1] == cartesianProduct[j][0]) {
//                symmetric++;
//            }
//
//            // Check for anti-symmetric relations
//            if (cartesianProduct[i][0] == cartesianProduct[j][1] && cartesianProduct[i][1] != cartesianProduct[j][0]) {
//                antiSymmetric++;
//            }
//
//            // Check for both reflexive and symmetric relations
//            if (cartesianProduct[i][0] == cartesianProduct[j][1] && cartesianProduct[i][1] == cartesianProduct[j][0] &&
//                cartesianProduct[i][0] == cartesianProduct[i][1]) {
//                bothReflexiveAndSymmetric++;
//            }
//
//            // Check for both symmetric and anti-symmetric relations
//            if (cartesianProduct[i][0] == cartesianProduct[j][1] && cartesianProduct[i][1] == cartesianProduct[j][0] &&
//                cartesianProduct[i][0] != cartesianProduct[i][1]) {
//                bothSymmetricAndAntiSymmetric++;
//            }
//        }
//    }
//
//    cout << "---------------------------------------------------------------------------" << endl;
//
//    cout << "Symmetric Relations: " << (symmetric > 0 ? "Exist" : "Do Not Exist") << endl;
//    cout << "---------------------------------------------------------------------------" << endl;
//    
//    cout << "Anti-Symmetric Relations: " << (antiSymmetric > 0 ? "Exist" : "Do Not Exist") << endl;
//    cout << "---------------------------------------------------------------------------" << endl;
//    
//    cout << "Both Reflexive and Symmetric Relations: "
//        << (bothReflexiveAndSymmetric > 0 ? "Exist" : "Do Not Exist") << endl;
//    cout << "---------------------------------------------------------------------------" << endl;
//    
//    cout << "Both Symmetric and Anti-Symmetric Relations: "
//        << (bothSymmetricAndAntiSymmetric > 0 ? "Exist" : "Do Not Exist") << endl;
//    cout << "---------------------------------------------------------------------------" << endl;
//
//        cout << "The Total number of relations are: " << sizeA * sizeB << endl;
//    cout << "---------------------------------------------------------------------------" << endl;
//
//    cout << "The Reflexive Relations are: " << reflexive << endl;
//    cout << "---------------------------------------------------------------------------" << endl;
//    
//    cout << "The Symmetric Relations are: " << symmetric << endl;
//    cout << "---------------------------------------------------------------------------" << endl;
//
//    cout << "The Anti-Symmetric Relations are: " << antiSymmetric << endl;
//    cout << "---------------------------------------------------------------------------" << endl;
//
//    cout << "The Both Reflexive and Symmetric Relations are: " << bothReflexiveAndSymmetric << endl;
//    cout << "---------------------------------------------------------------------------" << endl;
//
//    cout << "The Both Symmetric and Anti-Symmetric Relations are: " << bothSymmetricAndAntiSymmetric << endl;
//    cout << "---------------------------------------------------------------------------" << endl;
//
//    // Deallocate memory
//    for (int i = 0; i < sizeA * sizeB; i++) {
//        delete[] cartesianProduct[i];
//    }
//    delete[] cartesianProduct;
//
//    delete[] setA;
//    delete[] setB;
//
//    return 0;
//}
