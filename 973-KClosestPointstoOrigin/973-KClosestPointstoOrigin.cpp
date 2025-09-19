// Last updated: 19/09/2025, 09:59:57
class Solution {
public:
     static bool cmp(vector<int>A,vector<int>B)
     {
        double d1=sqrt(A[0]*A[0]+A[1]*A[1]);
        double d2=sqrt(B[0]*B[0]+B[1]*B[1]);
        if (d1<d2)
        return true;
        else
        return false;


     }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        sort(points.begin(),points.end(),cmp);
        vector<vector<int>>answer;
        for(int i=0;i<k;i++){
             answer.push_back(points[i]);

        }

    return answer;

    }
};