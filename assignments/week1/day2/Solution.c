//My solution of odd cell count and thought process
// website link: https://leetcode.com/problems/cells-with-odd-values-in-a-matrix/
class Solution {
public:
    /* My thought process:
    * Given a m x n martix which has some indices, return the number of odd values cells            [row, col]
    given the following [0 0 0] indices: [0,1][1,1]
                        [0 0 0]
    we want to increment them and conunt the number of odd numbers in the matrix
    */
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        //first lets make a m x n matrix 
        vector<vector<int>> matrix( n , vector<int> (m, 0));
        //Lets loop into the indices and try to sum the row and col
        int i = 0;
        while(i != indices.size()){
            int r = indices[i][0], c = indices[i][1];
            //lets try to increment them by creating a new function that will allow us to do this. 
            //some function that will help us increment it

        } 
        //now lets say we have incremented all of them, now we can count the number of odd numbers within the matrix
        int countOdd = 0;
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[i].size(); j++){
                if(matrix[i][j] % 2 == 1){
                    countOdd++;
                }
            }
        }
        return countOdd;
    }
};