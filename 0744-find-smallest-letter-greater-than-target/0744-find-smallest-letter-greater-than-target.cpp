class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int sz = letters.size();
        int low = 0,high = sz - 1;

        while(low <= high){
            int mid = low + (high - low) / 2 ;
            if(letters[mid] <= target){
                low = mid+1;
            }
            else{
                high = mid - 1;
            }
        }
        
        return letters[low % sz];
    }
};