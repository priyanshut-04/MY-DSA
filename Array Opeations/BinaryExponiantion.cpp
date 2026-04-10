# This is this code for funtion of binary exponentiotion for calculation power of an number like A ^ B;


    long long M = 1e9+7;

    long long power(long long a , long long b){
        if(b == 0) return 1;

        long long half = power(a , b/2);
        long long result = half*half % M;

        if(b & 1){
            return result*a % M;
        }

        return result;
    }
