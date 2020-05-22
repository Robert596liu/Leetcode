class Solution {
public:
    /*
    int getvalue(int n){
        int nextnumber = 0;
        while(n > 0){
            int lastnumber = n % 10;
            nextnumber += lastnumber*lastnumber;
            n = n/10;
        }
        return nextnumber;
    }
    bool isHappy(int n) {
        int slow = n;
        int fast = getvalue(n);
        while(slow != fast){
            slow = getvalue(slow);
            fast = getvalue(getvalue(slow));
        }
        return slow == 1;
    }*/
    int getNextNumber(int num) {
        int nextNumber = 0;
        while (num > 0) {
            int lastDigit = num % 10;
            nextNumber += (lastDigit * lastDigit);
            
            num /= 10;
        }
        return nextNumber;
    }

    bool isHappy(int n) {
        int slow = n;
        int fast = getNextNumber(n);
        
        while (slow != fast) {
            slow = getNextNumber(slow);

            fast = getNextNumber(fast);
            fast = getNextNumber(fast);
        }

        return slow == 1;
    }
};
