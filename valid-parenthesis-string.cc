class Solution {
public:
    bool checkValidString(string s) {
        vector <int>open;
        vector <int>star;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '('){
                open.push_back(i);
            }
            else if(s[i] == ')'){
                if(open.empty()){
                    if(star.empty()){
                        return false;
                    }
                    else{
                        star.pop_back();
                    }
                }
                else{
                    open.pop_back();
                }
            }
            else if(s[i] == '*'){
                star.push_back(i);
            }
        }
        while(!open.empty()){
            if(!open.empty() && star.empty())
                return false;
            else if(open.back() < star.back()){
                open.pop_back();
                star.pop_back();
            }
            else{
                return false;
            }
        }
        return true;
    }
};
