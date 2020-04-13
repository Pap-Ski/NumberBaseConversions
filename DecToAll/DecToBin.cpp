#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int userInput;
    int decNum; //decimal number
    vector<int> binNum; 	//containing all remainders to form binary number
    int rem;	//remainder
    
    cout << "Enter a non-negative whole decimal number: ";
    cin >> userInput;
    decNum = userInput;
    
	if(decNum == 0 || decNum ==1){
		binNum.push_back(decNum);
	} else {
		while(decNum != 1){
			rem = decNum % 2;
			decNum = decNum / 2;
			binNum.push_back(rem);
			if(decNum == 1){
				binNum.push_back(decNum);
			}
		}
	}
	
	cout << userInput << " in binary is: ";
	//print remainders from the last element in vector
	for(int c = binNum.size() - 1; c >= 0; c--){
			cout << binNum[c];
	}
    
    return 0;
}
