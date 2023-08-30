#include <iostream>
using namespace std;
void Merger(int *arr, int first, int last, int mid)
{
    int b[last-first+1];
	int i = first;
	int k = 0;
	int j = mid + 1;
	while (i <= mid && j <= last)
	{
		if (arr[i] < arr[j])
		{
			b[k] = arr[i];
			k++; i++;
		}
		else
		{
			b[k] = arr[j];
			k++; j++;
		}
	}
	while (i <= mid)
	{
		b[k] = arr[i];
		k++; i++;
	}

	while (j <= last)
	{
		b[k] = arr[j];
		k++; j++;
	}

	for (i = first; i <= last; i++)
	{
		arr[i] = b[i-first];
	}
}
void MergeSort(int *arr, int first, int last)
{

    if(first >= last){  //base case
        return;
    }

	if (first < last)
	{
		int mid=(first+last)/2;
		MergeSort(arr, first, mid); //recursive call for 1st half
		MergeSort(arr, mid+1, last); //recursive call for 2nd half
		Merger(arr, first, last, mid); //merge them using merger function
	}
}
int main()
{
	int n, i;
	cout<<"\nEnter the number of data element to be sorted: ";
	cin>>n;
 
	int arr[n];
	for(i = 0; i < n; i++)
	{
		cout<<"Enter element "<<i+1<<": ";
		cin>>arr[i];
	}
 
	MergeSort(arr, 0, n-1);
 
	// Printing the sorted data.
	cout<<"\nSorted Data ";
	for (i = 0; i < n; i++)
        cout<<"->"<<arr[i];
 
	return 0;
}