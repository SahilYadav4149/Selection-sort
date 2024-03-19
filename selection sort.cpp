
//By pointer method   ''''''''''''''''''''''''(moderate method)
#include <iostream>
using namespace std;
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }
}

int main() {
    const int size = 6;
    int arr[size] = {64, 25, 12, 22, 11, 1};

    cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
    cout << arr[i] << " ";
    }
    selectionSort(arr, size);
cout << "Sorted array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
}
}


//By normal method   '''''''''''''''''''''''''(easy method)
#include<iostream>
using namespace std;
int selectionsort(int arr[],int n)
{
	for(int i=0;i<n-1;i++){
		int minindex=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[minindex]){
				minindex=j;
			}	}
			int temp=arr[i];
			arr[i]=arr[minindex];
			arr[minindex]=temp;
	}
}
int main()
{
	int n,arr[n],i;
	cout<<"Enter the number:";
	cin>>n;
	cout<<"Unsorted array"<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
    selectionsort(arr, n);
cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
}
}

