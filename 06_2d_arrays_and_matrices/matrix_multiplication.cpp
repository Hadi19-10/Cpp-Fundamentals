#include<iostream>
using namespace std;
int main(){
	int rows=3;
	int column=3;
	int arr[rows][column]={{1,2,3},{4,5,6},{7,8,9}};
	int arr1[rows][column]={{1,2,3},{1,2,3},{1,2,3}};
	int mul[rows][column]={0};
	if(rows==column){
	    for(int i=0;i<rows;i++){
		    for(int j=0;j<rows;j++){
			    for (int k=0;k<rows;k++){
		  	        mul[i][j]+=arr[i][k]*arr1[k][j];
		        }
		    }
		}
		for(int i=0;i<rows;i++){
		    for(int j=0;j<rows;j++){
		  	    cout<<mul[i][j]<<" ";
		    }
		    cout<<endl;
		}	
    }
    return 0;
}