// **************
// void insertionSort(vector<int> &arr , int n){
//     for(int i=1; i<=n-1; i++){        
//         int key = arr[i];
//         int j=i-1;
//         // cout<<"arr[key] "<<arr[i]<<endl;
//         while(j>=0 && arr[j]>key){            
//             arr[j+1]=arr[j];            
//             j--;
//         }
//         arr[j+1]=key;
//     }
// }
// **********
// void bubbleSort(vector<int> &arr)
// {
//     int n = arr.size();
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - 1 - i; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//     }
// }
// *********
// void selectionSort(vector<int> &arr, int n)
// {    
//     for (int i = 0; i < n - 1; i++)
//     {
//         int minIdx = i;
//         for (int j = i + 1; j<n; j++){
//             if(arr[j]<arr[minIdx]){
//                 minIdx=j;
//             }
//         }
//         swap(arr[minIdx],arr[i]);
//     }
// }
// ************
// void merge(int l,int mid, int h, vector<int> &arr){
//     int i = l, k=l, j=mid+1;
//     vector<int>b(arr.size());
//     while(i<=mid && j<=h){
//         if(arr[i]>=arr[j]){
//             b[k]=arr[j];
//             j++;
//         }
//         else{
//             b[k]=arr[i];
//             i++;
//         }
//         k++;
//     }
//     if(i>mid){
//         while(j<=h){
//             b[k]=arr[j];
//             j++;
//             k++;
//         }
//     }
//     if(j>h){
//         while(i<=mid){
//             b[k]=arr[i];
//             i++;
//             k++;
//         }
//     }
// }
// void mergeSort(int l, int h, vector<int> &arr){
//     if(l<h){
//         int mid = l+(h-l)/2;
//         mergeSort(l,mid,arr);
//         mergeSort(mid+1,h,arr);
//         merge(l,mid,h,arr);
//     }
//     return ;
// }
// ***************************
// int partition(int l, int h, vector<int> &arr)
// {
//     int pivot =arr[l];
//     int i=l+1,j=h;
//     if(i<=j){
//         while(arr[i]<=pivot) i++;
//         while(arr[j]>pivot) j--;
//         if(i<j){
//             swap(arr[i],arr[j]);
//         }
//     }
//     swap(arr[l],arr[j]);
//     return j;
// };
// void quickSort(int l, int h, vector<int> &arr)
// {
//     if (l < h)
//     {
//         int partitionIdx;
//         partitionIdx = partition(l, h, arr);
//         quickSort(l, partitionIdx - 1, arr);
//         quickSort(partitionIdx + 1, h, arr);
//     }
//     return;
// }
// // STARSEN matrix*******************************
// #include <algorithm>
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int nextpowerof2(int k){
//     return pow(2, int(ceil(log2(k))));
// }
// void display(vector< vector<int>> &matrix, int m, int n){
//     for (int i = 0; i < m; i++){
//         for (int j = 0; j < n; j++){
//             if (j != 0){
//                 cout << "\t";
//             }
//             cout << matrix[i][j];
//         }
//         cout << endl;
//     }
// }
// void add(vector<vector<int>> &A, vector<vector<int>> &B, vector<vector<int>> &C, int size){
//     int i, j;
//     for (i = 0; i < size; i++){
//         for (j = 0; j < size; j++){
//             C[i][j] = A[i][j] + B[i][j];
//         }
//     }
// }
// void sub(vector<vector<int>> &A, vector<vector<int>> &B, vector<vector<int>> &C, int size){
//     int i, j;
//     for (i = 0; i < size; i++){
//         for (j = 0; j < size; j++){
//             C[i][j] = A[i][j] - B[i][j];
//         }
//     }
// }
// void Strassen_algorithmA(vector<vector<int>> &A, vector<vector<int>> &B, vector<vector<int>> &C, int size)
// {
//     //base case
//     if (size == 1)
//     {
//         C[0][0] = A[0][0] * B[0][0];
//         return;
//     }
//     else
//     {
//         int new_size = size / 2;
//         vector<int> z(new_size);
//         vector<vector<int>>
//             a11(new_size, z), a12(new_size, z), a21(new_size, z), a22(new_size, z),
//             b11(new_size, z), b12(new_size, z), b21(new_size, z), b22(new_size, z),
//             c11(new_size, z), c12(new_size, z), c21(new_size, z), c22(new_size, z),
//             p1(new_size, z), p2(new_size, z), p3(new_size, z), p4(new_size, z),
//             p5(new_size, z), p6(new_size, z), p7(new_size, z),
//             aResult(new_size, z), bResult(new_size, z);
// int i, j;
// //dividing the matrices into sub-matrices:
// for (i = 0; i < new_size; i++)
//         {
//             for (j = 0; j < new_size; j++)
//             {
//                 a11[i][j] = A[i][j];
//                 a12[i][j] = A[i][j + new_size];
//                 a21[i][j] = A[i + new_size][j];
//                 a22[i][j] = A[i + new_size][j + new_size];

//                 b11[i][j] = B[i][j];
//                 b12[i][j] = B[i][j + new_size];
//                 b21[i][j] = B[i + new_size][j];
//                 b22[i][j] = B[i + new_size][j + new_size];
//             }
// }
// // Calculating p1 to p7:
//         add(a11, a22, aResult, new_size);     // a11 + a22
//         add(b11, b22, bResult, new_size);    // b11 + b22
//         Strassen_algorithmA(aResult, bResult, p1, new_size); 
//         // p1 = (a11+a22) * (b11+b22)
//         add(a21, a22, aResult, new_size); // a21 + a22
//         Strassen_algorithmA(aResult, b11, p2, new_size);
//         // p2 = (a21+a22) * (b11)
//         sub(b12, b22, bResult, new_size);      // b12 - b22
//         Strassen_algorithmA(a11, bResult, p3, new_size);
//         // p3 = (a11) * (b12 - b22)
//         sub(b21, b11, bResult, new_size);       // b21 - b11
//         Strassen_algorithmA(a22, bResult, p4, new_size); 
//         // p4 = (a22) * (b21 - b11)
//         add(a11, a12, aResult, new_size);      // a11 + a12
//         Strassen_algorithmA(aResult, b22, p5, new_size);
//         // p5 = (a11+a12) * (b22)
//         sub(a21, a11, aResult, new_size);      // a21 - a11
//         add(b11, b12, bResult, new_size);               
//         // b11 + b12
//         Strassen_algorithmA(aResult, bResult, p6, new_size);
//         // p6 = (a21-a11) * (b11+b12)
//         sub(a12, a22, aResult, new_size);      // a12 - a22
//         add(b21, b22, bResult, new_size);                
//         // b21 + b22
//         Strassen_algorithmA(aResult, bResult, p7, new_size);
//         // p7 = (a12-a22) * (b21+b22)
//         // calculating c21, c21, c11 e c22:
//         add(p3, p5, c12, new_size); // c12 = p3 + p5
//         add(p2, p4, c21, new_size); // c21 = p2 + p4
//         add(p1, p4, aResult, new_size);       // p1 + p4
//         add(aResult, p7, bResult, new_size);  // p1 + p4 + p7
//         sub(bResult, p5, c11, new_size); // c11 = p1 + p4 - p5 + p7
//         add(p1, p3, aResult, new_size);       // p1 + p3
//         add(aResult, p6, bResult, new_size);  // p1 + p3 + p6
//         sub(bResult, p2, c22, new_size); // c22 = p1 + p3 - p2 + p6       
//         for (i = 0; i < new_size; i++)
//         {
//             for (j = 0; j < new_size; j++)
//             {
//                 C[i][j] = c11[i][j];
//                 C[i][j + new_size] = c12[i][j];
//                 C[i + new_size][j] = c21[i][j];
//                 C[i + new_size][j + new_size] = c22[i][j];
//             }
//         }
//     }
// }
// void Strassen_algorithm(vector<vector<int>> &A, vector<vector<int>> &B, int m, int n, int a, int b)
// {  
//     int k = max({m, n, a, b});
//     int s = nextpowerof2(k);
//     vector<int> z(s);
//     vector<vector<int>> Aa(s, z), Bb(s, z), Cc(s, z);
//     for (unsigned int i = 0; i < m; i++)
//     {
//         for (unsigned int j = 0; j < n; j++)
//         {
//             Aa[i][j] = A[i][j];
//         }
//     }
//     for (unsigned int i = 0; i < a; i++)
//     {
//         for (unsigned int j = 0; j < b; j++)
//         {
//             Bb[i][j] = B[i][j];
//         }
//     }
//     Strassen_algorithmA(Aa, Bb, Cc, s);
//     vector<int> temp1(b);
//     vector<vector<int>> C(m, temp1);
//     for (unsigned int i = 0; i < m; i++)
//     {
//         for (unsigned int j = 0; j < b; j++)
//         {
//             C[i][j] = Cc[i][j];
//         }
//     }
//     display(C, m, b);
// }
// int main() {
//     // Your code goes here;
//     cout<<"AAYUSH CHAUHAN IT-A 01"<<endl;
//     cout<<"Enter the element of first matrix"<<endl;
//     vector<vector<int>> a(3 , vector<int> (3));
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             cin>>a[i][j];
//         }
//     }
//     co8ut<<"Enter the element of second matrix"<<endl;
//     vector<vector<int>> b(3 , vector<int> (3));
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             cin>>b[i][j];
//         }
//     }
//     cout<<"Final matrix "<<endl;
//     Strassen_algorithm(a, b, 3, 3, 3, 3);
//     return 0;
// }
// 

// // MCM***********
// // See the Cormen book for details of the
// // following algorithm
// #include <bits/stdc++.h>
// using namespace std;
// // Matrix Ai has dimension p[i-1] x p[i]
// // for i = 1..n
// int MatrixChainOrder(int p[], int n)
// {
// 	int m[n][n];
// 	int i, j, k, L, q;
// 	for (i = 1; i < n; i++)
// 		m[i][i] = 0;
// 	for (L = 2; L < n; L++)
// 	{
// 		for (i = 1; i < n - L + 1; i++)
// 		{
// 			j = i + L - 1;
// 			m[i][j] = INT_MAX;
// 			for (k = i; k <= j - 1; k++)
// 			{
// 				// q = cost/scalar multiplications
// 				q = m[i][k] + m[k + 1][j]
// 					+ p[i - 1] * p[k] * p[j];
// 				if (q < m[i][j])
// 					m[i][j] = q;
// 			}
// 		}
// 	}
// 	return m[1][n - 1];
// }
// // Driver Code
// int main()
// {
// 	int arr[] = { 1, 2, 3, 4 };
// 	int size = sizeof(arr) / sizeof(arr[0]);
// 	cout << "Minimum number of multiplications is "
// 		<< MatrixChainOrder(arr, size);
// 	getchar();
// 	return 0;
// }

// // LCS******************
// /* Dynamic Programming C implementation of LCS problem */
// #include <bits/stdc++.h>
// using namespace std;
// /* Returns length of LCS for X[0..m-1], Y[0..n-1] */
// int lcs(char *X, char *Y, int m, int n)
// {
// 	// intitalizing a matrix of size (m+1)*(n+1)
// 	int L[m + 1][n + 1];
// 	/* Following steps build L[m+1][n+1] in bottom up fashion. Note
// 		that L[i][j] contains length of LCS of X[0..i-1] and Y[0..j-1] */
// 	for (int i = 0; i <= m; i++)
// 	{
// 		for (int j = 0; j <= n; j++)
// 		{
// 			if (i == 0 || j == 0)
// 				L[i][j] = 0;
// 			else if (X[i - 1] == Y[j - 1])
// 				L[i][j] = L[i - 1][j - 1] + 1;
// 			else
// 				L[i][j] = max(L[i - 1][j], L[i][j - 1]);
// 		}
// 	}
// 	// L[m][n] contains length of LCS for X[0..n-1] and Y[0..m-1]
// 	return L[m][n];
// }
// // Driver program to test above function
// int main()
// {
// 	char X[] = "AGGTAB";
// 	char Y[] = "GXTXAYB";
// 	int m = strlen(X);
// 	int n = strlen(Y);
// 	cout << "Length of LCS is: " << lcs(X, Y, m, n);
// 	return 0;
// }
// // code submitted by Aditya Yadav (adityayadav012552)

// // OBST 
// // Dynamic Programming code for Optimal Binary Search
// // Tree Problem
// #include <bits/stdc++.h>
// using namespace std;

// // A utility function to get sum of array elements
// // freq[i] to freq[j]
// int sum(int freq[], int i, int j);

// /* A Dynamic Programming based function that calculates
// minimum cost of a Binary Search Tree. */
// int optimalSearchTree(int keys[], int freq[], int n)
// {
// 	/* Create an auxiliary 2D matrix to store results
// 	of subproblems */
// 	int cost[n][n];

// 	/* cost[i][j] = Optimal cost of binary search tree
// 	that can be formed from keys[i] to keys[j].
// 	cost[0][n-1] will store the resultant cost */

// 	// For a single key, cost is equal to frequency of the key
// 	for (int i = 0; i < n; i++)
// 		cost[i][i] = freq[i];

// 	// Now we need to consider chains of length 2, 3, ... .
// 	// L is chain length.
// 	for (int L = 2; L <= n; L++)
// 	{
// 		// i is row number in cost[][]
// 		for (int i = 0; i <= n-L+1; i++)
// 		{
// 			// Get column number j from row number i and
// 			// chain length L
// 			int j = i+L-1;
// 			cost[i][j] = INT_MAX;
// 			int off_set_sum = sum(freq, i, j);

// 			// Try making all keys in interval keys[i..j] as root
// 			for (int r = i; r <= j; r++)
// 			{
// 			// c = cost when keys[r] becomes root of this subtree
// 			int c = ((r > i)? cost[i][r-1]:0) +
// 					((r < j)? cost[r+1][j]:0) +
// 					off_set_sum;
// 			if (c < cost[i][j])
// 				cost[i][j] = c;
// 			}
// 		}
// 	}
// 	return cost[0][n-1];
// }

// // A utility function to get sum of array elements
// // freq[i] to freq[j]
// int sum(int freq[], int i, int j)
// {
// 	int s = 0;
// 	for (int k = i; k <= j; k++)
// 	s += freq[k];
// 	return s;
// }

// // Driver code
// int main()
// {
// 	int keys[] = {10, 12, 20};
// 	int freq[] = {34, 8, 50};
// 	int n = sizeof(keys)/sizeof(keys[0]);
// 	cout << "Cost of Optimal BST is " << optimalSearchTree(keys, freq, n);
// 	return 0;
// }

// // 0-1 knapsack
// // A dynamic programming based
// // solution for 0-1 Knapsack problem
// #include <bits/stdc++.h>
// using namespace std;
// // A utility function that returns
// // maximum of two integers
// int max(int a, int b) { return (a > b) ? a : b; }
// // Returns the maximum value that
// // can be put in a knapsack of capacity W
// int knapSack(int W, int wt[], int val[], int n)
// {
// 	int i, w;
// 	vector<vector<int> > K(n + 1, vector<int>(W + 1));
// 	// Build table K[][] in bottom up manner
// 	for (i = 0; i <= n; i++) {
// 		for (w = 0; w <= W; w++) {
// 			if (i == 0 || w == 0)
// 				K[i][w] = 0;
// 			else if (wt[i - 1] <= w)
// 				K[i][w] = max(val[i - 1]
// 								+ K[i - 1][w - wt[i - 1]],
// 							K[i - 1][w]);
// 			else
// 				K[i][w] = K[i - 1][w];
// 		}
// 	}
// 	return K[n][W];
// }
// // Driver Code
// int main()
// {
// 	int val[] = { 60, 100, 120 };
// 	int wt[] = { 10, 20, 30 };
// 	int W = 50;
// 	int n = sizeof(val) / sizeof(val[0]);
// 	cout << knapSack(W, wt, val, n);
// 	return 0;
// }




