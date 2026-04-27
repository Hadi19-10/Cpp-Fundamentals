#include<iostream>
using namespace std;
int main(){
	int arr[3][3][3]={{1,0,1},{0,1,1},{1,1,1}};
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			for(int k=0;k<3;k++){
				if(arr[i][j][k]==0){
					arr[i][j][k]=1;
				}
				else if(arr[i][j][k]==1){
					arr[i][j][k]=0;
				}
			}
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			for(int k=0;k<3;k++){
				cout<<arr[i][j][k]<<" ";
			}
		}
	}
	
	return 0;
}