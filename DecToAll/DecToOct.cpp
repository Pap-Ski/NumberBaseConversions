#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int userInput;
    int decNum;		// the decimal number
    vector<int> octNum;		//containing all remainders to form octal number
    int rem; 	//remainder

    cout <<"Enter a non-negative whole decimal number: ";
    cin >> userInput;
    decNum = userInput;
    
	if(decNum >= 0 && decNum < 8){
		octNum.push_back(decNum);
	} else {
		while(decNum >= 8){
			rem = decNum % 8;
			decNum = decNum / 8;
			octNum.push_back(rem);
			if(decNum < 8 && decNum > 0){
				octNum.push_back(decNum);
				break;
			}
		}
	}
	
	cout << userInput << " in octal is: ";
	//print remainders from the last element in vector
	for(int c = octNum.size() - 1; c >= 0; c--){
			cout << octNum[c];
	}
    
    return 0;
}
