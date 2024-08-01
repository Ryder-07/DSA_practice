class Solution {
public:
    int countSeniors(vector<string>& details) {
        int cont=0;
        for(int i=0;i<details.size();i++){
            int ch1=details[i][11]-'0';
            int ch2=details[i][12]-'0';

            int ch3=(ch1*10)+ch2;
            
            if(ch3>60){
                cont++;
            }
        }
        return cont;
    }
};
