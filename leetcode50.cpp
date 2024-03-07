//Pow(x,n)

double myPow(double x, int n) {
        double ans = 1.0;
        bool flag = true;
        long long nn = -1;
        if(n<0){
            flag = false;
            nn = (long long)(-1)*n;
        }
        else nn = n;
        while(nn){
            if(nn%2){
                ans = ans * x;
                nn--;
            }
            else{
                x = x*x;
                nn /= 2;
            }
        }
        return flag==true?ans:(1.0/ans);
    }