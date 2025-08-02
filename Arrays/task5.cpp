#include<iostream>
using namespace std;
bool check(string word,char character)
{
bool found = false;
for (int i = 0; word[i] != '\0'; i++) 
{
if (word[i] == character)
{
found = true;
break;
}
}
return found;
}
main()
{
char word[100],character;
cout << "Enter a word: ";
cin >> word;
cout << "Enter a character: ";
cin >> character;
if(check(word,character)) 
{
cout << character << " is found in " << word << endl;
} 
else 
{
cout << character << " is not found in " << word << endl;
}
return 0;
}
