/*

Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

Integers in each row are sorted from left to right.
The first integer of each row is greater than the last integer of the previous row.
 

 Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true 

Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
Output: false


Constraints:

m == matrix.length
n == matrix[i].length
*/



// solution 1

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        int s = 0;int e = (m*n)-1;
        int mid = s+(e-s)/2;
        
        while(s<=e){
           
            int element = matrix[mid/n][mid%n];
            
            if(element == target){
                return true;
            }
            
            if(element < target){
                s = mid+1;
            }else{
                e = mid-1;
            }
            
            mid = s+(e-s)/2;
            
        }
       
        return false;
    }
};



// solution 2


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        int row = 0, col = cols-1;
        
        while(row<rows && col > -1){
           int elm = matrix[row][col];
            
            if(elm == target)return true;
            
            if(target > elm)row++;
            else col--;
        }
        return false;
    }
};