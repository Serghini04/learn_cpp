#include<iostream>
#include<cstdlib>
using namespace std;
 int RandomNumber(intFrom, intTo){
	randNum = rand() % (To - From + 1) + From;
	return randNum;
}
 int main() {
	srand((unsigned)time(NULL));
 	cout << RandomNumber(1, 10) << endl;
 	cout << RandomNumber(1, 10) << endl;
  	cout << RandomNumber(1, 10) << endl;
   return 0; }