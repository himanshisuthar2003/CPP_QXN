#include <iostream>
using namespace std;


int main() {
	int r;
	cin>>r;
	if(0<r && r<51){
	    cout<<"100";
	}
	else if (50<r && r<101){
	    cout<<"50";
	}
	else{
	    cout<<"0";
	}
	return 0;
}