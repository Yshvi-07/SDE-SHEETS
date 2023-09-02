/*
	The function is called with the parameters:
	quickSort(input, 0, size - 1);

*/

int partitionArray(int arr[], int start, int end) {
	// Write your code here
	int p=arr[start];
	int c=0;
	
	int i=start,j=end;
	for(int i=start+1;i<=end;i++){
		if(arr[i]<=p){
			c++;
		}
	}
	int pin=c+start;
	swap(arr[pin],arr[start]);
	while(i<pin && j>pin){
		while(arr[i]<=p){
			i++;
			
		}
		while(arr[j]>p){
			j--;
			
		}

      if(i<pin && j>pin){
		  swap(arr[i++],arr[j--]);
	  }
	}
	return pin;
}

void quickSort(int arr[], int start, int end) {
	/*
		Don't write main().
		Don't read input, it is passed as function argument.
		Change in the given array itself.
		Taking input and printing output is handled automatically.
	*/
	if(start>=end){
		return ;
	}
	int p= partitionArray(arr,start,end);
	quickSort(arr,start,p-1);
	quickSort(arr,p+1,end);
} 
