class Solution {
public:
    string convert(string s, int numRows) {
        string answer="";
        if(numRows<=1) return s;
        int period=numRows-1;
        for(int j=0; j<numRows; j++){
            int i=j, step=period*2-j*2;
            while(i<s.length()){
                if(step==0) step=2*period;
                answer=answer+s[i];
                i=i+step;
                step=2*period-step;
            }
        }
        return answer;
    }
                    
};