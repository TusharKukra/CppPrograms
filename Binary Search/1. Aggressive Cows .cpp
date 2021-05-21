    #include<bits/stdc++.h>
    using namespace std;

    /*
    Aggressive Cow 
    */

    bool canPlaceCows(int N, int C, int* stalls, int m){
        // place the 1st cow in the 1st stall
        int prevCowPosition = stalls[0];  
        int numCowsPlaced = 1;

        for(int i=0;i<N;i++){
            // can u place the next cow at the ith stall?
            if(stalls[i] - prevCowPosition >= m){
                // u can place the next cow at the ith stall
                prevCowPosition = stalls[i];
                numCowsPlaced++;
                if(numCowsPlaced == C){
                    return true;
                }
            }
        }
        return false;
    }

    int findMaxMinDist(int N, int C, int* stalls){

        int s = 0; // place the cows in the same stall
        int e = stalls[N-1] - stalls[0]; // place the cows at the extrene ends
        int ans;

        while(s<=e){
            int m = s + (e-s)/2;
            // can u place C cows in N stalls such that min. dist. b/w cows is , ?
            if(canPlaceCows(N,C,stalls,m)){
                ans = m;
                s = m+1;
            }
            else{
                e = m-1;
            }
        }
        return ans;
    }

    int main(){

        int t;
        cin>>t;
        while(t--){

            int N;
            cin>>N;
            
            int C;
            cin>>C;

            int* stalls = new int[N];
            for(int i=0;i<N;i++){
                cin>>stalls[i];
            }
            sort(stalls, stalls+N);
            cout<<findMaxMinDist(N,C,stalls)<<endl;
        }
        return 0;
    }
