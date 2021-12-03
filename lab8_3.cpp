#include<iostream>
#include<string>
using namespace std;

char before(char x){
	//Write your function definition here
	string num ="0123456789";
	string albet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char k = '0';
	int i = 0;
	while (i < 27)
	{   
	    if(toupper(x) == albet[i]){
			if (x == albet[i]){
			 if (i != 0){
				return albet[i-1];
			}
			 if (i == 0){
				return albet[25];
			}
	        }
		    else{
			  return k;
		    }
		}
		if (x == num[i]){
			return k;
		}
    i++;
	}
	return 0;
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
