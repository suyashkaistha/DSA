// ISME NYII MATRIX BANANI HA SPIRAL ORDER ME
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n,vector<int>(n));
        int minr=0,maxr=n-1;
        int minc=0,maxc=n-1;
        int num=1;
        while(minr<=maxr&&minc<=maxc){
            for(int j=minc;j<=maxc;j++){
                ans[minr][j]=num++;
            }minr++;
            if(minr>maxr||minc>maxc) break;
            for(int i=minr;i<=maxr;i++){
                ans[i][maxc]=num++;
            }maxc--;
            if(minr>maxr||minc>maxc) break;
            for(int j=maxc;j>=minc;j--){
                ans[maxr][j]=num++;
            }maxr--;
            if(minr>maxr||minc>maxc) break;
            for(int i=maxr;i>=minr;i--){
                ans[i][minc]=num++;
            }minc++;
        }return ans;
        
    }
};