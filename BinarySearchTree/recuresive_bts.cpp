#include <iostream>

using namespace std;


/*  
First, the target value (x) is compared with the middle element of the list.  
If they are equal, the middle value is returned.  

If the target value (x) is greater than the middle value, the `low` pointer is updated to `mid + 1`.  
This is because we conceptually divide the array into three parts: left, middle, and right.  

For example, consider the array: [1, 2, 3, 4, 5].  
After partitioning, it becomes: [1, 2], [3], [4, 5].  

If the target value (x) is 4:  
1. First, we check if it is equal to the middle value. If not, we proceed.  
2. Since 4 is greater than the middle value (3), we continue searching in the right part of the array.  

Similarly, if the target value is smaller than the middle value, the search continues in the left part of the array.  
*/  



int recuresive_binary_search_tree(int array[], int x, int low, int heigh){
	if (heigh >= low){
		int mid = low + (heigh - low) / 2;
		if (array[mid] == x){
			return mid;
		}
		
		if (array[mid] > x){
			return recuresive_binary_search_treei(array, x, low, mid - 1);
		}
		
		else{
			return recuresive_binary_search_tree(array, x, mid + 1, heigh);
		}

	}
	
	return -1;
}


int main(){

	int array[] = {3, 4, 5, 6, 7, 8, 9, 17, 22};
	int n = sizeof(array) / sizeof(int);
	int x;

	cout << "Do you want enter the  find number: " << endl;
	cin >> x;

	int result = recuresive_binary_search_tree(array, x, 0, n - 1);

	if (result == -1){
		cout << "don't find!";
	}
	
	else{
		cout << "find!!";
	}

}
