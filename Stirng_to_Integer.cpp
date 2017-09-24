class Solution {
public:
    int myAtoi(string str) {
        if(str=="") return 0;
        long result=0;
        long sign=1;
        int i=0;
        while(i<str.length()&&str[i]==' '){
            i++;
        }
        if(str[i]=='-'){
            sign=-1;
            i++;
        }
        else if(str[i]=='+'){
            i++;
        }
        while(i<str.length()){
            if(str[i]>'9'||str[i]<'0') break;
            result=result*10+(str[i]-'0');
            i++;
            if(result>INT_MAX) {
                break;
            }
        }
        if(sign>0){
            result=(INT_MAX>=result)? result:INT_MAX;
        }
        else{
            result=(INT_MAX>=result)? (-1*result):INT_MIN;
        }
        return result;
    }
};