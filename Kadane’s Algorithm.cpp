#include<iostream>
#include<climits>
using namespace std;
int LargestSubarraySum(int arr[], int total_size_of_arr)
{
	int maximum = INT_MIN, maximum_ending= 0,
	index_starting =0, index_ending = 0, m=0;
	for (int x=0; x< total_size_of_arr;x++ )
	{
		maximum_ending += arr[x];

		if (maximum < maximum_ending)
		{
			maximum = maximum_ending;
			index_starting = m;
			index_ending = x;
		}

		if (maximum_ending < 0)
		{
			maximum_ending = 0;
			m = x+ 1;
		}
	}

	cout << "index Starting: "<< index_starting
		<< endl << "index Ending: "<< index_ending << endl;
		return maximum;
}
int main()
{
	int arr[] = {-13, -1, -12, -22, -13, -10, -20, -10, -5, -22, -15, -4, -7};
	int total_size_of_arr = sizeof(arr)/sizeof(arr[0]);
	int maximumSum = LargestSubarraySum(arr, total_size_of_arr);
	cout << "Maximum contiguous sum is: "
		<< maximumSum << endl;
	return 0;
}

