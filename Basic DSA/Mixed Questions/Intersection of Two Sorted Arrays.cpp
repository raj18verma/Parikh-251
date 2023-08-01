
// BruteForce Approach 

//INTUITION:- Create a vector for storing answer and an array visited of size equivalent to array 2 and assign all values as 0. Now iterate over both the arrays and if you find the same element in both the arrays 
//            then mark the visited array position to 1 and store the element in answer. Return the vector ans

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
	vector<int>ans;
	vector<int>visited(m);
	visited={0};

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(arr1[i]==arr2[j] && visited[j]==0){
				ans.push_back(arr1[i]);
				visited[j]=1;
				break;
			}
			if(arr2[j]>arr1[i])break;
		}
	}
	return ans;
}


// T.C --> O(n*m)
// S.C --> O(m)



// Optimal Approach (Two Pointers)

//INTUITION:- Mark the two pointers i and j each standing on the first element of arr1 and arr2. If element is matched then increment both i and j. Return the answer 

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
	int i=0, j=0;
	vector<int>ans;

	while(i<n && j<m){
		if(arr1[i]<arr2[j]){
			i++;
		}
		else if(arr1[i]>arr2[j]){
			j++;
		}
		else{
			ans.push_back(arr1[i]);
			i++;
			j++;
		}
	}
	return ans;
}

// T.C --> O(n+m) in the worst case i.e all the elements of arr1 and arr2 are common
// S.C --> O(1)
