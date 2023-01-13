//Secltion sorted array by assending
#include<iostream>
using namespace std;
int main(){
	int i,j,swap,n;
	cout<<"Enter the size of array:"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the array of unsorted :"<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"slove  unsorted array with select method:"<<endl;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				swap=arr[i];
				arr[i]=arr[j];
				arr[j]=swap;
				}
					for(int k=0;k<n;k++){
					cout<<arr[k]<<",";
				}
				cout<<endl;
		}
	}
	cout<<"The select sorted array:"<<endl;
	for(i=0;i<n;i++){
		cout<<arr[i]<<",";		
	}
	return 0;
}
