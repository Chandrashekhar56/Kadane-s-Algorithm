from sys import maxsize
def LargestSubarraySum(arr,total_size_of_arr):
	maximum = -maxsize - 1
	maximum_ending = 0
	index_starting = 0
	index_ending = 0
	m = 0

	for x in range(0,total_size_of_arr):
		maximum_ending += arr[x]
		if maximum < maximum_ending:
			maximum = maximum_ending
			index_starting= m
			index_ending = x
		if maximum_ending < 0:
			maximum_ending = 0
			m = x+1
	print ("Starting Index %d"%(index_starting))
	print ("Ending Index %d"%(index_ending))

	return maximum
    
arr = [-5, -3, 8, -1, -2, 1, 3, -1]
sum=LargestSubarraySum(arr,len(arr))
print ("Maximum contiguous sum is %d"%(sum))
