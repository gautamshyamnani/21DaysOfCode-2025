#include<iostream>
#include<vector>
using namespace std;
bool SearchMatrix(vector<vector<int>>matrix,int target){
    int m=matrix.size(),n=matrix[0].size();
    int r=0,c=n-1;
    while(r<m && c>=0){
        if(target==matrix[r][c]){
            return true;
        }else if(target>matrix[r][c]){
            r++;
        }else{
            c--;
        }
    }
    return false;
}
int main(){
    vector<vector<int>>matrix={{1,4,7},{2,5,8},{3,6,9}};
    int m=matrix.size(),n=matrix[0].size();
    int target=9;
    if(SearchMatrix(matrix,target)){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
    return 0;
}
