\\ PROBLEM : kth largest element
\\ PLATFORM : GeeksforGeeks
\\ DIFFICULTY : Medium



class Solution {
  public:
    // Function to return kth largest element from an array.
    int KthLargest(vector<int> &arr, int k) {
        // Your code here
        priority_queue<int, vector<int>, greater<int>> minHeap;
        int n=arr.size();
        for (int i = 0; i < n; i++) {
            minHeap.push(arr[i]);
            if (minHeap.size()>k)
            minHeap.pop();
        }
        return minHeap.top();
    }
};