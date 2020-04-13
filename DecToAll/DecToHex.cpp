#include<iostream>
#include<vector>
using namespace std;
		
int main()
{
    int userInput;
    int decNum; 	// the decimal number
    vector<int> hexNum;		//containing all remainders to form hex number
    int rem;	// remainder
    
    cout << "Enter a non-negative whole decimal number: ";
    cin >> userInput;
    decNum = userInput;
    
	if(decNum >= 0 && decNum < 16){
			hexNum.push_back(decNum);
	} else {
		while(decNum >= 16){
			rem = decNum % 16;
			decNum = decNum / 16;
			hexNum.push_back(rem);
			if(decNum > 0 && decNum < 16){
				hexNum.push_back(decNum);
				break;
			}
		}
	}
	
	cout << userInput << " in hexadecimal is: ";
	// print remainders from last element in vector
	for(int c = hexNum.size() - 1; c >= 0; c--){
		switch(hexNum[c]){
		case 10:
			cout << "A";
			break;
		case 11:
			cout << "B";
			break;
		case 12:
			cout << "C";
			break;
		case 13:
			cout << "D";
			break;
		case 14:
			cout << "E";
			break;
		case 15:
			cout << "F";
			break;
		default:
			cout << hexNum[c];
		}
	}
    
    return 0;
}


