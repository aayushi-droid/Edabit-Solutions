
  #This program finds the integer which appears odd number of times
  # Problem : https://edabit.com/challenge/wgnmQTbfssuhvZHqe


def getOddOccurrence(arr, arr_size): 
	
	for i in range(0,arr_size): 
		count = 0
		for j in range(0, arr_size): 
			if arr[i] == arr[j]: 
				count+=1
			
		if (count % 2 != 0): 
			return arr[i] 
		
	return -1
	
	

arr = [2, 3, 5, 4, 5, 2, 4, 3, 5, 2, 4, 4, 2 ] 
n = len(arr) 
print(getOddOccurrence(arr, n)) 

 
