//by: Yuechao Hou
class Solution {
public:
    string longestPalindrome(string s) {
    	//straight forward way to find the answer
        int maxlen=0;
        int index=0; 
        int n= s.length();
        for(int i=0; i<n; i++){
            int len=1, l=i, r=i;
            while(1){
                if(l-1>=0 && s[l-1]==s[i]){
                    l--; len++;
                }
                else if(r+1<=n && s[r+1]==s[i]){
                    r++; len++;
                }
                else{
                    break;
                }
            }
            while(l-1>=0 && r+1<n){
                if(s[l-1]==s[r+1]){
                    l--; r++;
                    len+=2;
                }
                else{
                    break;
                }
            }
            if(len>maxlen){
                maxlen=len;
                index=l;
            }
        }
        string result="";
        for(int i=index; i<index+maxlen; i++){
            result+=s[i];
        }
        return result;
    }
};