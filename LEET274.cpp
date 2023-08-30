class Solution {
public:
    int hIndex(vector<int>& citation) {
        sort(citation.begin(),citation.end());
        int st = 0,end = citation.size()-1,avg;
        while(st <= end){
            avg = (st+end)/2;
            if(citation[avg] < citation.size()-avg){
                st = avg+1;
            }
            else{
                end = avg-1;
            }
        }
        return citation.size()-st;
    }
};
