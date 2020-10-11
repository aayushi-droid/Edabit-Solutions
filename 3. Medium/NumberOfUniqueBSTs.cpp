/* Problem statement : Given n, how many structurally unique BST's (binary search trees) are there that store values 1 ... n ?
This question uses catalan number series(1, 1, 2, 5, 14, 42....) which is also used to solve many number-pattern questions.

Problem link : https://leetcode.com/problems/unique-binary-search-trees/ 
*/


int numTrees(int n) {
	  //create an array 
      int dp[n+1];
      //starting of series
      if(n==0 || n==1) return n;
      //initialize starting of series 
      dp[0]=1; dp[1]=1;
      
      for(int i=2;i<=n;i++)
      {
          dp[i]=0;
          for(int j=0;j<i;j++)
          {
              dp[i]+=dp[j]*dp[i-j-1];
          }
      }
      //returns the Nth number in catalan series
      return dp[n];
}

int main(){
	int n;
	//enter the number N 
	cin>>n;
	return 0;
}
