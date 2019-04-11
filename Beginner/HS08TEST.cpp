#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	float a,b;
	cin>>a>>b;

	float res1 = b - 0.5;
	float res2 = b - a - 0.5;
	
	if(a>res1 || fmod(a,5.0)!=0){
	    printf("%.2f\n",b);
	}else{
	    printf("%.2f\n",res2);
	}

	return 0;
}