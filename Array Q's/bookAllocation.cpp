bool isPossible(int n ,int m , int mid , vector<int> time){
    int day = 1;
    long long int reqTime = 0;
    for(int i = 0;i<m;i++){
        if(reqTime+time[i]<=mid){
            reqTime += time[i];

        }else{
            day++;
            if(day> n || time[i]>mid ){
                return false;
            }
            reqTime = time[i];
        }
    }
    return true;

}




long long ayushGivesNinjatest(int n, int m, vector<int> time)
{
    long long int start = 0;
    long long sum  = 0;
    long long int ans = -1;

    for(int i = 0;i<m;i++){
        sum = sum+time[i];
    }

    long long int end = sum;
    long long int mid = start +(end-start)/2;
    while(start<=end){
        long long int mid = start +(end-start)/2;
        if(isPossible(n,m,mid,time)){
            ans = mid;
            end = mid-1;

        }else{
            start = mid+1;
        }
        return ans;
    }

}