class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> Found;
        //create a hash map, in which the key is the character, the value is the index of the character
        int ans=0;
        for(unsigned int i=0, j=0; j< s.length(); j++){
            if(Found.find(s[j])!=Found.end()){
                i=(Found[s[j]]+1 > i)? Found[s[j]]+1:i;
                //i....a....a(j)
                //a....i....a(j)
                //two pointers, the second pointer points to the last character found, the first pointer points to the head of the substring found
            }
            Found[s[j]]=j;
            ans=(j-i+1>ans)?(j-i+1):ans;   
            //get the maximum length of the string
        }
        return ans;
    }
};