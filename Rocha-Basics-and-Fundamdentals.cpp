#include <iostream>
using namespace std;

int main (){
    int firstArrayNo;
	int secondArrayNo;
	int i;
	
	// Create fisrt array
	do {
		cout << "Enter the number of elements in the first array (up to 10): ";
		cin >> firstArrayNo;
	
		if (firstArrayNo > 10)
			cout << "Enter a number less than or equal to ten." << endl; 
			cout << endl;
	} while (firstArrayNo > 10);
	
	int firstArray[firstArrayNo];
	
	// Input elements of first array
	for (int i=0; i<firstArrayNo; i++){
		cout << "Element " << i+1 << ": ";
		cin >> firstArray[i];
	}
	
	// Display elements of first array
	cout << endl;
	cout << "The elements of the first array are ";
	
	for (int i=0; i<firstArrayNo; i++){
		cout << firstArray[i] << " ";
	}
	
	cout << endl << endl;
	
	// Create second array
	do {
		cout << "Enter the number of elements in the second array (up to 10): ";
		cin >> secondArrayNo;
	
		if (secondArrayNo > 10)
			cout << "Enter a number less than or equal to ten." << endl; 
			cout << endl;
	} while (secondArrayNo > 10);
	
	int secondArray[secondArrayNo];
	
	// Input elements of second array
	for (int i=0; i<secondArrayNo; i++){
		cout << "Element " << i+1 << ": ";
		cin >> secondArray[i];
	}
	
	// Display elements of second array
	cout << endl;
	cout << "The elements of the second array are ";
	
	for (int i=0; i<secondArrayNo; i++){
		cout << secondArray[i] << " ";
	}
	
	cout << endl;
	
	// Create merged array
	int mergedArrayNo = firstArrayNo + secondArrayNo;
	int mergedArray[mergedArrayNo];
	
	// Merge the first and second array to mergedArray
	for (int i=0; i<firstArrayNo; i++){
		mergedArray[i] = firstArray[i];
	}
	for (int i=0; i<secondArrayNo; i++){
		mergedArray[i + firstArrayNo] = secondArray[i];
	}
	
	// Sort elements of merged array in descending order
	for (int i=0; i<mergedArrayNo - 1; i++){
		for (int j=i+1; j<mergedArrayNo; j++){
			if (mergedArray[i]<mergedArray[j]){
				int temp = mergedArray[i];
				mergedArray[i] = mergedArray[j];
				mergedArray[j] = temp;
			}
		}
	}
	
	// Display the merged array
	cout << endl;
	cout << "The merged array in descending order are ";
	
	for (int i=0; i<mergedArrayNo; i++){
		cout << mergedArray[i] << " ";
	}

	return 0;
}