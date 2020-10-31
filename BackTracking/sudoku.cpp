// Problem from GFG

bool isSafe(int i, int j,int num,int grid[9][9]){
    for(int p=0;p<9;p++){
        if(grid[i][p]==num){
            return false;
        }
        if(grid[p][j]==num){
            return false;
        }
    }
  
    int s = sqrt(9);
    i = i - (i%s);
    j = j - (j%s);
    for(int l =0;l<s;l++){
        for(int m=0;m<s;m++){
            if(grid[l+i][m+j]==num){
                return false;
            }
        }
    }
    return true;
}
bool SolveSudoku(int grid[N][N])  
{ 
    bool flag = false;
    int i,j;
    for( i=0;i<N;i++){
        for( j=0;j<N;j++){
            if(grid[i][j]==0){
                flag = true;
                break;
            }
        }
        if(flag){
            break;
        }
    }
    if(i==N && j==N){
        return true;
    }
    for(int k=1;k<=N;k++){
        if(isSafe(i,j,k,grid)){
            grid[i][j] = k;
            if(SolveSudoku(grid)){
                 return true;
            }
               
            grid[i][j] = 0;    
        }
    }
 return false;   
}

void printGrid (int grid[N][N]) 
{
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<grid[i][j]<<" ";
        }
    }
   
}
