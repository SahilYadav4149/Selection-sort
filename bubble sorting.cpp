/*#include<iostream>
using namespace std;


int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int flag = 0;
    for(int i = 0; i < n - 1; i++) {
        flag = 0;
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp;
    temp = arr[j];
    arr[j] = arr[j+1];
    arr[j+1] = temp;
                flag = 1;
            }
        }
        if(flag == 0)
            break;
    }

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}*/

#include<iostream>
using namespace std;
int bubblesort(int arr[],int n){
	int flag;
	for(int i=0;i<n-1;i++){
		flag=0;
		for(int j=0;j<n-1-i;j++){
			if(arr[j]>arr[j+1]){
		int temp=arr[j];
		arr[j]=arr[j+1];
		arr[j+1]=temp;
		flag=1;
	}}
	if(flag==0)
	break;
}
}
int main()
{
	int n,arr[n];
	cout <<"Enter the number:";
	cin>>n;
	cout<<"Unsorted array:"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	 bubblesort(arr,n);
	cout<<"sorted array:";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

