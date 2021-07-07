#include<iostream>

using namespace std;

string NumberToString(int num){   //Number to string conversion.
string s = " ";
while(num){
int rem = num%10;
s += (rem+'0');
num /= 10;
}
return s;
}

int main(){						 // Main function.
int num =123,i;
string s = NumberToString(num) ; //Function call.
i = s.size();
cout<<"' ";
while(i-- != 0){
cout<<s[i];
}
cout<<"'";
}