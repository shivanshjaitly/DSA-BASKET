// Tower of Hanoi

// function
long long toh(int N, int from, int to, int aux) {
        long long count=0;
        if(N==1){
            cout<< "move disk "<< N << " from rod "<< from <<" to rod "<<to << endl;
            return 1;
        }
        count=1+toh(N-1,from,aux,to);
        cout<< "move disk "<< N << " from rod "<< from <<" to rod "<<to << endl;
        count +=toh(N-1,aux,to,from);
        return count;
    }
